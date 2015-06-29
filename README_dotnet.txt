Build instructions for numpy-refactor for .NET version 2.0.0, tested on 
- MSVS 2010 with Intel® Parallel Studio XE 2015 Update 4 Composer Edition for C++ Windows* Integration for Microsoft* Visual Studio* 2010, Version 15.0.1386.2010.XE
- IronPython 32-bit 2.7.5.0 on .NET 4.0.30319.1022 (32-bit)
- Compile configuration Release/Debug

Instructions
- download IronPython 2.7.5 (http://ironpython.net/) and install
- set IRONPYTHON_HOME env var to the directory containing ipy.exe
- put ipy on the PATH (e.g. append ;"C:\Program Files (x86)\IronPython 2.7")
- open <numpy-refactor-root-dir>\numpy\NumpyDotNet\NumpyDotNet.sln
   * Add References to DLLs (IronPython and IronPython.Modules) to the NumpyDotNet project.
   * On my machine, they are in C:\Program Files (x86)\IronPython 2.7\Platforms\Net40\
   * In the Solution Explorer Widget check the References of NumpyDotNet and ensure that the references to IronPython and IronPython.Moodules are resolved (i.e. do not have a yellow warning triangle badge). If they are unresolved, remove them and add them again,
   * do not build the solution
- Open a "Visual Studio Command Prompt" (Start->..) use "Run as Administrator" (Right mouse click)
- cd to <numpy-refactor-root-dir>
- run ipy iron_setup.py --release (This triggers the build and the install into your IronPython installation.)