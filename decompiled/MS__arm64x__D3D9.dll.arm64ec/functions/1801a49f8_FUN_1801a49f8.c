/*
 * FUN_1801a49f8 at 1801a49f8
 * undefined FUN_1801a49f8(void)
 * Address ranges: 1801a49f8-1801a4d6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a49f8(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
  ulonglong uVar13;
  char *pcVar14;
  int local_c8;
  int iStack_c4;
  undefined4 local_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong uStack_48;
  
  uVar4 = (ulonglong)param_8;
  uVar13 = (ulonglong)param_11;
  *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0xb88) = param_1;
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
  *(int *)(lVar12 + 0x684) = *(int *)(lVar12 + 0x684) + 1;
  uStack_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_a8 = 0;
  local_78 = 0;
  uStack_60 = 0;
  local_68 = 0;
  iStack_bc = (param_17[2] - *param_17) + param_15;
  local_58 = 0;
  local_c0 = 0;
  cVar3 = *(char *)(param_3 + 0x4d);
  local_b8 = (param_17[3] - param_17[1]) + param_16;
  local_c8 = param_15;
  iStack_c4 = param_16;
  uStack_b4 = 1;
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
  local_b0 = param_4;
  local_a0 = uVar4;
  local_80 = param_5;
  local_70 = uVar13;
  local_50 = param_2;
  uStack_48 = uVar4;
  if ((cVar3 == '\0') || (*(char *)(param_2 + 0x4d) == '\0')) {
    pcVar14 = (char *)(param_2 + 0x4d);
    if (cVar3 == '\0') {
      param_11 = 0;
    }
    FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_5,param_11,
                  cVar3 == '\0',uVar11);
    if (*pcVar14 == '\0') {
      param_8 = 0;
    }
    FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_4,param_8,
                  *pcVar14 == '\0',uVar10);
    if (*pcVar14 == '\0') {
      local_a8 = 1;
      puVar2 = (uint *)(*(longlong *)(local_50 + 0x24) + uStack_48 * 0x20);
      local_a0 = (ulonglong)*puVar2;
      uStack_90 = CONCAT44(1,param_7);
      local_98 = CONCAT44(param_6,param_12);
      local_88 = CONCAT44(local_88._4_4_,puVar2[2]);
    }
    if (*(char *)(param_3 + 0x4d) == '\0') {
      puVar2 = (uint *)(*(longlong *)(param_3 + 0x24) + uVar13 * 0x20);
      local_78 = 1;
      local_70 = (ulonglong)*puVar2;
      local_68 = CONCAT44(param_9,param_13);
      uStack_60 = CONCAT44(1,param_10);
      local_58 = CONCAT44(local_58._4_4_,puVar2[2]);
    }
    if (param_21 == '\0') {
      piVar9 = &local_c8;
      iVar7 = *param_17;
      iVar8 = param_17[1];
    }
    else {
      iVar7 = 0;
      iVar8 = 0;
      piVar9 = (int *)0x0;
    }
    FUN_180209ae0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),&local_80,iVar7,iVar8,0
                  ,&local_b0,piVar9);
    if (*pcVar14 == '\0') {
      FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_4,0,1,0);
    }
    if (*(char *)(param_3 + 0x4d) == '\0') {
      FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_5,0,1,0);
    }
  }
  else {
    if ((param_20 == '\0') || (bVar1 && bVar5)) {
      FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_5,uVar13,0,
                    uVar11);
      FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_4,uVar4,0,
                    uVar10);
      if (param_20 == '\0') {
        FUN_180209ae0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),&local_80,*param_17
                      ,param_17[1],0,&local_b0,&local_c8);
        goto LAB_1801a4d24;
      }
    }
    else {
      FUN_180207d68(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_5,param_3,
                    uVar11,0);
      FUN_180207d68(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_4);
    }
    uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
    if (bVar1 && bVar5) {
      FUN_180209950(uVar6,param_5,uVar13,param_4,uVar4,param_14);
    }
    else {
      FUN_1802099e0(uVar6,param_5,param_4);
    }
  }
LAB_1801a4d24:
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
  iVar7 = *(int *)(lVar12 + 0x684) + -1;
  *(int *)(lVar12 + 0x684) = iVar7;
  if ((iVar7 == 0) && (*(int *)(lVar12 + 0x680) <= *(int *)(lVar12 + 0x678))) {
    FUN_180207560(lVar12 + 8,0);
  }
  return;
}

