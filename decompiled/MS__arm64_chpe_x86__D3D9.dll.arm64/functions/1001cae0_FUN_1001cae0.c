/*
 * FUN_1001cae0 at 1001cae0
 * undefined FUN_1001cae0(void)
 * Address ranges: 1001cae0-1001cb4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001cae0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,1);
  }
  *(int *)(param_1 + 0x40) = 0;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    FUN_10132440(*(undefined4 *)(iVar1 + -4));
  }
  *(int *)(param_1 + 4) = 0;
  return;
}

