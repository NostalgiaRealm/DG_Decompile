/*
 * FUN_180223210 at 180223210
 * undefined FUN_180223210(void)
 * Address ranges: 180223210-180223223
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180223210(short *param_1,short *param_2)

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

