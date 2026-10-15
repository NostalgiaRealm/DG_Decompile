/*
 * FUN_10066f20 at 10066f20
 * undefined FUN_10066f20(void)
 * Address ranges: 10066f20-10066f8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10066f20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  if (*(int *)(param_1 + 300) != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,1);
  }
  *(int *)(param_1 + 300) = 0;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    FUN_10081dd0(*(undefined4 *)(iVar1 + -4));
  }
  *(int *)(param_1 + 4) = 0;
  return;
}

