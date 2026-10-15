/*
 * FUN_10108dc0 at 10108dc0
 * undefined FUN_10108dc0(void)
 * Address ranges: 10108dc0-10108e2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10108dc0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (*(int *)(param_2 + 0xd68) != 0) {
    FUN_101097e0(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xd6c));
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
    *(undefined4 *)(param_2 + 0xd6c) = 0;
    *(int *)(param_2 + 0xd68) = 0;
  }
  return;
}

