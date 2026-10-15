/*
 * FUN_100395a0 at 100395a0
 * undefined FUN_100395a0(void)
 * Address ranges: 100395a0-10039657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100395a0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  
  FUN_10023ce0(param_1,*(undefined4 *)(param_1 + 0x54));
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2);
  *(undefined4 *)(param_1 + 0x100) = 0;
  uVar2 = (*pcVar1)();
  (*extraout_w11_00)(uVar2);
  *(undefined4 *)(param_1 + 0xfc) = 0;
  FUN_10038c50(param_1);
  FUN_10038558(param_1);
  FUN_10038438(param_1);
  FUN_100389d8(param_1);
  return;
}

