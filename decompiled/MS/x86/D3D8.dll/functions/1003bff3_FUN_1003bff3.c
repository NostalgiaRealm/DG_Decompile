/*
 * FUN_1003bff3 at 1003bff3
 * undefined __cdecl FUN_1003bff3(int * param_1)
 * Address ranges: 1003bff3-1003c005
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1003bff3(int *param_1)

{
  *(char *)(*param_1 + 0x80) = (char)param_1[1];
  return;
}

