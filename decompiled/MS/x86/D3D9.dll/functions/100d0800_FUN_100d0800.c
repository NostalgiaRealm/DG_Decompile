/*
 * FUN_100d0800 at 100d0800
 * undefined __cdecl FUN_100d0800(short * param_1, short * param_2)
 * Address ranges: 100d0800-100d081f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100d0800(short *param_1,short *param_2)

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

