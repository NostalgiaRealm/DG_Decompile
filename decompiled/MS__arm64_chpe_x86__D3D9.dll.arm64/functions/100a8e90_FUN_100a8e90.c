/*
 * FUN_100a8e90 at 100a8e90
 * undefined FUN_100a8e90(void)
 * Address ranges: 100a8e90-100a8f87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_100a8e90(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,int param_5,
            uint *param_6,int param_7,int param_8,int param_9)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 *extraout_w8;
  code *extraout_w11;
  undefined1 auVar5 [16];
  int local_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  int local_10;
  int iStack_c;
  
  uVar1 = (ulonglong)*param_6;
  iStack_14 = (param_6[3] - *param_6) + param_7;
  local_18 = param_9;
  uVar2 = (ulonglong)param_6[1];
  local_10 = (param_6[4] - param_6[1]) + param_8;
  uVar3 = (ulonglong)param_6[2];
  iStack_c = (param_6[5] - param_6[2]) + param_9;
  puVar4 = (undefined4 *)&DAT_00000034;
  if (param_5 != 0) {
    puVar4 = (undefined4 *)(param_5 + 0x18);
  }
  local_20 = param_7;
  iStack_1c = param_8;
  auVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(auVar5._0_8_ & 0xffffffff,*extraout_w8,auVar5._8_8_ & 0xffffffff,
                  uVar1 & 0xffffffff,uVar2 & 0xffffffff,uVar3 & 0xffffffff,*puVar4,
                  param_3 & 0xffffffff,&local_20);
  return 1;
}

