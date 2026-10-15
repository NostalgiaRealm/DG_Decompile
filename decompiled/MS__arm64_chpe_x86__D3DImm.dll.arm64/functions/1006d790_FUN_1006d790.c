/*
 * FUN_1006d790 at 1006d790
 * undefined FUN_1006d790(void)
 * Address ranges: 1006d790-1006d7ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006d790(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (*(int *)(param_2 + 0xd68) != 0) {
    FUN_1006e050(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xd6c));
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
    *(undefined4 *)(param_2 + 0xd6c) = 0;
    *(int *)(param_2 + 0xd68) = 0;
  }
  return;
}

