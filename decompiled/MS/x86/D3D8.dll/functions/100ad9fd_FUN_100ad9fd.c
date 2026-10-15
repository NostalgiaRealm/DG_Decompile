/*
 * FUN_100ad9fd at 100ad9fd
 * undefined __cdecl FUN_100ad9fd(short * param_1, short * param_2)
 * Address ranges: 100ad9fd-100ada1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100ad9fd(short *param_1,short *param_2)

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

