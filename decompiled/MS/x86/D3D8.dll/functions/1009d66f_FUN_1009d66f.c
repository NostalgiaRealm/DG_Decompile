/*
 * FUN_1009d66f at 1009d66f
 * undefined __stdcall FUN_1009d66f(int param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 1009d66f-1009d68d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009d66f(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *param_3 = uVar1;
  param_3[1] = 0;
  *param_2 = uVar1;
  param_2[1] = 0;
  return;
}

