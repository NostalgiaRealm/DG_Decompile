/*
 * FUN_1004fe88 at 1004fe88
 * undefined __cdecl FUN_1004fe88(short * param_1, short * param_2)
 * Address ranges: 1004fe88-1004fea7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1004fe88(short *param_1,short *param_2)

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

