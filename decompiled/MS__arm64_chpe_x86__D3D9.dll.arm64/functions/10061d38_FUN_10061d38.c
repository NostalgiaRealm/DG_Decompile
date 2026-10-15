/*
 * FUN_10061d38 at 10061d38
 * undefined FUN_10061d38(void)
 * Address ranges: 10061d38-1006244b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10061d38(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8,uint param_9,undefined4 param_10,char param_11,
                 undefined4 param_12,char param_13)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  bool local_e0;
  int local_cc;
  int local_a0;
  uint local_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  uint local_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  uint local_7c;
  undefined4 uStack_78;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  int local_48;
  int iStack_44;
  
  bVar14 = *(byte *)(param_1 + 0x764b);
  *(undefined1 *)(param_1 + 0x764b) = 0;
  uVar16 = *(uint *)(param_1 + 0x6920);
  *(byte *)(param_1 + 0xf668) = bVar14 | *(byte *)(param_1 + 0xf668);
  iVar6 = *(int *)(param_1 + 0x6c);
  uVar8 = (0x1000 - *(int *)(param_1 + 0x54)) - *(int *)(param_1 + 0x50);
  uVar9 = (0x1000 - *(int *)(param_1 + 0x68)) - iVar6;
  bVar12 = *(char *)(param_1 + 0x7641) == '\0';
  puVar2 = &DAT_1016e338;
  if (bVar12) {
    puVar2 = &DAT_1016e358;
  }
  puVar3 = &DAT_1016e2f8;
  if (bVar12) {
    puVar3 = &DAT_1016e318;
  }
  if ((*(char *)(param_1 + 0xe8c) == '\0') ||
     (bVar12 = false, *(byte *)(*(int *)(param_3 + 0x1c) + 0x4a6c) < 2)) {
    bVar12 = true;
  }
  uVar7 = *(uint *)(param_1 + 0x694c);
  if (*(float *)(param_1 + 0xe88) < 2.0) {
    bVar12 = false;
  }
  if ((uVar7 & 1) == 0) {
    uVar15 = *(uint *)(param_1 + 0x6948);
  }
  else {
    uVar15 = (uint)*(float *)(param_1 + 0x6f44);
  }
  local_e0 = false;
  uVar5 = *(uint *)(param_1 + 0x7630);
  if ((*(uint *)(param_1 + 0x7634) & 4) == 0) {
    uVar5 = 0;
  }
  uVar13 = (ulonglong)uVar5;
  if (param_2 - 4U < 3 && bVar12) {
    uVar13 = uVar13 | ((ulonglong)uVar7 & 2 | 1) << 8;
    if ((uVar7 >> 2 & 1) != 0) {
      uVar13 = uVar13 | 0x400;
    }
    if ((uVar7 & 1) != 0) {
      uVar13 = uVar13 | 0x800;
    }
    uVar13 = uVar13 | (ulonglong)uVar15 << 0xc;
  }
  FUN_100720a0(param_3,&local_a0,uVar13);
  piVar10 = &iStack_44;
  if (param_11 == '\0') {
    piVar10 = &local_48;
  }
  iVar4 = *piVar10;
  if (param_2 == 1) {
    if (param_13 == '\0') {
      uVar16 = uVar16 & 0xfff3ffff;
      fVar17 = *(float *)(param_1 + 0x6f18);
      if (*(float *)(param_1 + 0x6f18) <= *(float *)(param_1 + 0x6f10)) {
        fVar17 = *(float *)(param_1 + 0x6f10);
      }
      fVar18 = *(float *)(param_1 + 0x6f14);
      if (fVar17 <= *(float *)(param_1 + 0x6f14)) {
        fVar18 = fVar17;
      }
      local_e0 = 0.1 < ABS(fVar18 - 1.0);
      if (ABS(fVar18 - 1.0) <= 0.1) goto LAB_10061fb4;
    }
    else {
      local_e0 = true;
      uVar16 = uVar16 & 0xfffbffff | 0x80000;
    }
    local_74 = *(int *)(*(int *)(param_1 + 0xf6c4) + 0x90);
    uStack_68 = uRam101616c8;
    local_70 = _DAT_101616c0;
    uStack_58 = uRam101616d8;
    local_60 = _DAT_101616d0;
    local_50 = DAT_101616e0;
  }
LAB_10061fb4:
  iVar11 = local_74;
  if ((((((*(char *)(param_1 + 0x7642) != '\0') || (*(int *)(param_1 + 0x100c) != param_6)) ||
        (*(int *)(param_1 + 0xfc8) != param_7)) ||
       ((*(int *)(param_1 + 0xfc10) != param_5 || (*(int *)(param_1 + 0xfbd0) != param_4)))) ||
      ((*(int *)(param_1 + 0xf80c) != local_a0 ||
       ((*(int *)(param_1 + 0xf81c) != local_74 || (*(int *)(param_1 + 0x761c) != 2)))))) ||
     ((*(int *)(param_1 + 0xfc18) != *(int *)(puVar2 + param_2 * 4) ||
      (((((param_9 != 0) != (iVar6 != 0) || uVar8 < param_8) || uVar9 < param_9 ||
        (*(int *)(param_1 + 0xf834) != iVar4)) || (*(uint *)(param_1 + 0x6920) != uVar16)))))) {
    iVar6 = param_7;
    if (param_4 != *(int *)(param_1 + 0xf6d4)) {
      iVar6 = 0;
    }
    FUN_1005df78(param_1,uVar8 < param_8,uVar9 < param_9,iVar6);
    local_cc = param_6;
    if (param_4 == *(int *)(param_1 + 0xf6d4)) {
      local_cc = *(int *)(param_1 + 0x5c);
    }
    if (*(char *)(param_1 + 0x7642) != '\0') {
      *(undefined1 *)(param_1 + 0xf669) = 1;
      *(byte *)(param_1 + 0xf664) = *(byte *)(param_1 + 0xf664) | 1;
    }
    if (*(int *)(param_1 + 0xfc8) != param_7) {
      *(int *)(param_1 + 0xfc8) = param_7;
      *(undefined1 *)(param_1 + 0xf66f) = 1;
    }
    if (*(int *)(param_1 + 0xfbd0) != param_4) {
      *(int *)(param_1 + 0xfbd0) = param_4;
      *(undefined1 *)(param_1 + 0xf66f) = 1;
    }
    if (*(int *)(param_1 + 0x100c) != local_cc) {
      *(int *)(param_1 + 0x100c) = local_cc;
      *(undefined1 *)(param_1 + 0xf66f) = 1;
    }
    if (*(int *)(param_1 + 0xfc10) != param_5) {
      *(int *)(param_1 + 0xfc10) = param_5;
      *(undefined1 *)(param_1 + 0xf670) = 1;
    }
    if (*(int *)(param_1 + 0xf81c) != iVar11) {
      *(int *)(param_1 + 0xf81c) = iVar11;
      if (iVar11 == 0) {
        *(undefined8 *)(param_1 + 0xfd48) = 0;
        *(undefined8 *)(param_1 + 0xfd40) = 0;
        *(undefined8 *)(param_1 + 0xfd58) = 0;
        *(undefined8 *)(param_1 + 0xfd50) = 0;
        *(undefined8 *)(param_1 + 0xfd60) = 0;
      }
      else {
        *(byte *)(param_1 + 0xfd9c) =
             *(uint *)(param_1 + 0xfd60) < (uint)local_50 | *(byte *)(param_1 + 0xfd9c);
        *(byte *)(param_1 + 0xfda0) =
             *(uint *)(param_1 + 0xfd50) < (uint)local_60 | *(byte *)(param_1 + 0xfda0);
        *(undefined8 *)(param_1 + 0xfd48) = uStack_68;
        *(undefined8 *)(param_1 + 0xfd40) = local_70;
        *(undefined8 *)(param_1 + 0xfd58) = uStack_58;
        *(undefined8 *)(param_1 + 0xfd50) = local_60;
        *(undefined8 *)(param_1 + 0xfd60) = local_50;
      }
      *(undefined1 *)(param_1 + 0xfd99) = 1;
      *(bool *)(param_1 + 0x7648) = local_e0;
      *(undefined1 *)(param_1 + 0xf66d) = 1;
    }
    puVar1 = (undefined1 *)(param_1 + 0xfd99);
    if (*(int *)(param_1 + 0xf834) != iVar4) {
      *(int *)(param_1 + 0xf834) = iVar4;
      *puVar1 = 1;
    }
    if (*(int *)(param_1 + 0xf80c) != local_a0) {
      *(int *)(param_1 + 0xf80c) = local_a0;
      *puVar1 = 1;
      *(undefined1 *)(param_1 + 0xf6a2) = 1;
      *(int *)(param_1 + 0xf7f4) = param_3;
      *(byte *)(param_1 + 0xfd9c) =
           *(uint *)(param_1 + 0xfd38) < local_7c | *(byte *)(param_1 + 0xfd9c);
      *(byte *)(param_1 + 0xfda0) =
           *(uint *)(param_1 + 0xfd28) < local_8c | *(byte *)(param_1 + 0xfda0);
      *(undefined8 *)(param_1 + 0xfd20) = uStack_94;
      *(ulonglong *)(param_1 + 0xfd18) = CONCAT44(uStack_98,local_9c);
      *(undefined8 *)(param_1 + 0xfd30) = uStack_84;
      *(ulonglong *)(param_1 + 0xfd28) = CONCAT44(uStack_88,local_8c);
      *(ulonglong *)(param_1 + 0xfd38) = CONCAT44(uStack_78,local_7c);
    }
    if (*(char *)(*(int *)(param_1 + 0xf6c4) + 0xec) != '\0') {
      if ((*(char *)(param_1 + 0xfdaa) == '\0') && ((((uint)local_70 | local_9c) >> 4 & 1) != 0)) {
        bVar14 = 1;
      }
      else {
        bVar14 = 0;
      }
      *(byte *)(param_1 + 0xfd9e) = *(byte *)(param_1 + 0xfd9e) | bVar14;
    }
    if ((*(int *)(param_1 + 0x761c) != 2) || (*(char *)(param_1 + 0x7642) != '\0')) {
      *(undefined1 *)(param_1 + 0xf66e) = 1;
      *(int *)(param_1 + 0x761c) = 2;
    }
    if (*(int *)(param_1 + 0xfc18) != *(int *)(puVar2 + param_2 * 4)) {
      *(int *)(param_1 + 0xfc18) = *(int *)(puVar2 + param_2 * 4);
      *(undefined1 *)(param_1 + 0xfd98) = 1;
    }
    if (*(int *)(param_1 + 0xf83c) != *(int *)(puVar3 + param_2 * 4)) {
      *(int *)(param_1 + 0xf83c) = *(int *)(puVar3 + param_2 * 4);
      *puVar1 = 1;
    }
    if (*(uint *)(param_1 + 0x6920) != uVar16) {
      *(uint *)(param_1 + 0x6920) = uVar16;
      *(undefined1 *)(param_1 + 0xf671) = 1;
    }
    bVar14 = *(byte *)(param_1 + 0x7642);
    *(byte *)(param_1 + 0xf66c) = bVar14 | *(byte *)(param_1 + 0xf66c);
    *(byte *)(param_1 + 0xf66b) = bVar14 | *(byte *)(param_1 + 0xf66b);
    *(byte *)(param_1 + 0xf66d) = *(byte *)(param_1 + 0xf66d) | bVar14;
    *(byte *)(param_1 + 0xf668) = bVar14 | *(byte *)(param_1 + 0xf668);
    if (bVar14 != 0) {
      *(undefined1 *)(param_1 + 0x7642) = 0;
      FUN_10074c68(param_1);
    }
  }
  return;
}

