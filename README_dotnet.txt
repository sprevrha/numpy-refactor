Build instructions for numpy-refactor for .NET version 2.0.0, tested on 
- MSVS 2010 with Intel® Parallel Studio XE 2015 Update 4 Composer Edition for C++ Windows* Integration for Microsoft* Visual Studio* 2010, Version 15.0.1386.2010.XE
- IronPython 32-bit 2.7.5.0 on .NET 4.0.30319.1022 (32-bit)
- Compile configuration Release/Debug

Instructions

Set IRONPYTHON_HOME env var to the directory containing ipy.exe
Put ipy on the PATH
Open numpy-refactor-root-dir\numpy\NumpyDotNet\NumpyDotNet.sln. In the Solution Explorer Widget check the References of NumpyDotNet and ensure that the references to IronPython and IronPython.Moodules are resolved (i.e. do not have a yellow warning triangle badge). If they are unresolved, remove them and add them again,

Open a Visual Studio Command Prompt "Run as Administrator" 
cd to the root directory of numpy-refactor
run ipy iron_setup.py --release
This triggers the build and the install into your IronPython installation.