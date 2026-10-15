/*
 * FUN_1004c8a0 at 1004c8a0
 * undefined FUN_1004c8a0(void)
 * Address ranges: 1004c8a0-1004c937
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004c8a0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + 0xdbe4) != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,*(undefined4 *)(param_1 + 0xdbf8),*(undefined4 *)(param_1 + 0xdc08),0);
  }
  if (*(int *)(param_1 + 0xdbf4) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2,*(undefined4 *)(param_1 + 0xdc18),*(undefined4 *)(param_1 + 0xdc1c),0);
  }
  return;
}

