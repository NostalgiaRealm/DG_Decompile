/*
 * FUN_180061000 at 180061000
 * undefined __cdecl FUN_180061000(short * param_1, short * param_2)
 * Address ranges: 180061000-180061013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180061000(short *param_1,short *param_2)

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

