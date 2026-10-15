/*
 * FUN_10014f74 at 10014f74
 * undefined __thiscall FUN_10014f74(void * this, uint param_1, uint param_2, uint param_3, uint param_4, int param_5, undefined4 param_6, int param_7, int param_8, undefined4 param_9, undefined4 param_10, int param_11, int param_12, char param_13, char param_14, byte param_15, int param_16)
 * Address ranges: 10014f74-1001529d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10014f74(void *this,uint param_1,uint param_2,uint param_3,uint param_4,int param_5,
            undefined4 param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,
            int param_11,int param_12,char param_13,char param_14,byte param_15,int param_16)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 local_e8 [2];
  undefined8 local_e0;
  uint local_d8;
  undefined4 local_d4;
  uint local_d0;
  undefined2 local_cc;
  undefined2 local_ca;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b8;
  int local_b0 [4];
  int local_a0 [4];
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74 [9];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(char *)((int)this + 0x39) = param_14;
  if (((*(char *)(*(int *)((int)this + 4) * 0x18 + 0x530 + *(int *)this) == '\0') ||
      (param_13 != '\0')) && (param_14 != '\0')) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  local_7c = 0;
  local_88 = 1;
  if (bVar5 != 0) {
    local_88 = 4;
  }
  local_78 = 0;
  local_84 = 0;
  if (bVar5 != 0) {
    local_84 = 3;
  }
  local_80 = (uint)bVar5;
  bVar1 = FUN_100148dc(this,param_3,param_4);
  if (!bVar1) {
    return;
  }
  if (param_14 == '\0') {
    local_d8 = FUN_100154f0(param_1,param_2,param_6,param_4,param_3,(int)this);
    local_c8 = 0;
    local_e8[0] = 1;
    local_d0 = 1;
    local_cc = 1;
    param_16 = 0;
    piVar2 = (int *)0x0;
    piVar3 = (int *)0x0;
    piVar4 = (int *)0x0;
    piVar8 = (int *)0x0;
    local_ca = 1;
    local_c4 = 1;
    local_bc = 1;
    local_b8 = 0;
    piVar7 = (int *)0x0;
    goto LAB_10015286;
  }
  local_d8 = param_1;
  local_d0 = param_2;
  local_c8 = param_6;
  local_74[1] = 0;
  local_74[2] = 0;
  local_74[3] = 0;
  local_74[4] = 0;
  local_bc = 0;
  local_74[0] = 1;
  local_e8[0] = 3;
  local_cc = (undefined2)param_4;
  local_b8 = (uint)(param_11 != 0) | -(uint)(param_12 != 0) & 2;
  local_ca = (undefined2)param_3;
  local_c4 = param_5;
  if (((char)param_16 == '\0') || (param_5 == 1)) {
    local_b0[1] = (uint)param_15 * 4 + 5;
  }
  else {
    local_b0[1] = 7;
  }
  local_b0[0] = param_7;
  local_b0[2] = param_9;
  piVar8 = local_a0;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  if (local_b0[1] == 5) {
    local_a0[3] = param_4;
    local_a0[0] = 0;
    local_a0[2] = 0;
    local_90 = 0;
    local_8c = 0;
LAB_10015101:
    local_a0[1] = 0xffffffff;
    local_a0[0] = local_a0[2];
  }
  else if (local_b0[1] == 7) {
    local_a0[2] = 0;
    local_a0[1] = param_4;
  }
  else {
    iVar6 = local_b0[1] + -9;
    if (iVar6 == 0) {
      local_a0[0] = iVar6;
      local_a0[2] = iVar6;
      goto LAB_10015101;
    }
  }
  piVar8 = local_b0;
  piVar2 = local_74 + 5;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar2 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar2 = piVar2 + 1;
  }
  local_74[5] = param_8;
  local_74[7] = param_10;
  if (local_b0[1] == 5) {
    local_40 = 1;
  }
  else if (local_b0[1] == 9) {
    local_74[6] = 5;
    local_50 = 0;
    local_4c = 0xffffffff;
    local_48 = 0;
    local_44 = param_4;
    local_40 = 0;
    local_3c = 0;
  }
  local_1c = 5;
  if (param_5 != 1) {
    local_1c = 7;
  }
  local_20 = param_11;
  local_18 = 0;
  local_38 = param_12;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  local_34 = 4;
  if (param_5 != 1) {
    local_34 = 6;
  }
  *(int *)((int)this + 0x2c) = param_7;
  if (param_11 != 0) {
    *(int *)((int)this + 0x34) = param_11;
  }
  piVar2 = &local_38;
  if (param_12 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    *(int *)((int)this + 0x34) = param_12;
  }
  piVar3 = &local_20;
  if (param_11 == 0) {
    piVar3 = (int *)0x0;
  }
  piVar4 = local_74 + 5;
  if (param_8 == 0) {
    piVar4 = (int *)0x0;
  }
  piVar8 = local_b0;
  piVar7 = local_74;
LAB_10015286:
  local_c0 = 0;
  local_d4 = 0;
  local_e0 = 0;
  FUN_10014c6d(this,&local_88,piVar7,(int)local_e8,(int)piVar8,(int)piVar4,piVar3,piVar2,param_3,
               param_4,param_16);
  return;
}

