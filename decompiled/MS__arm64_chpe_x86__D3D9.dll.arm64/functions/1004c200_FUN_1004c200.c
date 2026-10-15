/*
 * FUN_1004c200 at 1004c200
 * undefined FUN_1004c200(void)
 * Address ranges: 1004c200-1004c833
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004c200(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8,uint param_9,undefined4 param_10,char param_11,
                 undefined4 param_12,char param_13)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  int local_74;
  
  bVar10 = *(byte *)(param_1 + 0x764b);
  *(undefined1 *)(param_1 + 0x764b) = 0;
  *(byte *)(param_1 + 0xf668) = bVar10 | *(byte *)(param_1 + 0xf668);
  iVar7 = *(int *)(param_1 + 0x6c);
  uVar11 = (0x1000 - *(int *)(param_1 + 0x54)) - *(int *)(param_1 + 0x50);
  uVar12 = (0x1000 - *(int *)(param_1 + 0x68)) - iVar7;
  puVar4 = &DAT_1016e210;
  if (*(char *)(param_1 + 0x7641) == '\0') {
    puVar4 = &DAT_1016e230;
  }
  uVar17 = *(uint *)(param_1 + 0x6920);
  if (*(int *)(param_1 + 0xf748) < 0xb000) {
    bVar1 = false;
  }
  else {
    if ((*(char *)(param_1 + 0xe8c) == '\0') ||
       (bVar1 = false, *(byte *)(*(int *)(param_3 + 0x1c) + 0x4a6c) < 2)) {
      bVar1 = true;
    }
    if (*(float *)(param_1 + 0xe88) < 2.0) {
      bVar1 = false;
    }
    bVar1 = param_2 - 4U < 3 && bVar1;
  }
  uVar8 = *(uint *)(param_1 + 0x694c);
  if ((uVar8 & 1) == 0) {
    uVar14 = *(uint *)(param_1 + 0x6948);
  }
  else {
    uVar14 = (uint)*(float *)(param_1 + 0x6f44);
  }
  bVar2 = false;
  uVar6 = *(uint *)(param_1 + 0x7630);
  if ((*(uint *)(param_1 + 0x7634) & 4) == 0) {
    uVar6 = 0;
  }
  uVar16 = (ulonglong)uVar6;
  if (bVar1) {
    uVar16 = uVar16 | ((ulonglong)uVar8 & 2 | 1) << 8;
    if ((uVar8 >> 2 & 1) != 0) {
      uVar16 = uVar16 | 0x400;
    }
    if ((uVar8 & 1) != 0) {
      uVar16 = uVar16 | 0x800;
    }
    uVar16 = uVar16 | (ulonglong)uVar14 << 0xc;
  }
  piVar13 = (int *)FUN_10051200(param_3,uVar16);
  iVar9 = *piVar13;
  iVar15 = piVar13[1];
  iVar5 = *(int *)(param_3 + 0x84);
  if (param_11 == '\0') {
    iVar5 = *(int *)(param_3 + 0x80);
  }
  if (param_2 == 1) {
    if (param_13 == '\0') {
      uVar17 = uVar17 & 0xfff3ffff;
      fVar18 = *(float *)(param_1 + 0x6f18);
      if (*(float *)(param_1 + 0x6f18) <= *(float *)(param_1 + 0x6f10)) {
        fVar18 = *(float *)(param_1 + 0x6f10);
      }
      fVar19 = *(float *)(param_1 + 0x6f14);
      if (fVar18 <= *(float *)(param_1 + 0x6f14)) {
        fVar19 = fVar18;
      }
      bVar2 = 0.1 < ABS(fVar19 - 1.0);
      if (ABS(fVar19 - 1.0) <= 0.1) goto LAB_1004c494;
    }
    else {
      uVar17 = uVar17 & 0xfffbffff | 0x80000;
      bVar2 = true;
    }
    iVar15 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x118);
  }
LAB_1004c494:
  pcVar3 = (char *)(param_1 + 0x7642);
  if ((((((*pcVar3 != '\0') || (*(int *)(param_1 + 0x100c) != param_6)) ||
        (*(int *)(param_1 + 0xfc8) != param_7)) ||
       (((*(int *)(param_1 + 0xfa18) != param_5 || (*(int *)(param_1 + 0xf9d8) != param_4)) ||
        ((*(int *)(param_1 + 0xf9cc) != iVar9 ||
         ((*(int *)(param_1 + 0xf9d4) != iVar15 || (*(int *)(param_1 + 0x761c) != 2)))))))) ||
      (*(int *)(param_1 + 0xfa2c) != *(int *)(puVar4 + param_2 * 4))) ||
     (((((param_9 != 0) != (iVar7 != 0) || uVar11 < param_8) || uVar12 < param_9 ||
       (*(int *)(param_1 + 0xf9c8) != iVar5)) || (*(uint *)(param_1 + 0x6920) != uVar17)))) {
    iVar7 = param_7;
    if (param_4 != *(int *)(param_1 + 0xf6d4)) {
      iVar7 = 0;
    }
    FUN_10047f98(param_1,uVar11 < param_8,uVar12 < param_9,iVar7);
    local_74 = param_6;
    if (param_4 == *(int *)(param_1 + 0xf6d4)) {
      local_74 = *(int *)(param_1 + 0x5c);
    }
    if (*pcVar3 != '\0') {
      *(undefined1 *)(param_1 + 0xf669) = 1;
      *(byte *)(param_1 + 0xf664) = *(byte *)(param_1 + 0xf664) | 1;
    }
    if (*(int *)(param_1 + 0xfc8) != param_7) {
      *(int *)(param_1 + 0xfc8) = param_7;
      *(undefined1 *)(param_1 + 0xf66f) = 1;
    }
    if (*(int *)(param_1 + 0xf9d8) != param_4) {
      *(int *)(param_1 + 0xf9d8) = param_4;
      *(undefined1 *)(param_1 + 0xf66f) = 1;
    }
    if (*(int *)(param_1 + 0x100c) != local_74) {
      *(int *)(param_1 + 0x100c) = local_74;
      *(undefined1 *)(param_1 + 0xf66f) = 1;
    }
    if (*(int *)(param_1 + 0xfa18) != param_5) {
      *(int *)(param_1 + 0xfa18) = param_5;
      *(undefined1 *)(param_1 + 0xf670) = 1;
    }
    if (*(int *)(param_1 + 0xf9d4) != iVar15) {
      *(int *)(param_1 + 0xf9d4) = iVar15;
      *(bool *)(param_1 + 0x7648) = bVar2;
      *(undefined1 *)(param_1 + 0xf66d) = 1;
      *(undefined1 *)(param_1 + 0x10230) = 1;
    }
    if (*(int *)(param_1 + 0xf9c8) != iVar5) {
      *(int *)(param_1 + 0xf9c8) = iVar5;
      *(undefined1 *)(param_1 + 0x10230) = 1;
    }
    if (*(int *)(param_1 + 0xf9cc) != iVar9) {
      *(int *)(param_1 + 0xf9cc) = iVar9;
      *(undefined1 *)(param_1 + 0x10230) = 1;
      *(undefined1 *)(param_1 + 0xf6a2) = 1;
      *(uint *)(param_1 + 0xfa30) = (uint)uVar16 & 0x3f;
      *(int *)(param_1 + 0xf740) = param_3;
    }
    if ((*(int *)(param_1 + 0x761c) != 2) || (*(char *)(param_1 + 0x7642) != '\0')) {
      *(undefined1 *)(param_1 + 0xf66e) = 1;
      *(int *)(param_1 + 0x761c) = 2;
    }
    if (*(int *)(param_1 + 0xfa2c) != *(int *)(puVar4 + param_2 * 4)) {
      *(int *)(param_1 + 0xfa2c) = *(int *)(puVar4 + param_2 * 4);
      *(undefined1 *)(param_1 + 0x10230) = 1;
    }
    if (*(uint *)(param_1 + 0x6920) != uVar17) {
      *(undefined1 *)(param_1 + 0xf671) = 1;
      *(uint *)(param_1 + 0x6920) = uVar17;
    }
    bVar10 = *(byte *)(param_1 + 0x7642);
    *(byte *)(param_1 + 0xf66c) = *(byte *)(param_1 + 0xf66c) | bVar10;
    *(byte *)(param_1 + 0xf66b) = *(byte *)(param_1 + 0xf66b) | bVar10;
    *(byte *)(param_1 + 0xf66d) = *(byte *)(param_1 + 0xf66d) | bVar10;
    *(byte *)(param_1 + 0xf668) = bVar10 | *(byte *)(param_1 + 0xf668);
    if (bVar10 != 0) {
      *pcVar3 = '\0';
      FUN_10074c68(param_1);
    }
  }
  return;
}

