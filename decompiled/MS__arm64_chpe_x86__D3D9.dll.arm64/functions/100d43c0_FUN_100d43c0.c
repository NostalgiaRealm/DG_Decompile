/*
 * FUN_100d43c0 at 100d43c0
 * undefined FUN_100d43c0(void)
 * Address ranges: 100d43c0-100d442f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d43c0(int param_1,int param_2,int param_3,ulonglong param_4)

{
  int iVar1;
  code *extraout_w11;
  undefined1 auVar2 [16];
  
  param_4 = param_4 & 0xffffffff;
  iVar1 = 0x6ff0;
  if (param_2 != 1) {
    iVar1 = 0x12ac;
  }
  auVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                     (*(undefined4 *)(param_1 + 0x14),param_3,param_4,
                      param_1 + param_3 * 0x10 + iVar1);
  (*extraout_w11)(auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff,param_4 & 0xffffffff);
  return;
}

