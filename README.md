# SuiteSparse-MSVC

This is my MSVC (2015) project used for building SuiteSparse natively on windows.

It includes:
* AMD
* CAMD
* COLAMD
* CCOLAMD
* BTF
* LDL
* KLU
* CHOLMOD

GPU algorithms are not contained.

All these packages (together with metis, the dependency of CHOLMOD) are compiled into a single static library.

I use this project to build SuiteSparse 4.5.3, and it requires a build of metis-5.1.0.

## How to build

First of all, you have to prepare your SuiteSparse source code. Download it from its website and extract it somewhere.

Then, clone or download this project, put it inside the root of SuiteSparse source tree. It will looks like:
* SuiteSparse
  * AMD\
  * BTF\
  * ...
  * **SuiteSparse-MSVC**\
  * ...
  * LICENSE.txt
  * Makefile
  * ...

SuiteSparse comes with metis. And it can be built with CMake.
You have to manually set x64 MSVC generator.

Metis code may not build smoothly since there seemed to have some old workarounds that conflict with MSVC 2015's library.
They are some preprocessor definitions so I just commented them out.

You will get a static library of metis, say `metis.lib`. Put it inside the folder of my msvc build project (aside of `SuiteSparse.vcxproj`).
Open the solution and build.

If everything works, it will generate `SuiteSparse.lib` under \SuiteSparse-MSVC\x64\Release.
