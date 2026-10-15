/*
 * FUN_100381c0 at 100381c0
 * undefined FUN_100381c0(void)
 * Address ranges: 100381c0-10038217
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100381c0(int param_1)

{
  ulonglong uVar1;
  code *extraout_w11;
  undefined1 auVar2 [16];
  
  uVar1 = (ulonglong)(param_1 + 0x40);
  auVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff,uVar1 & 0xffffffff);
  return;
}

