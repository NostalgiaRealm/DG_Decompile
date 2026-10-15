/*
 * FUN_1800601b0 at 1800601b0
 * undefined __cdecl FUN_1800601b0(short * param_1, short * param_2)
 * Address ranges: 1800601b0-1800601c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800601b0(short *param_1,short *param_2)

{
  short sVar1;
  
  do {
    sVar1 = *param_2;
    *param_1 = sVar1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (sVar1 != 0);
  return;
}

