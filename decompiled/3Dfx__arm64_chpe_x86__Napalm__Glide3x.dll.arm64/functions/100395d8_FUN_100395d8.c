/*
 * FUN_100395d8 at 100395d8
 * undefined FUN_100395d8(void)
 * Address ranges: 100395d8-10039ba3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100395d8(int param_1,int param_2,undefined1 param_3,char param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8)

{
  int *piVar1;
  uint *puVar2;
  char *pcVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  piVar1 = (int *)(param_1 + 0x138);
  FUN_100148c8(*piVar1,0);
  puVar2 = (uint *)(param_2 + 0x24);
  pcVar3 = (char *)(param_2 + 0x48);
  *(undefined4 *)(*piVar1 + 0x2e68) = *(undefined4 *)(param_2 + 0x5c);
  puVar4 = (uint *)(param_2 + 0x20);
  *(float *)(*piVar1 + 0x2dc0) = (float)*puVar4;
  *(float *)(*piVar1 + 0x2dc4) = (float)*puVar2;
  *(undefined1 *)(*piVar1 + 0x3650) = 1;
  uVar8 = *(undefined4 *)(*piVar1 + 0x2ca4);
  *(undefined4 *)(*piVar1 + 0x2ca4) = 1;
  *(undefined1 *)(*piVar1 + 0x2daa) = 1;
  if (*(char *)(param_2 + 0x7d) == '\0') {
    DAT_100aa3d4 = 0xf;
    DAT_100aa3b4 = 8;
    if (*pcVar3 == '\0') {
      DAT_100aa3b4 = DAT_100aa3d4;
    }
    if (*pcVar3 == '\0') {
      DAT_100aa3d4 = 0;
    }
    if ((*pcVar3 != '\0') &&
       ((*(int *)(param_2 + 0x10) == 5 || *(int *)(param_2 + 0x10) == 8 ||
        ((*(uint *)(*piVar1 + 0x2b1c) >> 7 & 1) != 0)))) {
      DAT_100aa3b4 = 0;
    }
    FUN_10070000(*(undefined4 *)(*piVar1 + 0x3680),*(undefined4 *)(*piVar1 + 0x3684),&DAT_100aa390);
    DAT_100aa4d0 = 0x100000001;
    DAT_100aa4dc = 0;
    DAT_100aa4a4 = *(undefined4 *)(*piVar1 + 0x2c2c);
    iVar21 = *piVar1;
    puVar7 = &DAT_100aa4d0;
    if (*pcVar3 == '\0') {
      puVar7 = (undefined8 *)0x100aa498;
    }
    FUN_10070368(*(undefined4 *)(iVar21 + 0x3680),*(undefined4 *)(iVar21 + 0x3684),puVar7,
                 *(undefined4 *)(iVar21 + 0x2c58));
    FUN_10070640(*(undefined4 *)(*piVar1 + 0x3680),*(undefined4 *)(*piVar1 + 0x3684),&DAT_100aa508);
    DAT_100aa4a4 = 0;
  }
  else {
    FUN_10013df8(*piVar1);
  }
  puVar5 = (uint *)(param_2 + 0x28);
  local_58 = 0;
  local_48 = 0;
  local_50 = (float)*puVar5;
  puVar6 = (uint *)(param_2 + 0x2c);
  fStack_4c = (float)*puVar6;
  local_44 = 0x3f800000;
  uVar16 = FUN_100709b0(*(undefined4 *)(*piVar1 + 0x3680),*(undefined4 *)(*piVar1 + 0x3684),
                        &local_58);
  if (((*puVar5 == *puVar4) && (*puVar6 == *puVar2)) ||
     (uVar16 = FUN_1001aa80(uVar16,*(undefined4 *)(*piVar1 + 0x2e68),
                            *(undefined4 *)(*piVar1 + 0x2e64)), (uVar16 & 1) == 0)) {
    iVar21 = 0;
  }
  else {
    iVar21 = 1;
  }
  iVar13 = FUN_1001aaf8(uVar16,param_2,param_3,iVar21,param_4);
  if (*(char *)(param_2 + 0x7f) != '\0') {
    iVar9 = *piVar1;
    local_78 = *(float *)(iVar9 + *(int *)(param_2 + 0x74) * 4 + 0x7334);
    fStack_74 = *(float *)(iVar9 + *(int *)(param_2 + 0x78) * 4 + 0x7334);
    FUN_10070b38(*(undefined4 *)(iVar9 + 0x3680),*(undefined4 *)(iVar9 + 0x3684),0x1c,2,&local_78);
  }
  iVar14 = FUN_1001cae0(param_1,*(uint *)(*piVar1 + 0x2b1c) & 0x7f);
  iVar15 = FUN_1001cae0(param_1,*(undefined4 *)(*piVar1 + 0x2b20));
  cVar11 = *pcVar3;
  iVar9 = param_1 + iVar14 * 0x104 + 0x13c;
  if (iVar14 == -1) {
    iVar9 = 0;
  }
  if (cVar11 == '\0') {
    iVar9 = param_2;
  }
  iVar14 = param_1 + iVar15 * 0x104 + 0x13c;
  if (iVar15 == -1) {
    iVar14 = 0;
  }
  iVar15 = param_2;
  if (cVar11 == '\0') {
    iVar15 = iVar14;
  }
  iVar14 = 0xd4;
  if (param_4 != '\0') {
    iVar14 = 0xec;
  }
  iVar19 = 0xd8;
  if (param_4 != '\0') {
    iVar19 = 0xf0;
  }
  if (iVar9 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined4 *)(iVar9 + 0xb4);
  }
  if (iVar15 == 0) {
    uVar20 = 0;
    uVar18 = 0;
  }
  else {
    uVar20 = *(undefined4 *)(iVar15 + 0xf8);
    uVar18 = *(undefined4 *)(iVar15 + 0xb4);
  }
  if (((iVar9 != 0) && (iVar15 != 0)) &&
     ((*(int *)(iVar9 + 0x28) != *(int *)(iVar15 + 0x28) ||
      (*(int *)(iVar9 + 0x2c) != *(int *)(iVar15 + 0x2c))))) {
    if (cVar11 == '\0') {
      uVar18 = 0;
      uVar20 = 0;
    }
    else {
      uVar17 = 0;
    }
  }
  uVar10 = *puVar2;
  if (iVar21 == 0) {
    local_70 = 0.005;
    fStack_6c = 0.005;
  }
  else {
    local_70 = -(0.49 / ((float)*puVar5 / (float)*puVar4));
    fStack_6c = -(0.49 / ((float)*puVar6 / (float)uVar10));
  }
  local_68 = (float)param_5;
  fStack_64 = (float)param_6;
  bVar12 = *(int *)(param_2 + 0x60) == 1;
  if (bVar12) {
    param_6 = uVar10 - param_6;
  }
  local_60 = (float)param_7;
  fStack_5c = (float)param_8;
  local_78 = local_68 + local_70;
  if (bVar12) {
    param_8 = uVar10 - param_8;
  }
  fStack_74 = (float)param_6 + fStack_6c;
  local_70 = local_60 + local_70;
  fStack_6c = (float)param_8 + fStack_6c;
  FUN_10039378(param_1,&local_68,&local_78,*(undefined4 *)(param_1 + iVar13 * 4 + 0x858),
               *(undefined4 *)(iVar14 + param_2),*(undefined4 *)(iVar19 + param_2),uVar17,uVar18,
               uVar20);
  FUN_100147e0(*piVar1);
  *(undefined4 *)(*piVar1 + 0x2ca4) = uVar8;
  *(undefined1 *)(*piVar1 + 0x2da9) = 1;
  *(undefined1 *)(*piVar1 + 0x2da8) = 1;
  *(undefined1 *)(*piVar1 + 0x2daa) = 1;
  *(undefined1 *)(*piVar1 + 0x2dab) = 1;
  return;
}

