/*
 * FUN_10037d40 at 10037d40
 * undefined FUN_10037d40(void)
 * Address ranges: 10037d40-10037d97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037d40(int param_1)

{
  ulonglong uVar1;
  code *extraout_w11;
  undefined1 auVar2 [16];
  
  uVar1 = (ulonglong)(param_1 + 0x40);
  auVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff,uVar1 & 0xffffffff);
  return;
}

