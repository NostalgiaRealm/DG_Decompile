/*
 * FUN_1400251e8 at 1400251e8
 * undefined __cdecl FUN_1400251e8(short * param_1, short * param_2)
 * Address ranges: 1400251e8-1400251fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400251e8(short *param_1,short *param_2)

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

