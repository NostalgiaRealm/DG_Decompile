/*
 * FUN_1006f068 at 1006f068
 * undefined FUN_1006f068(void)
 * Address ranges: 1006f068-1006f107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006f068(int param_1,int param_2,int param_3,ulonglong param_4)

{
  ulonglong uVar1;
  code *extraout_w11;
  undefined1 auVar2 [16];
  
  param_1 = param_1 + param_2 * 0x1510;
  uVar1 = param_4 & 0xffffffff;
  if (((param_3 != *(int *)(param_1 + 0x7c4)) || ((int)param_4 != *(int *)(param_1 + 0x7c8))) ||
     (*(int *)(param_1 + 0x7cc) != 0)) {
    *(int *)(param_1 + 0x7c4) = param_3;
    *(int *)(param_1 + 0x7c8) = (int)param_4;
    *(undefined4 *)(param_1 + 0x7cc) = 0;
    auVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff,uVar1 & 0xffffffff,0);
  }
  return;
}

