/*
 * FUN_1003f3d0 at 1003f3d0
 * undefined FUN_1003f3d0(void)
 * Address ranges: 1003f3d0-1003f9f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003f3d0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
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
  int iVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  int local_68;
  
  bVar9 = *(byte *)(param_1 + 0x595e);
  *(undefined1 *)(param_1 + 0x595e) = 0;
  *(byte *)(param_1 + 0xd978) = bVar9 | *(byte *)(param_1 + 0xd978);
  uVar14 = 0x4000000;
  if (*(char *)(param_1 + 0x82) == '\0') {
    uVar14 = 0;
  }
  *(ulonglong *)(param_1 + 0x6a0) = uVar14 | *(ulonglong *)(param_1 + 0x6a0) & 0xfffffffffbffffff;
  iVar7 = *(int *)(param_1 + 0x6c);
  uVar10 = (0x1000 - *(int *)(param_1 + 0x54)) - *(int *)(param_1 + 0x50);
  uVar11 = (0x1000 - *(int *)(param_1 + 0x68)) - iVar7;
  puVar4 = &DAT_10135ec8;
  if (*(char *)(param_1 + 0x5954) == '\0') {
    puVar4 = &DAT_10135ee8;
  }
  uVar15 = *(uint *)(param_1 + 0x4cb0);
  if (*(int *)(param_1 + 0xda44) < 0xb000) {
    bVar1 = false;
  }
  else {
    if ((*(char *)(param_1 + 0x574) == '\0') ||
       (bVar1 = false, *(byte *)(*(int *)(param_3 + 0x1c) + 0x4854) < 2)) {
      bVar1 = true;
    }
    if (*(float *)(param_1 + 0x570) < 2.0) {
      bVar1 = false;
    }
    bVar1 = param_2 - 4U < 3 && bVar1;
  }
  bVar2 = false;
  uVar6 = *(uint *)(param_1 + 0x5944);
  if ((*(uint *)(param_1 + 0x5948) & 4) == 0) {
    uVar6 = 0;
  }
  uVar14 = (ulonglong)uVar6;
  if (bVar1) {
    uVar6 = *(uint *)(param_1 + 0x4cdc);
    uVar14 = uVar14 | ((ulonglong)uVar6 & 2 | 1) << 8;
    if ((uVar6 >> 2 & 1) != 0) {
      uVar14 = uVar14 | 0x400;
    }
    if ((uVar6 & 1) != 0) {
      uVar14 = uVar14 | 0x800;
    }
    uVar14 = uVar14 | (ulonglong)*(uint *)(param_1 + 0x4cd8) << 0xc;
  }
  piVar12 = (int *)FUN_10043010(param_3,uVar14);
  iVar8 = *piVar12;
  iVar13 = piVar12[1];
  iVar5 = *(int *)(param_3 + 0x30);
  if (param_11 == '\0') {
    iVar5 = *(int *)(param_3 + 0x2c);
  }
  if (param_2 == 1) {
    if (param_13 == '\0') {
      uVar15 = uVar15 & 0xfff3ffff;
      fVar16 = *(float *)(param_1 + 0x52a8);
      if (*(float *)(param_1 + 0x52a8) <= *(float *)(param_1 + 0x52a0)) {
        fVar16 = *(float *)(param_1 + 0x52a0);
      }
      fVar17 = *(float *)(param_1 + 0x52a4);
      if (fVar16 <= *(float *)(param_1 + 0x52a4)) {
        fVar17 = fVar16;
      }
      bVar2 = 0.1 < ABS(fVar17 - 1.0);
      if (ABS(fVar17 - 1.0) <= 0.1) goto LAB_1003f670;
    }
    else {
      uVar15 = uVar15 & 0xfffbffff | 0x80000;
      bVar2 = true;
    }
    iVar13 = *(int *)(*(int *)(param_1 + 0xd9b8) + 0x118);
  }
LAB_1003f670:
  pcVar3 = (char *)(param_1 + 0x5955);
  if ((((((*pcVar3 != '\0') || (*(int *)(param_1 + 0x6ec) != param_6)) ||
        (*(int *)(param_1 + 0x6a8) != param_7)) ||
       (((*(int *)(param_1 + 0xdbcc) != param_5 || (*(int *)(param_1 + 0xdb8c) != param_4)) ||
        ((*(int *)(param_1 + 0xdb80) != iVar8 ||
         ((*(int *)(param_1 + 0xdb88) != iVar13 || (*(int *)(param_1 + 0x5930) != 2)))))))) ||
      (*(int *)(param_1 + 0xdbe0) != *(int *)(puVar4 + param_2 * 4))) ||
     (((((param_9 != 0) != (iVar7 != 0) || uVar10 < param_8) || uVar11 < param_9 ||
       (*(int *)(param_1 + 0xdb7c) != iVar5)) || (*(uint *)(param_1 + 0x4cb0) != uVar15)))) {
    iVar7 = param_7;
    if (param_4 != *(int *)(param_1 + 0xd9d4)) {
      iVar7 = 0;
    }
    FUN_1003c678(param_1,uVar10 < param_8,uVar11 < param_9,iVar7);
    local_68 = param_6;
    if (param_4 == *(int *)(param_1 + 0xd9d4)) {
      local_68 = *(int *)(param_1 + 0x5c);
    }
    if (*pcVar3 != '\0') {
      *(undefined1 *)(param_1 + 0xd979) = 1;
      *(byte *)(param_1 + 0xd974) = *(byte *)(param_1 + 0xd974) | 1;
    }
    if (*(int *)(param_1 + 0x6a8) != param_7) {
      *(int *)(param_1 + 0x6a8) = param_7;
      *(undefined1 *)(param_1 + 0xd97f) = 1;
    }
    if (*(int *)(param_1 + 0xdb8c) != param_4) {
      *(int *)(param_1 + 0xdb8c) = param_4;
      *(undefined1 *)(param_1 + 0xd97f) = 1;
    }
    if (*(int *)(param_1 + 0x6ec) != local_68) {
      *(int *)(param_1 + 0x6ec) = local_68;
      *(undefined1 *)(param_1 + 0xd97f) = 1;
    }
    if (*(int *)(param_1 + 0xdbcc) != param_5) {
      *(int *)(param_1 + 0xdbcc) = param_5;
      *(undefined1 *)(param_1 + 0xd980) = 1;
    }
    if (*(int *)(param_1 + 0xdb88) != iVar13) {
      *(int *)(param_1 + 0xdb88) = iVar13;
      *(bool *)(param_1 + 0x595b) = bVar2;
      *(undefined1 *)(param_1 + 0xd97d) = 1;
      *(undefined1 *)(param_1 + 0xdf04) = 1;
    }
    if (*(int *)(param_1 + 0xdb7c) != iVar5) {
      *(int *)(param_1 + 0xdb7c) = iVar5;
      *(undefined1 *)(param_1 + 0xdf04) = 1;
    }
    if (*(int *)(param_1 + 0xdb80) != iVar8) {
      *(int *)(param_1 + 0xdb80) = iVar8;
      *(undefined1 *)(param_1 + 0xdf04) = 1;
      *(uint *)(param_1 + 0xdbe4) = (uint)uVar14 & 0x3f;
    }
    if ((*(int *)(param_1 + 0x5930) != 2) || (*(char *)(param_1 + 0x5955) != '\0')) {
      *(undefined1 *)(param_1 + 0xd97e) = 1;
      *(int *)(param_1 + 0x5930) = 2;
    }
    if (*(int *)(param_1 + 0xdbe0) != *(int *)(puVar4 + param_2 * 4)) {
      *(int *)(param_1 + 0xdbe0) = *(int *)(puVar4 + param_2 * 4);
      *(undefined1 *)(param_1 + 0xdf04) = 1;
    }
    if (*(uint *)(param_1 + 0x4cb0) != uVar15) {
      *(undefined1 *)(param_1 + 0xd981) = 1;
      *(uint *)(param_1 + 0x4cb0) = uVar15;
    }
    bVar9 = *(byte *)(param_1 + 0x5955);
    *(byte *)(param_1 + 0xd97c) = *(byte *)(param_1 + 0xd97c) | bVar9;
    *(byte *)(param_1 + 0xd97b) = *(byte *)(param_1 + 0xd97b) | bVar9;
    *(byte *)(param_1 + 0xd97d) = *(byte *)(param_1 + 0xd97d) | bVar9;
    *(byte *)(param_1 + 0xd978) = bVar9 | *(byte *)(param_1 + 0xd978);
    if (bVar9 != 0) {
      *pcVar3 = '\0';
      FUN_1005f298(param_1);
    }
  }
  return;
}

