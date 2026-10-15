/*
 * FUN_100bfc47 at 100bfc47
 * undefined __stdcall FUN_100bfc47(int param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 100bfc47-100bfc65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bfc47(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *param_3 = uVar1;
  param_3[1] = 0;
  *param_2 = uVar1;
  param_2[1] = 0;
  return;
}

