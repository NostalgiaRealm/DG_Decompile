/*
 * FUN_1003c5e8 at 1003c5e8
 * undefined FUN_1003c5e8(void)
 * Address ranges: 1003c5e8-1003c677
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003c5e8(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2,*(undefined4 *)(param_1 + 0xd9d4),0);
  uVar2 = (*pcVar1)();
  (*extraout_w11_00)(uVar2,*(undefined4 *)(param_1 + 0xd9d0),0);
  return;
}

