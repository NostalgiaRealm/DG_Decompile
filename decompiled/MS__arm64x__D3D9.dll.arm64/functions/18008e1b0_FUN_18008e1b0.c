/*
 * FUN_18008e1b0 at 18008e1b0
 * undefined FUN_18008e1b0(void)
 * Address ranges: 18008e1b0-18008e523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008e1b0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,uint param_8,
                  undefined4 param_9,undefined4 param_10,uint param_11,undefined4 param_12,
                  undefined4 param_13,undefined4 param_14,int param_15,int param_16,int *param_17,
                  uint param_18,int param_19,char param_20,char param_21)

{
  bool bVar1;
  uint *puVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  char *pcVar13;
  ulonglong uVar14;
  int local_d0;
  int iStack_cc;
  undefined4 local_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong local_58;
  
  uVar4 = (ulonglong)param_8;
  uVar14 = (ulonglong)param_11;
  *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0xb88) = param_1;
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
  *(int *)(lVar12 + 0x684) = *(int *)(lVar12 + 0x684) + 1;
  uStack_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_b0 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  iStack_c4 = (param_17[2] - *param_17) + param_15;
  local_60 = 0;
  local_c8 = 0;
  cVar3 = *(char *)(param_3 + 0x4d);
  local_c0 = (param_17[3] - param_17[1]) + param_16;
  local_d0 = param_15;
  iStack_cc = param_16;
  uStack_bc = 1;
  bVar1 = 1 < param_18;
  bVar5 = param_19 == 1;
  uVar10 = 0x2000;
  if (!bVar1 || !bVar5) {
    uVar10 = 0x800;
  }
  uVar11 = 0x1000;
  if (!bVar1 || !bVar5) {
    uVar11 = 0x400;
  }
  local_b8 = param_4;
  local_a8 = uVar4;
  local_88 = param_5;
  local_78 = uVar14;
  local_58 = uVar4;
  if ((cVar3 == '\0') || (*(char *)(param_2 + 0x4d) == '\0')) {
    pcVar13 = (char *)(param_2 + 0x4d);
    if (cVar3 == '\0') {
      param_11 = 0;
    }
    FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_5,param_11,
                  cVar3 == '\0',uVar11);
    if (*pcVar13 == '\0') {
      param_8 = 0;
    }
    FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_4,param_8,
                  *pcVar13 == '\0',uVar10);
    if (*pcVar13 == '\0') {
      local_b0 = 1;
      puVar2 = (uint *)(*(longlong *)(param_2 + 0x24) + local_58 * 0x20);
      local_a8 = (ulonglong)*puVar2;
      uStack_98 = CONCAT44(1,param_7);
      local_a0 = CONCAT44(param_6,param_12);
      local_90 = CONCAT44(local_90._4_4_,puVar2[2]);
    }
    if (*(char *)(param_3 + 0x4d) == '\0') {
      local_80 = 1;
      puVar2 = (uint *)(*(longlong *)(param_3 + 0x24) + uVar14 * 0x20);
      local_78 = (ulonglong)*puVar2;
      local_70 = CONCAT44(param_9,param_13);
      uStack_68 = CONCAT44(1,param_10);
      local_60 = CONCAT44(local_60._4_4_,puVar2[2]);
    }
    if (param_21 == '\0') {
      piVar9 = &local_d0;
      iVar7 = *param_17;
      iVar8 = param_17[1];
    }
    else {
      iVar7 = 0;
      iVar8 = 0;
      piVar9 = (int *)0x0;
    }
    FUN_1800ea4f0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),&local_88,iVar7,iVar8,0
                  ,&local_b8,piVar9);
    if (*pcVar13 == '\0') {
      FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_4,0,1,0);
    }
    if (*(char *)(param_3 + 0x4d) == '\0') {
      FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_5,0,1,0);
    }
  }
  else {
    if ((param_20 == '\0') || (bVar1 && bVar5)) {
      FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_5,uVar14,0,
                    uVar11);
      FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_4,uVar4,0,
                    uVar10);
      if (param_20 == '\0') {
        FUN_1800ea4f0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),&local_88,*param_17
                      ,param_17[1],0,&local_b8,&local_d0);
        goto LAB_18008e4d4;
      }
    }
    else {
      FUN_1800e8c50(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_5,param_3,
                    uVar11,0);
      FUN_1800e8c50(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_4);
    }
    uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
    if (bVar1 && bVar5) {
      FUN_1800ea3a8(uVar6,param_5,uVar14,param_4,uVar4,param_14);
    }
    else {
      FUN_1800ea420(uVar6,param_5,param_4);
    }
  }
LAB_18008e4d4:
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
  iVar7 = *(int *)(lVar12 + 0x684) + -1;
  *(int *)(lVar12 + 0x684) = iVar7;
  if ((iVar7 == 0) && (*(int *)(lVar12 + 0x680) <= *(int *)(lVar12 + 0x678))) {
    FUN_1800e8548(lVar12 + 8,0);
  }
  return;
}

