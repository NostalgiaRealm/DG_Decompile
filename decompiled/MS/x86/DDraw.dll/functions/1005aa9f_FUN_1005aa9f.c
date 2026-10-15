/*
 * FUN_1005aa9f at 1005aa9f
 * undefined __stdcall FUN_1005aa9f(int param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 1005aa9f-1005aabd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005aa9f(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *param_3 = uVar1;
  param_3[1] = 0;
  *param_2 = uVar1;
  param_2[1] = 0;
  return;
}

