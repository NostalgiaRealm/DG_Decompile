/*
 * FUN_100b71d0 at 100b71d0
 * undefined FUN_100b71d0(void)
 * Address ranges: 100b71d0-100b75db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b71d0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,uint param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,uint param_13,
                 undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
                 undefined4 param_18,undefined4 param_19,undefined4 param_20,int param_21,
                 undefined4 param_22,int param_23,undefined4 param_24,int *param_25,
                 undefined4 param_26,uint param_27,undefined4 param_28,int param_29,
                 undefined4 param_30,char param_31,undefined4 param_32,char param_33)

{
  bool bVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  ulonglong uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 local_c0;
  undefined4 local_bc;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_90;
  undefined4 local_8c;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_60;
  int iStack_5c;
  undefined4 local_58;
  int iStack_54;
  int local_50;
  undefined4 uStack_4c;
  
  piVar2 = (int *)(param_1 + 0x1cf04);
  pcVar3 = (char *)(param_3 + 0x39);
  local_88 = (ulonglong)param_13;
  uVar8 = (ulonglong)param_8;
  pcVar4 = (char *)(param_2 + 0x39);
  *(int *)(*(int *)(*piVar2 + 0x1304) + 0x948) = param_1;
  piVar5 = (int *)(*(int *)(*piVar2 + 0x1304) + 0x634);
  *piVar5 = *piVar5 + 1;
  local_60 = param_21;
  iStack_5c = param_23;
  uStack_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_bc = 0;
  local_8c = 0;
  iStack_54 = (param_25[2] - *param_25) + param_21;
  local_58 = 0;
  piVar5 = param_25 + 1;
  uStack_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_50 = (param_25[3] - *piVar5) + param_23;
  uStack_4c = 1;
  bVar1 = 1 < param_27;
  bVar9 = param_29 == 1;
  uVar13 = 0x2000;
  if (!bVar1 || !bVar9) {
    uVar13 = 0x800;
  }
  uVar14 = 0x1000;
  if (!bVar1 || !bVar9) {
    uVar14 = 0x400;
  }
  local_c0 = param_4;
  local_b8 = uVar8;
  local_90 = param_5;
  if (*pcVar3 == '\0') {
    uVar10 = 0;
    uVar12 = 1;
  }
  else {
    if (*pcVar4 != '\0') {
      if ((param_31 == '\0') || (bVar1 && bVar9)) {
        FUN_10113dd8(*(undefined4 *)(*piVar2 + 0x1304),param_5,param_13,0,uVar14);
        FUN_10113dd8(*(undefined4 *)(*piVar2 + 0x1304),param_4,uVar8,0,uVar13);
        iVar15 = *piVar2;
        if (param_31 == '\0') {
          FUN_10115f90(*(undefined4 *)(iVar15 + 0x1304),&local_90,*param_25,*piVar5,0,&local_c0,
                       &local_60);
          goto LAB_100b75a8;
        }
        if (bVar1 && bVar9) {
          FUN_10115dd0(*(undefined4 *)(iVar15 + 0x1304),param_5,param_13,param_4,uVar8,param_19);
          goto LAB_100b75a8;
        }
      }
      else {
        FUN_10113e98(*(undefined4 *)(*piVar2 + 0x1304),param_5,local_88,uVar14,0);
        FUN_10113e98(*(undefined4 *)(*piVar2 + 0x1304),param_4);
        iVar15 = *piVar2;
      }
      FUN_10115e70(*(undefined4 *)(iVar15 + 0x1304),param_5,param_4);
      goto LAB_100b75a8;
    }
    uVar12 = 0;
    uVar10 = param_13;
  }
  FUN_10113dd8(*(undefined4 *)(*piVar2 + 0x1304),param_5,uVar10,uVar12,uVar14);
  uVar10 = param_8;
  if (*pcVar4 == '\0') {
    uVar10 = 0;
  }
  FUN_10113dd8(*(undefined4 *)(*piVar2 + 0x1304),param_4,uVar10,*pcVar4 == '\0',uVar13);
  if (*pcVar4 == '\0') {
    local_bc = 1;
    puVar6 = (uint *)(*(int *)(param_2 + 0x14) + param_8 * 0x20);
    local_b8 = (ulonglong)*puVar6;
    uStack_a8 = CONCAT44(1,param_7);
    local_b0 = CONCAT44(param_6,param_15);
    local_a0 = CONCAT44(local_a0._4_4_,puVar6[2]);
  }
  if (*pcVar3 == '\0') {
    local_8c = 1;
    puVar6 = (uint *)(*(int *)(param_3 + 0x14) + param_13 * 0x20);
    local_88 = (ulonglong)*puVar6;
    local_80 = CONCAT44(param_9,param_17);
    uStack_78 = CONCAT44(1,param_11);
    local_70 = CONCAT44(local_70._4_4_,puVar6[2]);
  }
  piVar7 = &local_60;
  if (param_33 == '\0') {
    iVar15 = *param_25;
    iVar11 = *piVar5;
  }
  else {
    iVar15 = 0;
    iVar11 = 0;
    piVar7 = (int *)0x0;
  }
  FUN_10115f90(*(undefined4 *)(*piVar2 + 0x1304),&local_90,iVar15,iVar11,0,&local_c0,piVar7);
  if (*pcVar4 == '\0') {
    FUN_10113dd8(*(undefined4 *)(*piVar2 + 0x1304),param_4,0,1,0);
  }
  if (*pcVar3 == '\0') {
    FUN_10113dd8(*(undefined4 *)(*piVar2 + 0x1304),param_5,0,1,0);
  }
LAB_100b75a8:
  FUN_10113d40(*(int *)(*piVar2 + 0x1304) + 4,0);
  return;
}

