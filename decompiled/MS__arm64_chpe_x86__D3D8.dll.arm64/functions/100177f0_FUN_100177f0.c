/*
 * FUN_100177f0 at 100177f0
 * undefined FUN_100177f0(void)
 * Address ranges: 100177f0-1001785f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100177f0(int param_1)

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
    FUN_100fed20(*(undefined4 *)(iVar1 + -4));
  }
  *(int *)(param_1 + 4) = 0;
  return;
}

