/*
 * FUN_10055b58 at 10055b58
 * undefined __cdecl FUN_10055b58(short * param_1, short * param_2)
 * Address ranges: 10055b58-10055b77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10055b58(short *param_1,short *param_2)

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

