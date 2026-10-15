/*
 * FUN_1800fc934 at 1800fc934
 * short * __fastcall FUN_1800fc934(short * param_1, short * param_2)
 * Address ranges: 1800fc934-1800fc94e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

short * FUN_1800fc934(short *param_1,short *param_2)

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

