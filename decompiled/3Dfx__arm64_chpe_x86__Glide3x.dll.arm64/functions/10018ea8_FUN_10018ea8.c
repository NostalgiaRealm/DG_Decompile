/*
 * FUN_10018ea8 at 10018ea8
 * undefined FUN_10018ea8(void)
 * Address ranges: 10018ea8-10018f1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10018ea8(int param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  code *extraout_w11;
  undefined1 auVar2 [16];
  
  uVar1 = (ulonglong)(*(uint *)(param_1 + 0x1bc) < param_3);
  if (*(uint *)(param_1 + 0x1b8) < param_2 || *(uint *)(param_1 + 0x1bc) < param_3) {
    auVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                       (param_1,*(uint *)(param_1 + 0x1b8) < param_2,uVar1);
    (*extraout_w11)(auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff,uVar1 & 0xffffffff);
  }
  return;
}

