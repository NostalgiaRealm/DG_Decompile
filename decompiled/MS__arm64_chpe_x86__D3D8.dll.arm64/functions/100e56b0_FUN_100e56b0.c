/*
 * FUN_100e56b0 at 100e56b0
 * undefined FUN_100e56b0(void)
 * Address ranges: 100e56b0-100e5883
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_100e56b0(int param_1,undefined4 param_2,ulonglong param_3,undefined4 param_4,int param_5,
            int *param_6)

{
  undefined4 uVar1;
  code *extraout_w11;
  undefined4 local_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined4 local_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  ulonglong local_90;
  undefined8 local_88;
  undefined4 local_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  FUN_100ec718(*(undefined4 *)(param_1 + 0x8e4),*(undefined4 *)(param_5 + 4),0,1,
               *(int *)(param_1 + 0x8e0),param_1,0x800,*(undefined8 *)(param_1 + 0x938));
  FUN_100e1588(param_1,param_2,param_3 & 0xffffffff,0,0x400);
  FUN_100eb418(param_4,*(undefined4 *)(param_5 + 0x18),*(longlong *)(param_5 + 8),
               *(longlong *)(param_5 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x8e0) + 0xc),
               *(undefined8 *)(param_1 + 0x938));
  local_b0 = *(undefined4 *)(param_5 + 4);
  uStack_6c = 0;
  local_88 = 0;
  uStack_ac = 1;
  local_a8 = *(longlong *)(param_5 + 8) - *(longlong *)(param_5 + 0x10);
  uStack_58 = 0;
  local_60 = 0;
  local_50 = 0;
  iStack_7c = param_6[3] - *param_6;
  _local_a0 = CONCAT44(iStack_7c,*(undefined4 *)(param_5 + 0x20));
  local_80 = 0;
  local_78 = param_6[4] - param_6[1];
  iStack_74 = param_6[5] - param_6[2];
  _local_98 = CONCAT44(iStack_74,local_78);
  local_90 = (ulonglong)*(uint *)(param_5 + 0x1c);
  local_70 = param_2;
  local_68 = param_3 & 0xffffffff;
  FUN_100e0818(param_1);
  FUN_100e09c8(param_1);
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,&local_70,*param_6,param_6[1],param_6[2],&local_b0,&local_88);
  FUN_100e0960(param_1);
  return 1;
}

