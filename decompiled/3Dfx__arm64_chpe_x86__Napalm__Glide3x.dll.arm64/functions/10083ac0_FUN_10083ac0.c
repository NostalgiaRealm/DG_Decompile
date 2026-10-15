/*
 * FUN_10083ac0 at 10083ac0
 * undefined FUN_10083ac0(void)
 * Address ranges: 10083ac0-10083ae3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

short * FUN_10083ac0(short *param_1,short *param_2)

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

