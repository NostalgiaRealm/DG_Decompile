/*
 * FUN_1004faf8 at 1004faf8
 * undefined __cdecl FUN_1004faf8(short * param_1, short * param_2)
 * Address ranges: 1004faf8-1004fb17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1004faf8(short *param_1,short *param_2)

{
  short sVar1;
  
  do {
    sVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = sVar1;
    param_1 = param_1 + 1;
  } while (sVar1 != 0);
  return;
}

