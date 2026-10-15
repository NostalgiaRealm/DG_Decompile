/*
 * FUN_10047aac at 10047aac
 * undefined __cdecl FUN_10047aac(int * param_1)
 * Address ranges: 10047aac-10047abe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10047aac(int *param_1)

{
  *(char *)(*param_1 + 0x80) = (char)param_1[1];
  return;
}

