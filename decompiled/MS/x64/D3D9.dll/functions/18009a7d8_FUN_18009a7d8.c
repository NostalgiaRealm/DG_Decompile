/*
 * FUN_18009a7d8 at 18009a7d8
 * undefined __fastcall FUN_18009a7d8(longlong * param_1, uint param_2, uint param_3, uint param_4, uint param_5, int param_6, int param_7, undefined4 param_8, int param_9, undefined4 param_10, undefined4 param_11, int param_12, int param_13, char param_14, char param_15, byte param_16, char param_17)
 * Address ranges: 18009a7d8-18009aae9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009a7d8(longlong *param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6
                  ,int param_7,undefined4 param_8,int param_9,undefined4 param_10,
                  undefined4 param_11,int param_12,int param_13,char param_14,char param_15,
                  byte param_16,char param_17)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 local_138;
  int iStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  int local_110 [2];
  undefined8 local_108;
  ulonglong local_100;
  uint local_f8;
  undefined8 local_f4;
  int local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  int local_d8;
  uint local_d4;
  int local_d0;
  undefined8 local_cc;
  int local_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  int local_98 [6];
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_d0 = 0;
  *(char *)((longlong)param_1 + 0x4d) = param_15;
  if (((*(char *)((ulonglong)*(uint *)(param_1 + 1) * 0x20 + 0x6e8 + *param_1) != '\0') &&
      (param_14 == '\0')) || (param_15 == '\0')) {
    local_d0 = 1;
  }
  local_cc = 0;
  local_d8 = (-(uint)(local_d0 != 0) & 3) + 1;
  local_d4 = -(uint)(local_d0 != 0) & 3;
  bVar2 = FUN_180099ff4((longlong)param_1,param_4,param_5);
  if (!bVar2) {
    return;
  }
  if (param_15 == '\0') {
    param_2 = FUN_18009af10(param_2,(ulonglong)param_3,param_7,param_5,param_4,(longlong)param_1);
    param_17 = '\0';
    piVar6 = (int *)0x0;
    piVar5 = (int *)0x0;
    piVar4 = (int *)0x0;
    uVar3 = 0;
    puVar7 = (undefined4 *)0x0;
    local_110[0] = 1;
    local_f8 = 1;
    local_f4 = 0x10001;
    local_ec = 1;
    uStack_e4 = 1;
    uStack_e0 = 0;
    goto LAB_18009aac6;
  }
  local_98[0] = 1;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[4] = 0;
  uStack_e0 = (uint)(param_12 != 0) | -(uint)(param_13 != 0) & 2;
  local_110[0] = 3;
  local_f4 = CONCAT44(param_7,CONCAT22((short)param_4,(short)param_5));
  local_ec = param_6;
  uStack_e4 = 0;
  if ((param_17 == '\0') || (param_6 == 1)) {
    iStack_134 = (uint)param_16 * 4 + 5;
  }
  else {
    iStack_134 = 7;
  }
  uStack_130 = param_10;
  local_138 = param_8;
  local_128 = 0;
  uStack_120 = 0;
  uVar1 = param_5;
  if (iStack_134 == 5) {
LAB_18009a964:
    uStack_120 = (ulonglong)uVar1 << 0x20;
    local_128 = -0x100000000;
  }
  else {
    uStack_120._4_4_ = 0;
    if (iStack_134 == 7) {
      uStack_120 = 0;
      local_128 = (ulonglong)param_5 << 0x20;
    }
    else {
      uVar1 = uStack_120._4_4_;
      if (iStack_134 == 9) goto LAB_18009a964;
    }
  }
  local_118 = 0;
  _local_c0 = CONCAT44(iStack_134,param_9);
  local_a0 = 0;
  _uStack_b8 = CONCAT44(uStack_12c,param_11);
  local_b0 = local_128;
  lStack_a8 = uStack_120;
  if (iStack_134 == 5) {
    local_a0 = 1;
  }
  else if (iStack_134 == 9) {
    _local_c0 = CONCAT44(5,param_9);
    local_b0 = -0x100000000;
    lStack_a8 = (ulonglong)param_5 << 0x20;
    local_a0 = 0;
  }
  local_68 = param_12;
  local_80 = param_13;
  local_64 = 5;
  if (param_6 != 1) {
    local_64 = 7;
  }
  *(undefined4 *)(param_1 + 8) = param_8;
  local_60 = 0;
  uStack_58 = 0;
  local_7c = 4;
  if (param_6 != 1) {
    local_7c = 6;
  }
  local_78 = 0;
  uStack_70 = 0;
  if (param_12 != 0) {
    *(int *)(param_1 + 9) = param_12;
  }
  if (param_13 != 0) {
    *(int *)(param_1 + 9) = param_13;
  }
  piVar5 = (int *)(-(ulonglong)(param_13 != 0) & (ulonglong)&local_80);
  piVar4 = (int *)(-(ulonglong)(param_12 != 0) & (ulonglong)&local_68);
  uVar3 = -(ulonglong)(param_9 != 0) & (ulonglong)&local_c0;
  piVar6 = local_98;
  puVar7 = &local_138;
  local_f8 = param_3;
LAB_18009aac6:
  local_100 = (ulonglong)param_2;
  uStack_e8 = 0;
  local_108 = 0;
  FUN_18009a4ac(param_1,&local_d8,piVar6,local_110,(longlong)puVar7,uVar3,piVar4,piVar5,param_4,
                param_5,param_17);
  return;
}

