/*
 * FUN_18005e030 at 18005e030
 * short * __fastcall FUN_18005e030(short * param_1, short * param_2)
 * Address ranges: 18005e030-18005e04a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

short * FUN_18005e030(short *param_1,short *param_2)

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

