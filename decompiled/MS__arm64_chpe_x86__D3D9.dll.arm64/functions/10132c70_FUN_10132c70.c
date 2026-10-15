/*
 * FUN_10132c70 at 10132c70
 * undefined FUN_10132c70(void)
 * Address ranges: 10132c70-10132c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

short * FUN_10132c70(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *param_2;
    param_2 = param_2 + 1;
    *psVar2 = sVar1;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return param_1;
}

