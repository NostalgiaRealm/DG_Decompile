/*
 * ___ascii_iswalpha at 100556da
 * undefined4 __cdecl ___ascii_iswalpha(int param_1)
 * Address ranges: 100556da-100556fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  ___ascii_iswalpha  Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release
 */

/* Library Function - Single Match
    ___ascii_iswalpha
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

undefined4 __cdecl ___ascii_iswalpha(int param_1)

{
  if (((param_1 < 0x41) || (0x5a < param_1)) && (0x19 < param_1 - 0x61U)) {
    return 0;
  }
  return 1;
}

