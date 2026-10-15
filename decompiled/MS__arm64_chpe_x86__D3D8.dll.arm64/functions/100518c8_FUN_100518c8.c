/*
 * FUN_100518c8 at 100518c8
 * undefined FUN_100518c8(void)
 * Address ranges: 100518c8-10051f8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100518c8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8,uint param_9,undefined4 param_10,char param_11,
                 undefined4 param_12,char param_13)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  int local_d4;
  int local_a0;
  uint local_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  int local_48;
  int iStack_44;
  
  bVar14 = *(byte *)(param_1 + 0x595e);
  *(undefined1 *)(param_1 + 0x595e) = 0;
  *(byte *)(param_1 + 0xd978) = bVar14 | *(byte *)(param_1 + 0xd978);
  uVar13 = 0x4000000;
  if (*(char *)(param_1 + 0x82) == '\0') {
    uVar13 = 0;
  }
  *(ulonglong *)(param_1 + 0x6a0) = uVar13 | *(ulonglong *)(param_1 + 0x6a0) & 0xfffffffffbffffff;
  iVar7 = *(int *)(param_1 + 0x6c);
  uVar8 = (0x1000 - *(int *)(param_1 + 0x54)) - *(int *)(param_1 + 0x50);
  uVar9 = (0x1000 - *(int *)(param_1 + 0x68)) - iVar7;
  bVar12 = *(char *)(param_1 + 0x5954) == '\0';
  puVar3 = &DAT_10135ff8;
  if (bVar12) {
    puVar3 = &DAT_10136018;
  }
  puVar4 = &DAT_10135fb8;
  if (bVar12) {
    puVar4 = &DAT_10135fd8;
  }
  uVar15 = *(uint *)(param_1 + 0x4cb0);
  if ((*(char *)(param_1 + 0x574) == '\0') ||
     (bVar12 = false, *(byte *)(*(int *)(param_3 + 0x1c) + 0x4854) < 2)) {
    bVar12 = true;
  }
  bVar1 = false;
  if (*(float *)(param_1 + 0x570) < 2.0) {
    bVar12 = false;
  }
  uVar6 = *(uint *)(param_1 + 0x5944);
  if ((*(uint *)(param_1 + 0x5948) & 4) == 0) {
    uVar6 = 0;
  }
  uVar13 = (ulonglong)uVar6;
  if (param_2 - 4U < 3 && bVar12) {
    uVar6 = *(uint *)(param_1 + 0x4cdc);
    uVar13 = uVar13 | ((ulonglong)uVar6 & 2 | 1) << 8;
    if ((uVar6 >> 2 & 1) != 0) {
      uVar13 = uVar13 | 0x400;
    }
    if ((uVar6 & 1) != 0) {
      uVar13 = uVar13 | 0x800;
    }
    uVar13 = uVar13 | (ulonglong)*(uint *)(param_1 + 0x4cd8) << 0xc;
  }
  FUN_1005dec0(param_3,&local_a0,uVar13);
  piVar10 = &iStack_44;
  if (param_11 == '\0') {
    piVar10 = &local_48;
  }
  iVar5 = *piVar10;
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
      bVar1 = 0.1 < ABS(fVar17 - 1.0);
      if (ABS(fVar17 - 1.0) <= 0.1) goto LAB_10051b5c;
    }
    else {
      uVar15 = uVar15 & 0xfffbffff | 0x80000;
      bVar1 = true;
    }
    local_74 = *(int *)(*(int *)(param_1 + 0xd9c4) + 0x90);
    uStack_68 = uRam1012bce8;
    local_70 = _DAT_1012bce0;
    uStack_58 = uRam1012bcf8;
    uStack_60 = _DAT_1012bcf0;
    local_50 = DAT_1012bd00;
  }
LAB_10051b5c:
  iVar11 = local_74;
  pcVar2 = (char *)(param_1 + 0x5955);
  if ((((((*pcVar2 != '\0') || (*(int *)(param_1 + 0x6ec) != param_6)) ||
        (*(int *)(param_1 + 0x6a8) != param_7)) ||
       ((*(int *)(param_1 + 0xdcd8) != param_5 || (*(int *)(param_1 + 0xdc98) != param_4)))) ||
      ((*(int *)(param_1 + 0xda74) != local_a0 ||
       ((*(int *)(param_1 + 0xda84) != local_74 || (*(int *)(param_1 + 0x5930) != 2)))))) ||
     ((*(int *)(param_1 + 0xdce0) != *(int *)(puVar3 + param_2 * 4) ||
      (((((param_9 != 0) != (iVar7 != 0) || uVar8 < param_8) || uVar9 < param_9 ||
        (*(int *)(param_1 + 0xda9c) != iVar5)) || (*(uint *)(param_1 + 0x4cb0) != uVar15)))))) {
    iVar7 = param_7;
    if (param_4 != *(int *)(param_1 + 0xd9d4)) {
      iVar7 = 0;
    }
    FUN_1004e440(param_1,uVar8 < param_8,uVar9 < param_9,iVar7);
    local_d4 = param_6;
    if (param_4 == *(int *)(param_1 + 0xd9d4)) {
      local_d4 = *(int *)(param_1 + 0x5c);
    }
    if (*pcVar2 != '\0') {
      *(undefined1 *)(param_1 + 0xd979) = 1;
      *(byte *)(param_1 + 0xd974) = *(byte *)(param_1 + 0xd974) | 1;
    }
    if (*(int *)(param_1 + 0x6a8) != param_7) {
      *(int *)(param_1 + 0x6a8) = param_7;
      *(undefined1 *)(param_1 + 0xd97f) = 1;
    }
    if (*(int *)(param_1 + 0xdc98) != param_4) {
      *(int *)(param_1 + 0xdc98) = param_4;
      *(undefined1 *)(param_1 + 0xd97f) = 1;
    }
    if (*(int *)(param_1 + 0x6ec) != local_d4) {
      *(int *)(param_1 + 0x6ec) = local_d4;
      *(undefined1 *)(param_1 + 0xd97f) = 1;
    }
    if (*(int *)(param_1 + 0xdcd8) != param_5) {
      *(int *)(param_1 + 0xdcd8) = param_5;
      *(undefined1 *)(param_1 + 0xd980) = 1;
    }
    if (*(int *)(param_1 + 0xda84) != iVar11) {
      *(int *)(param_1 + 0xda84) = iVar11;
      if (iVar11 == 0) {
        *(undefined8 *)(param_1 + 0xde08) = 0;
        *(undefined8 *)(param_1 + 0xde00) = 0;
        *(undefined8 *)(param_1 + 0xde18) = 0;
        *(undefined8 *)(param_1 + 0xde10) = 0;
        *(undefined8 *)(param_1 + 0xde20) = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0xde08) = uStack_68;
        *(undefined8 *)(param_1 + 0xde00) = local_70;
        *(undefined8 *)(param_1 + 0xde18) = uStack_58;
        *(undefined8 *)(param_1 + 0xde10) = uStack_60;
        *(undefined8 *)(param_1 + 0xde20) = local_50;
      }
      *(bool *)(param_1 + 0x595b) = bVar1;
      *(undefined1 *)(param_1 + 0xd97d) = 1;
      *(undefined1 *)(param_1 + 0xde59) = 1;
    }
    if (*(int *)(param_1 + 0xda9c) != iVar5) {
      *(int *)(param_1 + 0xda9c) = iVar5;
      *(undefined1 *)(param_1 + 0xde59) = 1;
    }
    if (*(int *)(param_1 + 0xda74) != local_a0) {
      *(undefined1 *)(param_1 + 0xde59) = 1;
      *(int *)(param_1 + 0xda74) = local_a0;
      *(undefined8 *)(param_1 + 0xdde0) = uStack_94;
      *(ulonglong *)(param_1 + 0xddd8) = CONCAT44(uStack_98,local_9c);
      *(undefined8 *)(param_1 + 0xddf0) = uStack_84;
      *(undefined8 *)(param_1 + 0xdde8) = uStack_8c;
      *(undefined8 *)(param_1 + 0xddf8) = uStack_7c;
    }
    if (*(char *)(*(int *)(param_1 + 0xd9c4) + 0xec) != '\0') {
      if ((*(char *)(param_1 + 0xde69) == '\0') && ((((uint)local_70 | local_9c) >> 4 & 1) != 0)) {
        bVar14 = 1;
      }
      else {
        bVar14 = 0;
      }
      *(byte *)(param_1 + 0xde5e) = *(byte *)(param_1 + 0xde5e) | bVar14;
    }
    if ((*(int *)(param_1 + 0x5930) != 2) || (*(char *)(param_1 + 0x5955) != '\0')) {
      *(undefined1 *)(param_1 + 0xd97e) = 1;
      *(int *)(param_1 + 0x5930) = 2;
    }
    if (*(int *)(param_1 + 0xdce0) != *(int *)(puVar3 + param_2 * 4)) {
      *(int *)(param_1 + 0xdce0) = *(int *)(puVar3 + param_2 * 4);
      *(undefined1 *)(param_1 + 0xde58) = 1;
    }
    if (*(int *)(param_1 + 0xdaa4) != *(int *)(puVar4 + param_2 * 4)) {
      *(int *)(param_1 + 0xdaa4) = *(int *)(puVar4 + param_2 * 4);
      *(undefined1 *)(param_1 + 0xde59) = 1;
    }
    if (*(uint *)(param_1 + 0x4cb0) != uVar15) {
      *(undefined1 *)(param_1 + 0xd981) = 1;
      *(uint *)(param_1 + 0x4cb0) = uVar15;
    }
    bVar14 = *(byte *)(param_1 + 0x5955);
    *(byte *)(param_1 + 0xd97c) = bVar14 | *(byte *)(param_1 + 0xd97c);
    *(byte *)(param_1 + 0xd97b) = bVar14 | *(byte *)(param_1 + 0xd97b);
    *(byte *)(param_1 + 0xd97d) = bVar14 | *(byte *)(param_1 + 0xd97d);
    *(byte *)(param_1 + 0xd978) = bVar14 | *(byte *)(param_1 + 0xd978);
    if (bVar14 != 0) {
      *pcVar2 = '\0';
      FUN_1005f298(param_1);
    }
  }
  return;
}

