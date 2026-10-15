/*
 * FUN_1001c660 at 1001c660
 * undefined FUN_1001c660(void)
 * Address ranges: 1001c660-1001ca5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001c660(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,uint param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,uint param_13,
                 undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
                 undefined4 param_18,undefined4 param_19,undefined4 param_20,int param_21,
                 undefined4 param_22,int param_23,undefined4 param_24,int *param_25,
                 undefined4 param_26,uint param_27,undefined4 param_28,int param_29,
                 undefined4 param_30,char param_31,undefined4 param_32,char param_33)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  ulonglong uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
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
  
  pcVar2 = (char *)(param_3 + 0x39);
  local_88 = (ulonglong)param_13;
  uVar7 = (ulonglong)param_8;
  pcVar3 = (char *)(param_2 + 0x39);
  *(int *)(*(int *)(*(int *)(param_1 + 0xcf04) + 0x1304) + 0x948) = param_1;
  piVar4 = (int *)(*(int *)(*(int *)(param_1 + 0xcf04) + 0x1304) + 0x634);
  *piVar4 = *piVar4 + 1;
  local_60 = param_21;
  iStack_5c = param_23;
  uStack_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_bc = 0;
  local_8c = 0;
  iStack_54 = (param_25[2] - *param_25) + param_21;
  local_58 = 0;
  piVar4 = param_25 + 1;
  uStack_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_50 = (param_25[3] - *piVar4) + param_23;
  uStack_4c = 1;
  bVar1 = 1 < param_27;
  bVar8 = param_29 == 1;
  uVar13 = 0x2000;
  if (!bVar1 || !bVar8) {
    uVar13 = 0x800;
  }
  uVar14 = 0x1000;
  if (!bVar1 || !bVar8) {
    uVar14 = 0x400;
  }
  local_c0 = param_4;
  local_b8 = uVar7;
  local_90 = param_5;
  if (*pcVar2 == '\0') {
    uVar9 = 0;
    uVar11 = 1;
  }
  else {
    if (*pcVar3 != '\0') {
      if ((param_31 == '\0') || (bVar1 && bVar8)) {
        FUN_1007d820(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),param_5,param_13,0,uVar14)
        ;
        FUN_1007d820(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),param_4,uVar7,0,uVar13);
        iVar12 = *(int *)(param_1 + 0xcf04);
        if (param_31 == '\0') {
          FUN_1007f8a0(*(undefined4 *)(iVar12 + 0x1304),&local_90,*param_25,*piVar4,0,&local_c0,
                       &local_60);
          goto LAB_1001ca2c;
        }
        if (bVar1 && bVar8) {
          FUN_1007f6e0(*(undefined4 *)(iVar12 + 0x1304),param_5,param_13,param_4,uVar7,param_19);
          goto LAB_1001ca2c;
        }
      }
      else {
        FUN_1007d8e0(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),param_5,local_88,uVar14);
        FUN_1007d8e0(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),param_4);
        iVar12 = *(int *)(param_1 + 0xcf04);
      }
      FUN_1007f780(*(undefined4 *)(iVar12 + 0x1304),param_5,param_4);
      goto LAB_1001ca2c;
    }
    uVar11 = 0;
    uVar9 = param_13;
  }
  FUN_1007d820(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),param_5,uVar9,uVar11,uVar14);
  uVar9 = param_8;
  if (*pcVar3 == '\0') {
    uVar9 = 0;
  }
  FUN_1007d820(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),param_4,uVar9,*pcVar3 == '\0',
               uVar13);
  if (*pcVar3 == '\0') {
    local_bc = 1;
    puVar5 = (uint *)(*(int *)(param_2 + 0x14) + param_8 * 0x20);
    local_b8 = (ulonglong)*puVar5;
    uStack_a8 = CONCAT44(1,param_7);
    local_b0 = CONCAT44(param_6,param_15);
    local_a0 = CONCAT44(local_a0._4_4_,puVar5[2]);
  }
  if (*pcVar2 == '\0') {
    local_8c = 1;
    puVar5 = (uint *)(*(int *)(param_3 + 0x14) + param_13 * 0x20);
    local_88 = (ulonglong)*puVar5;
    local_80 = CONCAT44(param_9,param_17);
    uStack_78 = CONCAT44(1,param_11);
    local_70 = CONCAT44(local_70._4_4_,puVar5[2]);
  }
  piVar6 = &local_60;
  if (param_33 == '\0') {
    iVar12 = *param_25;
    iVar10 = *piVar4;
  }
  else {
    iVar12 = 0;
    iVar10 = 0;
    piVar6 = (int *)0x0;
  }
  FUN_1007f8a0(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),&local_90,iVar12,iVar10,0,
               &local_c0,piVar6);
  if (*pcVar3 == '\0') {
    FUN_1007d820(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),param_4,0,1,0);
  }
  if (*pcVar2 == '\0') {
    FUN_1007d820(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),param_5,0,1,0);
  }
LAB_1001ca2c:
  FUN_1007d440(*(int *)(*(int *)(param_1 + 0xcf04) + 0x1304) + 4,0);
  return;
}

