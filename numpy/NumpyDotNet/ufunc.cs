﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.InteropServices;
using System.Runtime.CompilerServices;
using IronPython.Runtime;
using IronPython.Modules;
using Microsoft.Scripting;
using NumpyDotNet;

namespace NumpyDotNet {
    public class ufunc : Wrapper
    {
         private static String[] ufuncArgNames = { "extobj", "sig" };

         internal ufunc(IntPtr corePtr) {
            core = corePtr;

            // The core object comes with a reference so we need to set the interface
            // pointer and then discard the core reference, leaving just this instance
            // as the sole reference to it.
            IntPtr offset = Marshal.OffsetOf(typeof(NpyCoreApi.NpyObject_HEAD), "nob_interface");
            Marshal.WriteIntPtr(corePtr, (int)offset,
                GCHandle.ToIntPtr(GCHandle.Alloc(this, GCHandleType.Weak)));
            NpyCoreApi.Decref(corePtr);
        }


        ~ufunc()
        {
            Dispose(false);
        }

        internal IntPtr UFunc {
            get { return core; }
        }

        public object Call(Object a) {
            if (nin == 1) {
                return NpyCoreApi.GenericUnaryOp(NpyArray.FromAny(a), this);
            }
            throw new ArgumentException("Insufficient number of arguments.");
        }

        public object Call(Object a, Object b) {
            if (nin == 1) {
                return NpyCoreApi.GenericUnaryOp(NpyArray.FromAny(a), this, (ndarray)b);
            } else if (nin == 2) {
                return NpyCoreApi.GenericBinaryOp(NpyArray.FromAny(a), NpyArray.FromAny(b), this);
            }
            throw new ArgumentException("Insufficient number of arguments.");
        }

        public object Call(Object a, Object b, Object c) {
            if (nin == 2) {
                return NpyCoreApi.GenericBinaryOp(NpyArray.FromAny(a),
                    NpyArray.FromAny(b), this, (ndarray)c);
            }
            throw new ArgumentException("Insufficient number of arguments.");
        }



        #region Python interface

        public string __repr__() {
            return String.Format("<ufunc '{0}'>", __name__());
        }

        public string __str__() {
            // TODO: Unimplemented
            return "str";
        }

        public int nin {
            get {
                CheckValid();
                return Marshal.ReadInt32(core, NpyCoreApi.UFuncOffsets.off_nin);
            }
        }

        public int nout {
            get {
                CheckValid();
                return Marshal.ReadInt32(core, NpyCoreApi.UFuncOffsets.off_nout); 
            }
        }

        public int nargs {
            get {
                CheckValid();
                return Marshal.ReadInt32(core, NpyCoreApi.UFuncOffsets.off_nargs);
            }
        }

        public int ntypes {
            get {
                CheckValid();
                return Marshal.ReadInt32(core, NpyCoreApi.UFuncOffsets.off_ntypes);
            }
        }

        // TODO: Implement 'types'
        public override string ToString() {
            return __name__();
        }

        public string __name__() {
            CheckValid();
            IntPtr strPtr = Marshal.ReadIntPtr(core, NpyCoreApi.UFuncOffsets.off_name);
            return (strPtr != IntPtr.Zero) ? Marshal.PtrToStringAnsi(strPtr) : null;
        }

        // TODO: Implement 'identity'

        public string signature() {
            CheckValid();
            IntPtr strPtr = Marshal.ReadIntPtr(core, NpyCoreApi.UFuncOffsets.off_core_signature);
            return (strPtr != IntPtr.Zero) ? Marshal.PtrToStringAnsi(strPtr) : null;
        }


        #endregion

        public static ufunc GetFunction(string name) {
            return umath.GetUFunc(name);
        }


        /// <summary>
        /// Simply checks to verify that the object was correctly initialized and hasn't
        /// already been disposed before we go accessing native memory.
        /// </summary>
        private void CheckValid() {
            if (core == IntPtr.Zero)
                throw new InvalidOperationException("UFunc object is invalid or already disposed.");
        }

    }
}
