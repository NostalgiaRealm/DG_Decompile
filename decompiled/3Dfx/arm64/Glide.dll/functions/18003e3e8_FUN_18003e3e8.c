/*
 * FUN_18003e3e8 at 18003e3e8
 * undefined __cdecl FUN_18003e3e8(int * param_1, int param_2, uint param_3, byte param_4, byte param_5, byte param_6)
 * Address ranges: 18003e3e8-18003e837
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003e3e8(int *param_1,int param_2,uint param_3,byte param_4,byte param_5,byte param_6)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  int *extraout_x13;
  int *extraout_x13_00;
  int *extraout_x13_01;
  uint extraout_w14;
  longlong extraout_x14;
  longlong lVar18;
  uint *extraout_x15;
  uint *extraout_x15_00;
  uint *extraout_x15_01;
  uint *puVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  longlong local_58;
  
  if (param_2 == 0) {
LAB_18003e4f0:
    local_58 = 0x160;
    lVar7 = 0x164;
    lVar8 = 0x160;
    lVar28 = 0x160;
    lVar20 = 0x164;
    lVar11 = 0x168;
    lVar12 = 0x164;
    lVar13 = 0x160;
    lVar15 = 0x16c;
    lVar17 = 0x164;
    lVar6 = 0x160;
    lVar5 = 0x164;
    lVar4 = 0x160;
    lVar21 = 0x164;
    lVar22 = 0x168;
    lVar23 = 0x16c;
    lVar24 = 0x170;
    lVar25 = 0x160;
    lVar26 = 0x164;
    lVar27 = 0x160;
    lVar18 = 0x15c;
  }
  else if (param_2 == 1) {
    local_58 = 0x180;
    lVar18 = 0x17c;
    lVar27 = 0x180;
    lVar26 = 0x184;
    lVar25 = 0x180;
    lVar24 = 400;
    lVar23 = 0x18c;
    lVar22 = 0x188;
    lVar21 = 0x184;
    lVar4 = 0x180;
    lVar5 = 0x184;
    lVar6 = 0x180;
    lVar17 = 0x184;
    lVar15 = 0x18c;
    lVar13 = 0x180;
    lVar12 = 0x184;
    lVar11 = 0x188;
    lVar20 = 0x184;
    lVar28 = 0x180;
    lVar8 = 0x180;
    lVar7 = 0x184;
  }
  else {
    if (param_2 != 2) goto LAB_18003e4f0;
    local_58 = 0x1a0;
    lVar18 = 0x19c;
    lVar27 = 0x1a0;
    lVar26 = 0x1a4;
    lVar25 = 0x1a0;
    lVar24 = 0x1b0;
    lVar23 = 0x1ac;
    lVar22 = 0x1a8;
    lVar21 = 0x1a4;
    lVar4 = 0x1a0;
    lVar5 = 0x1a4;
    lVar6 = 0x1a0;
    lVar17 = 0x1a4;
    lVar15 = 0x1ac;
    lVar13 = 0x1a0;
    lVar12 = 0x1a4;
    lVar11 = 0x1a8;
    lVar20 = 0x1a4;
    lVar28 = 0x1a0;
    lVar8 = 0x1a0;
    lVar7 = 0x1a4;
  }
  puVar19 = (uint *)(lVar18 + (longlong)param_1);
  if (((param_3 & 0xff0) != 0x100) &&
     ((param_3 & 0xf00) != 0x600 && ((param_3 & 0xf00) - 0x100 & 0xfffffaff) == 0)) {
    param_5 = param_5 ^ 1;
  }
  uVar3 = (uint)param_4;
  if ((param_3 & 0x1000) != 0) {
    uVar3 = 0xff;
  }
  uVar14 = param_3 & 0xf0;
  uVar16 = param_3 & 0xf;
  if ((uVar14 - 0x20 & 0xffffffef) == 0) {
    lVar4 = 0x80;
    if (uVar14 == 0x20) {
      lVar4 = 0x74;
    }
    uVar14 = *(uint *)((longlong)param_1 + lVar4 + (ulonglong)uVar16 * 4);
    if (uVar14 == 0) {
LAB_18003e780:
      fVar30 = -0.5;
      if ((param_3 & 0xf00) != 0x300) {
        fVar30 = 0.0;
      }
      fVar29 = 1.0;
      if ((param_3 & 0xf00) != 0x100) {
        fVar29 = fVar30;
      }
      if ((param_3 >> 0xd & 1) != 0) {
        fVar29 = fVar29 * 255.0;
      }
      fVar30 = -fVar29;
      if (param_5 == 0) {
        fVar30 = fVar29;
      }
      bVar2 = uVar3 == 0xff;
      uVar3 = 5;
      if (bVar2) {
        uVar3 = 2;
      }
      *puVar19 = uVar3;
      uVar9 = 0x4000;
      if (bVar2) {
        uVar9 = 0x4001;
      }
      uVar1 = 0x4006;
      if (bVar2) {
        uVar1 = uVar9;
      }
      *(undefined4 *)(lVar25 + (longlong)param_1) = uVar1;
      if ((param_6 & 1) != 0) {
        iVar10 = (int)fVar30;
        *(int *)(lVar24 + (longlong)param_1) = iVar10;
        *(int *)(lVar23 + (longlong)param_1) = iVar10;
        *(int *)(lVar22 + (longlong)param_1) = iVar10;
        *(int *)(lVar21 + (longlong)param_1) = iVar10;
        return;
      }
      *(float *)(lVar24 + (longlong)param_1) = fVar30;
      *(float *)(lVar23 + (longlong)param_1) = fVar30;
      *(float *)(lVar22 + (longlong)param_1) = fVar30;
      *(float *)(lVar21 + (longlong)param_1) = fVar30;
      return;
    }
    *puVar19 = 2;
    uVar3 = FUN_180057358(uVar14,0,1,4,0,0);
    *(uint *)(lVar26 + (longlong)extraout_x13_01) = extraout_w14 & 0xff;
    *(uint *)(lVar27 + (longlong)extraout_x13_01) = uVar3;
    param_1 = extraout_x13_01;
    puVar19 = extraout_x15_01;
  }
  else if (uVar14 == 0x40) {
    *puVar19 = 2;
    *(uint *)(lVar6 + (longlong)param_1) = uVar3 << 4 | 0x101006;
    *(undefined4 *)(lVar17 + (longlong)param_1) = 2;
  }
  else if (uVar14 == 0x50) {
    param_1[2] = param_1[2] | 1;
    if (*param_1 == 0x51) {
      *(undefined4 *)(lVar15 + (longlong)param_1) = 5;
      uVar9 = 0;
      uVar16 = 4;
      uVar14 = 0x308006;
    }
    else {
      uVar9 = 5;
      uVar16 = 3;
      uVar14 = 0x208006;
    }
    *puVar19 = uVar16;
    *(uint *)(lVar13 + (longlong)param_1) = uVar14 | uVar3 << 4;
    *(undefined4 *)(lVar12 + (longlong)param_1) = 0;
    *(undefined4 *)(lVar11 + (longlong)param_1) = uVar9;
  }
  else if (uVar14 == 0x80) {
    *puVar19 = 2;
    uVar3 = FUN_180057358(param_1[(ulonglong)uVar16 + 0x26],uVar3,1,4,0,0);
    *(uint *)(lVar28 + (longlong)extraout_x13_00) = uVar3;
    *(uint *)(extraout_x14 + (longlong)extraout_x13_00) =
         (uint)*(byte *)(param_1 + (ulonglong)uVar16 + 0x26);
    param_1 = extraout_x13_00;
    puVar19 = extraout_x15_00;
  }
  else if (uVar14 == 0xf0) {
    *puVar19 = 2;
    uVar3 = FUN_180057358(param_1[0x2a],uVar3,1,4,0,0);
    *(uint *)(local_58 + (longlong)extraout_x13) = uVar3;
    *(uint *)(lVar20 + (longlong)extraout_x13) = (uint)*(byte *)(extraout_x13 + 0x2a);
    param_1 = extraout_x13;
    puVar19 = extraout_x15;
  }
  else {
    if (uVar14 == 0) goto LAB_18003e780;
    if (uVar14 == 0x10) {
      *puVar19 = 2;
      *(uint *)(lVar4 + (longlong)param_1) = uVar3 << 4 | 0x100006;
      *(uint *)(lVar5 + (longlong)param_1) = (uint)*(byte *)(param_1 + (ulonglong)uVar16 + 0x23);
    }
  }
  if (param_5 != 0) {
    for (uVar3 = *puVar19; uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar19[uVar3 + 1] = puVar19[uVar3];
    }
    *(uint *)(lVar8 + (longlong)param_1) = *(uint *)(lVar8 + (longlong)param_1) | 0x80000000;
    *(undefined4 *)(lVar7 + (longlong)param_1) = 0x41;
    *puVar19 = *puVar19 + 1;
  }
  return;
}

