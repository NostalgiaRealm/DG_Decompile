/*
 * FUN_1004a6a8 at 1004a6a8
 * undefined FUN_1004a6a8(void)
 * Address ranges: 1004a6a8-1004a75f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004a6a8(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  
  FUN_10035040(param_1,*(undefined4 *)(param_1 + 0x54));
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2);
  *(undefined4 *)(param_1 + 0x100) = 0;
  uVar2 = (*pcVar1)();
  (*extraout_w11_00)(uVar2);
  *(undefined4 *)(param_1 + 0xfc) = 0;
  FUN_10049d58(param_1);
  FUN_10049660(param_1);
  FUN_10049540(param_1);
  FUN_10049ae0(param_1);
  return;
}

