/*
 * FUN_10061680 at 10061680
 * undefined __cdecl FUN_10061680(short * param_1, short * param_2)
 * Address ranges: 10061680-1006169f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10061680(short *param_1,short *param_2)

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

