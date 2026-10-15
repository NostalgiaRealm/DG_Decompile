/*
 * __initterm at 1004fb58
 * undefined __cdecl __initterm(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 1004fb58-1004fb73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __initterm  Library: Visual Studio 2012 Release
 */

/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 2012 Release */

void __cdecl __initterm(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}

