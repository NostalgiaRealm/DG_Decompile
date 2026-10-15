/*
 * FUN_1007a700 at 1007a700
 * undefined FUN_1007a700(void)
 * Address ranges: 1007a700-1007a723
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

short * FUN_1007a700(short *param_1,short *param_2)

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

