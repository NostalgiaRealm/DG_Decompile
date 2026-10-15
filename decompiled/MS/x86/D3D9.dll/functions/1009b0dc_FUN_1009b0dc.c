/*
 * FUN_1009b0dc at 1009b0dc
 * undefined4 __stdcall FUN_1009b0dc(int param_1, undefined4 * param_2)
 * Address ranges: 1009b0dc-1009b10a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009b0dc(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x5bd8) == 0) {
    *param_2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1009e6ef(*(int *)(param_1 + 0x5bd8),0x100d13a0,param_2);
  }
  return uVar1;
}

