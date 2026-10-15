/*
 * _initterm at 180060ffc
 * undefined __fastcall _initterm(undefined8 * param_1, undefined8 * param_2)
 * Address ranges: 180060ffc-18006102e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _initterm  Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release
 */

/* Library Function - Single Match
    _initterm
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void _initterm(undefined8 *param_1,undefined8 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}

