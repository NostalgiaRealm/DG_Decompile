/*
 * FUN_100333b8 at 100333b8
 * undefined FUN_100333b8(void)
 * Address ranges: 100333b8-10034517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100333b8(int param_1,int param_2,byte *param_3,undefined4 param_4,ulonglong param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  undefined1 uVar14;
  bool bVar15;
  float fVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  
  fVar16 = (float)param_5;
  uVar14 = (undefined1)param_5;
  switch(param_4) {
  case 4:
    *(uint *)(param_2 + 0xf28) = (uint)(fVar16 != 0.0);
    param_3[0x11] = 1;
    uVar18 = *(uint *)(param_2 + 0x40c);
    uVar19 = uVar18 & 0xffbfffff;
    if (fVar16 != 0.0) {
      uVar19 = uVar18 | 0x400000;
    }
    *(uint *)(param_2 + 0x40c) = uVar19;
    return;
  case 7:
    uVar19 = (uint)(fVar16 != 0.0);
    *(uint *)(param_2 + 0x214) = uVar19;
    *(uint *)(param_2 + 0x1e0) = uVar19;
    param_3[0xb] = 1;
    uVar19 = ~(*(uint *)(param_1 + 0x18f8) >> 1) & 1;
    uVar18 = 0;
    if (fVar16 == 0.0) {
      uVar18 = 2;
    }
    uVar18 = uVar18 | uVar19;
    uVar20 = *(uint *)(param_1 + 0xf1c);
    *(uint *)(param_1 + 0xf1c) = uVar18;
    uVar19 = uVar19 ^ 1;
    *(byte *)(param_1 + 0x1d41) = uVar20 != uVar18 | *(byte *)(param_1 + 0x1d41);
    uVar18 = *(uint *)(param_1 + 0x374);
    *(uint *)(param_1 + 0x374) = uVar19;
    *(byte *)(param_1 + 0x1d3d) = uVar18 != uVar19 | *(byte *)(param_1 + 0x1d3d);
    return;
  case 8:
    uVar17 = 2;
    if (fVar16 != 2.8026e-45) {
      uVar17 = 3;
    }
    *(undefined4 *)(param_2 + 0x2dc) = uVar17;
    *(bool *)(param_2 + 0x1884) = fVar16 == 1.4013e-45;
    param_3[0xd] = 1;
    return;
  case 9:
    *(bool *)(param_2 + 0x1883) = fVar16 == 1.4013e-45;
    uVar11 = 0x40000000000000;
    if (fVar16 != 1.4013e-45) {
      uVar11 = 0;
    }
    *(ulonglong *)(param_2 + 0x428) = uVar11 | *(ulonglong *)(param_2 + 0x428) & 0xffbfffffffffffff;
    param_3[8] = 1;
    return;
  case 0xb:
    bVar15 = fVar16 != 0.0;
    *(uint *)(param_2 + 0xf2c) = (uint)bVar15;
    param_3[0x11] = 1;
    *(bool *)(param_2 + 0x189a) = bVar15;
    uVar11 = 0x1000000;
    if (!bVar15) {
      uVar11 = 0;
    }
    *(ulonglong *)(param_2 + 0x428) = uVar11 | *(ulonglong *)(param_2 + 0x428) & 0xfffffffffeffffff;
    param_3[8] = 1;
    return;
  case 0xe:
    *(uint *)(param_2 + 0x218) = (uint)(fVar16 != 0.0);
    *(uint *)(param_2 + 0x1e4) = (uint)(fVar16 != 0.0);
    param_3[0xb] = 1;
    return;
  case 0xf:
    *(bool *)(param_2 + 0x1881) = fVar16 != 0.0;
    if (fVar16 == 0.0) {
      *(undefined4 *)(param_2 + 0x954) = 0;
      param_3[0x11] = 1;
      param_3[8] = 1;
      return;
    }
    *(undefined4 *)(param_2 + 0x954) = *(undefined4 *)(param_2 + 0x1844);
    param_3[0x11] = 1;
    param_3[8] = 1;
    return;
  case 0x13:
    if (0xd < (uint)fVar16) {
      return;
    }
    *(undefined4 *)(param_2 + 0x280) = *(undefined4 *)(&DAT_1009e050 + (int)fVar16 * 4);
    *(undefined4 *)(param_2 + 0x2a0) = *(undefined4 *)(&DAT_1009dfd0 + (int)fVar16 * 4);
    *(undefined4 *)(param_2 + 0x28c) = *(undefined4 *)(&DAT_1009e010 + (int)fVar16 * 4);
    *(undefined4 *)(param_2 + 0x2ac) = *(undefined4 *)(&DAT_1009df90 + (int)fVar16 * 4);
    if (fVar16 == 1.54143e-44) {
      uVar17 = 6;
    }
    else {
      if (fVar16 != 1.82169e-44) goto LAB_1003371c;
      uVar17 = 5;
    }
    *(undefined4 *)(param_2 + 0x2a4) = uVar17;
    *(undefined4 *)(param_2 + 0x284) = uVar17;
    *(undefined4 *)(param_2 + 0x2b0) = uVar17;
    *(undefined4 *)(param_2 + 0x290) = uVar17;
LAB_1003371c:
    param_3[0xc] = 1;
    return;
  case 0x14:
    if ((uint)fVar16 < 0xe) {
      *(undefined4 *)(param_2 + 0x284) = *(undefined4 *)(&DAT_1009e050 + (int)fVar16 * 4);
      *(undefined4 *)(param_2 + 0x2a4) = *(undefined4 *)(&DAT_1009dfd0 + (int)fVar16 * 4);
      *(undefined4 *)(param_2 + 0x290) = *(undefined4 *)(&DAT_1009e010 + (int)fVar16 * 4);
      *(undefined4 *)(param_2 + 0x2b0) = *(undefined4 *)(&DAT_1009df90 + (int)fVar16 * 4);
      param_3[0xc] = 1;
      return;
    }
    break;
  case 0x16:
    if ((uint)fVar16 < 4) {
      *(undefined4 *)(param_2 + 0x2e0) = *(undefined4 *)(&DAT_1009df78 + (int)fVar16 * 4);
      param_3[0xd] = 1;
      return;
    }
    break;
  case 0x17:
    if ((uint)fVar16 < 9) {
      iVar21 = *(int *)(&DAT_1009df50 + (int)fVar16 * 4);
      *(int *)(param_2 + 0x21c) = iVar21;
      *(int *)(param_2 + 0x1e8) = iVar21;
      uVar19 = *(uint *)(param_2 + 0x185c);
      if (uVar19 != 0) {
        iVar21 = *(int *)(&DAT_1009df08 + iVar21 * 4);
        *(uint *)(param_2 + 0x2e8) = (uVar19 * 5 >> 1) * iVar21;
        *(float *)(param_2 + 0x2f0) = (float)iVar21 * (float)uVar19 * 0.5;
        param_3[0xd] = 1;
      }
      param_3[0xb] = 1;
      return;
    }
    break;
  case 0x18:
    *(uint *)(param_2 + 0x950) = (uint)fVar16 & 0xff;
    param_3[0x11] = 1;
    *(uint *)(param_2 + 0x548) = *(uint *)(param_2 + 0x950);
    param_3[0x18] = 1;
    return;
  case 0x19:
    *(float *)(param_2 + 0x1844) = fVar16;
    *(ulonglong *)(param_2 + 0x428) =
         (*(ulonglong *)(param_2 + 0x428) ^ (ulonglong)((int)fVar16 - 1) << 0x33) &
         0xffc7ffffffffffff ^ (ulonglong)((int)fVar16 - 1) << 0x33;
    if (*(char *)(param_2 + 0x1881) == '\0') {
      fVar16 = 0.0;
    }
    *(float *)(param_2 + 0x954) = fVar16;
    param_3[0x11] = 1;
    param_3[8] = 1;
    return;
  case 0x1a:
    *(bool *)(param_2 + 0x189d) = fVar16 != 0.0;
    uVar11 = 0x800000000000000;
    if (fVar16 != 0.0) {
      uVar11 = 0;
    }
    *(ulonglong *)(param_2 + 0x428) = uVar11 | *(ulonglong *)(param_2 + 0x428) & 0xf7ffffffffffffff;
    if ((fVar16 == 0.0) && (*(char *)(param_2 + 0x189e) != '\0')) {
      iVar21 = 1;
    }
    else {
      iVar21 = 0;
    }
    param_3[0x11] = *(int *)(param_2 + 0x96c) != iVar21 | param_3[0x11];
    *(int *)(param_2 + 0x96c) = iVar21;
    param_3[8] = 1;
    return;
  case 0x1b:
    *(uint *)(param_2 + 0x29c) = (uint)(fVar16 != 0.0);
    *(uint *)(param_2 + 0x27c) = (uint)(fVar16 != 0.0);
    param_3[0xc] = 1;
    return;
  case 0x1c:
    bVar15 = fVar16 == 0.0;
    uVar17 = 0x3f800000;
    if (bVar15) {
      uVar17 = 0;
    }
    *(undefined4 *)(param_2 + 0x958) = uVar17;
    param_3[0x11] = 1;
    *(bool *)(param_2 + 0x189c) = !bVar15;
    uVar11 = 0x100000000000000;
    if (bVar15) {
      uVar11 = 0;
    }
    *(ulonglong *)(param_2 + 0x428) = uVar11 | *(ulonglong *)(param_2 + 0x428) & 0xfeffffffffffffff;
    param_3[8] = 1;
    uVar18 = *(uint *)(param_2 + 0x40c);
    uVar19 = uVar18 & 0xfbffffff;
    if (!bVar15) {
      uVar19 = uVar18 | 0x4000000;
    }
    *(uint *)(param_2 + 0x40c) = uVar19;
    return;
  case 0x1d:
    *(uint *)(param_2 + 0x948) = (uint)(fVar16 != 0.0);
    param_3[0x11] = 1;
    *(float *)(param_2 + 0x55c) = fVar16;
    param_3[0x18] = 1;
    uVar18 = *(uint *)(param_2 + 0x40c);
    uVar19 = uVar18 & 0xffefffff;
    if (fVar16 != 0.0) {
      uVar19 = uVar18 | 0x100000;
    }
    *(uint *)(param_2 + 0x40c) = uVar19;
    return;
  case 0x22:
    *(float *)(param_2 + 0x9b0) = (float)((uint)fVar16 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0x9b4) = (float)((uint)fVar16 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0x9b8) = (float)((uint)fVar16 & 0xff) / 255.0;
    *(float *)(param_2 + 0x9bc) = (float)((uint)fVar16 >> 0x18) / 255.0;
    param_3[0x11] = 1;
    *(float *)(param_2 + 0x4c0) = *(float *)(param_2 + 0x9b0);
    *(float *)(param_2 + 0x4c4) = *(float *)(param_2 + 0x9b4);
    *(float *)(param_2 + 0x4c8) = *(float *)(param_2 + 0x9b8);
    param_3[0x18] = 1;
    return;
  case 0x23:
    *(float *)(param_2 + 0x978) = fVar16;
    param_3[0x11] = 1;
    *(float *)(param_2 + 0x1858) = fVar16;
    *(ulonglong *)(param_2 + 0x428) =
         (*(ulonglong *)(param_2 + 0x428) ^ param_5 << 0x39) & 0xf9ffffffffffffff ^ param_5 << 0x39;
    param_3[8] = 1;
    return;
  case 0x24:
    if (1e+37 <= ABS(fVar16)) {
      fVar16 = (float)((uint)fVar16 & 0x80000000 | 0x7cf0bdc2);
    }
    *(float *)(param_2 + 0x960) = fVar16;
    *(float *)(param_2 + 0x95c) = *(float *)(param_2 + 0x964) - fVar16;
    param_3[0x11] = 1;
    *(float *)(param_2 + 0x558) = *(float *)(param_2 + 0x95c);
    param_3[0x18] = 1;
    return;
  case 0x25:
    if (1e+37 <= ABS(fVar16)) {
      fVar16 = (float)((uint)fVar16 & 0x80000000 | 0x7cf0bdc2);
    }
    *(float *)(param_2 + 0x964) = fVar16;
    *(float *)(param_2 + 0x95c) = fVar16 - *(float *)(param_2 + 0x960);
    param_3[0x11] = 1;
    *(float *)(param_2 + 0x554) = *(float *)(param_2 + 0x964);
    *(float *)(param_2 + 0x558) = *(float *)(param_2 + 0x95c);
    param_3[0x18] = 1;
    return;
  case 0x26:
    *(float *)(param_2 + 0x968) = fVar16;
    param_3[0x11] = 1;
    *(float *)(param_2 + 0x550) = *(float *)(param_2 + 0x968);
    param_3[0x18] = 1;
    return;
  case 0x29:
    *(bool *)(param_2 + 0x1899) = fVar16 != 0.0;
    uVar11 = 0x2000000;
    if (fVar16 == 0.0) {
      uVar11 = 0;
    }
    *(ulonglong *)(param_2 + 0x428) = uVar11 | *(ulonglong *)(param_2 + 0x428) & 0xfffffffffdffffff;
    param_3[9] = 1;
    *param_3 = *param_3 | 1;
    param_3[0x11] = 1;
    param_3[8] = 1;
    return;
  case 0x2f:
    fVar4 = 2.24208e-44;
    if ((uint)fVar16 < 0x11) {
      fVar4 = fVar16;
    }
    *(float *)(param_2 + 0x185c) = fVar4;
    iVar21 = *(int *)(&DAT_1009df08 + *(int *)(param_2 + 0x1e8) * 4);
    *(uint *)(param_2 + 0x2e8) = ((uint)((int)fVar4 * 5) >> 1) * iVar21;
    *(float *)(param_2 + 0x2f0) = (float)iVar21 * (float)(uint)fVar4 * 0.5;
    param_3[0xd] = 1;
    return;
  case 0x30:
    *(uint *)(param_2 + 0x970) = (uint)(fVar16 != 0.0);
    param_3[0x11] = 1;
    uVar18 = *(uint *)(param_2 + 0x40c);
    uVar19 = uVar18 & 0xefffffff;
    if (fVar16 != 0.0) {
      uVar19 = uVar18 | 0x10000000;
    }
    *(uint *)(param_2 + 0x40c) = uVar19;
    return;
  case 0x34:
    *(uint *)(param_2 + 0x1ec) = (uint)(fVar16 != 0.0);
    param_3[0xb] = 1;
    return;
  case 0x35:
    if ((uint)fVar16 < 9) {
      uVar17 = *(undefined4 *)(&DAT_1009df50 + (int)fVar16 * 4);
      *(undefined4 *)(param_2 + 0x204) = uVar17;
      *(undefined4 *)(param_2 + 500) = uVar17;
      param_3[0xb] = 1;
      return;
    }
    break;
  case 0x36:
    if ((uint)fVar16 < 9) {
      uVar17 = *(undefined4 *)(&DAT_1009df50 + (int)fVar16 * 4);
      *(undefined4 *)(param_2 + 0x208) = uVar17;
      *(undefined4 *)(param_2 + 0x1f8) = uVar17;
      param_3[0xb] = 1;
      return;
    }
    break;
  case 0x37:
    if ((uint)fVar16 < 9) {
      uVar17 = *(undefined4 *)(&DAT_1009df50 + (int)fVar16 * 4);
      *(undefined4 *)(param_2 + 0x20c) = uVar17;
      *(undefined4 *)(param_2 + 0x1fc) = uVar17;
      param_3[0xb] = 1;
      return;
    }
    break;
  case 0x38:
    if ((uint)fVar16 < 9) {
      uVar17 = *(undefined4 *)(&DAT_1009df50 + (int)fVar16 * 4);
      *(undefined4 *)(param_2 + 0x210) = uVar17;
      *(undefined4 *)(param_2 + 0x200) = uVar17;
      param_3[0xb] = 1;
      return;
    }
    break;
  case 0x39:
    *(undefined1 *)(param_2 + 0x17c0) = uVar14;
    param_3[0xb] = 1;
    return;
  case 0x3a:
    *(undefined1 *)(param_2 + 0x1f0) = uVar14;
    param_3[0xb] = 1;
    return;
  case 0x3b:
    *(undefined1 *)(param_2 + 0x1f1) = uVar14;
    param_3[0xb] = 1;
    return;
  case 0x3c:
    *(float *)(param_2 + 0x9c0) = (float)((uint)fVar16 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0x9c4) = (float)((uint)fVar16 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0x9c8) = (float)((uint)fVar16 & 0xff) / 255.0;
    *(float *)(param_2 + 0x9cc) = (float)((uint)fVar16 >> 0x18) / 255.0;
    param_3[0x11] = 1;
    *(float *)(param_2 + 0x560) = *(float *)(param_2 + 0x9c0);
    *(float *)(param_2 + 0x564) = *(float *)(param_2 + 0x9c4);
    *(float *)(param_2 + 0x568) = *(float *)(param_2 + 0x9c8);
    *(float *)(param_2 + 0x56c) = *(float *)(param_2 + 0x9cc);
    param_3[0x18] = 1;
    return;
  case 0x80:
    *(uint *)(param_2 + 0x187c) = *(uint *)(param_2 + 0x187c) & 0xfffffff0 | (uint)fVar16 & 0xf;
    return;
  case 0x81:
    uVar19 = *(uint *)(param_2 + 0x187c);
    *(uint *)(param_2 + 0x187c) = (uVar19 ^ (int)fVar16 << 4) & 0xf0 ^ uVar19;
    return;
  case 0x82:
    uVar19 = *(uint *)(param_2 + 0x187c);
    *(uint *)(param_2 + 0x187c) = (uVar19 ^ (int)fVar16 << 8) & 0xf00 ^ uVar19;
    return;
  case 0x83:
    uVar19 = *(uint *)(param_2 + 0x187c);
    *(uint *)(param_2 + 0x187c) = (uVar19 ^ (int)fVar16 << 0xc) & 0xf000 ^ uVar19;
    return;
  case 0x84:
    uVar19 = *(uint *)(param_2 + 0x187c);
    *(uint *)(param_2 + 0x187c) = (uVar19 ^ (int)fVar16 << 0x10) & 0xf0000 ^ uVar19;
    return;
  case 0x85:
    uVar19 = *(uint *)(param_2 + 0x187c);
    *(uint *)(param_2 + 0x187c) = (uVar19 ^ (int)fVar16 << 0x14) & 0xf00000 ^ uVar19;
    return;
  case 0x86:
    uVar19 = *(uint *)(param_2 + 0x187c);
    *(uint *)(param_2 + 0x187c) = (uVar19 ^ (int)fVar16 << 0x18) & 0xf000000 ^ uVar19;
    return;
  case 0x87:
    *(uint *)(param_2 + 0x187c) = *(uint *)(param_2 + 0x187c) & 0xfffffff | (int)fVar16 << 0x1c;
    return;
  case 0x89:
    *(uint *)(param_2 + 0x94c) = (uint)(fVar16 != 0.0);
    param_3[0x11] = 1;
    return;
  case 0x8b:
    *(float *)(param_2 + 0x9a0) = (float)((uint)fVar16 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0x9a4) = (float)((uint)fVar16 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0x9a8) = (float)((uint)fVar16 & 0xff) / 255.0;
    *(float *)(param_2 + 0x9ac) = (float)((uint)fVar16 >> 0x18) / 255.0;
    param_3[0x11] = 1;
    return;
  case 0x8c:
    *(float *)(param_2 + 0x97c) = fVar16;
    param_3[0x11] = 1;
    puVar1 = (uint *)(param_2 + 0x40c);
    uVar19 = *puVar1;
    *puVar1 = uVar19 & 0xfcffffff;
    if ((uint)fVar16 < 4) {
      *puVar1 = uVar19 & 0xfcffffff | (int)fVar16 << 0x18;
      return;
    }
    break;
  case 0x8d:
    *(bool *)(param_2 + 0x1882) = fVar16 != 0.0;
    puVar1 = (uint *)(param_2 + 0x3f4);
    puVar2 = (uint *)(param_2 + 0x404);
    puVar3 = (uint *)(param_2 + 0x408);
    if (fVar16 == 0.0) {
      *(int *)(param_2 + 0xe14) = 0;
      *(int *)(param_2 + 0xe1c) = 0;
      *(int *)(param_2 + 0xe10) = 0;
      *(uint *)(param_2 + 0xe18) = 0;
      uVar18 = *puVar3 | 0xff;
      uVar20 = *puVar2 | 0xff;
      uVar19 = *puVar1 & 0xffffff00;
    }
    else {
      iVar21 = *(int *)(param_2 + 0x1848);
      *(int *)(param_2 + 0xe10) = iVar21;
      iVar12 = *(int *)(param_2 + 0x184c);
      uVar5 = 0;
      if (iVar21 != 2) {
        uVar5 = 0x30;
      }
      *(int *)(param_2 + 0xe14) = iVar12;
      uVar20 = *(uint *)(param_2 + 0x1850);
      *(uint *)(param_2 + 0xe18) = uVar20;
      iVar13 = *(int *)(param_2 + 0x1854);
      *(int *)(param_2 + 0xe1c) = iVar13;
      uVar19 = (*puVar1 ^ iVar21 << 4) & 0x30 ^ *puVar1;
      uVar19 = ((uVar19 ^ iVar12 << 6) & 0xc0 ^ uVar19) & 0xfffffffc | uVar20 & 3;
      uVar6 = 0;
      if (iVar12 != 2) {
        uVar6 = 0xc0;
      }
      uVar7 = 0;
      if (uVar20 != 2) {
        uVar7 = 3;
      }
      uVar18 = 0;
      if (iVar13 != 2) {
        uVar18 = 0xc;
      }
      uVar8 = 0;
      if (iVar21 != 1) {
        uVar8 = 0x30;
      }
      uVar9 = 0;
      if (iVar12 != 1) {
        uVar9 = 0xc0;
      }
      uVar10 = 0;
      if (uVar20 != 1) {
        uVar10 = 3;
      }
      uVar20 = 0;
      if (iVar13 != 1) {
        uVar20 = 0xc;
      }
      uVar20 = uVar8 | *puVar2 & 0xffffff00 | uVar9 | uVar10 | uVar20;
      uVar18 = uVar5 | *puVar3 & 0xffffff00 | uVar6 | uVar7 | uVar18;
      uVar19 = (uVar19 ^ iVar13 << 2) & 0xc ^ uVar19;
    }
    *puVar1 = uVar19;
    *puVar2 = uVar20;
    *puVar3 = uVar18;
    param_3[0x11] = 1;
    return;
  case 0x8e:
    *(uint *)(param_2 + 0x940) = (uint)(fVar16 != 0.0);
    param_3[0x11] = 1;
    uVar18 = *(uint *)(param_2 + 0x40c);
    uVar19 = uVar18 & 0xdfffffff;
    if (fVar16 != 0.0) {
      uVar19 = uVar18 | 0x20000000;
    }
    *(uint *)(param_2 + 0x40c) = uVar19;
    return;
  case 0x8f:
    *(uint *)(param_2 + 0x944) = (uint)(fVar16 != 0.0);
    param_3[0x11] = 1;
    uVar18 = *(uint *)(param_2 + 0x40c);
    uVar19 = uVar18 & 0xff7fffff;
    if (fVar16 != 0.0) {
      uVar19 = uVar18 | 0x800000;
    }
    *(uint *)(param_2 + 0x40c) = uVar19;
    return;
  case 0x90:
    *(uint *)(param_2 + 0xf20) = (uint)(fVar16 != 0.0);
    uVar11 = 0x1000000000000;
    if (fVar16 == 0.0) {
      uVar11 = 0;
    }
    *(ulonglong *)(param_2 + 0x428) = uVar11 | *(ulonglong *)(param_2 + 0x428) & 0xfffeffffffffffff;
    param_3[0x11] = 1;
    return;
  case 0x91:
    *(float *)(param_2 + 0x1848) = fVar16;
    if (*(char *)(param_2 + 0x1882) != '\0') {
      *(float *)(param_2 + 0xe10) = fVar16;
      param_3[0x11] = 1;
      uVar19 = *(uint *)(param_2 + 0x3f4);
      *(uint *)(param_2 + 0x3f4) = (uVar19 ^ (int)fVar16 << 4) & 0x30 ^ uVar19;
      uVar19 = 0;
      if (fVar16 != 1.4013e-45) {
        uVar19 = 0x30;
      }
      *(uint *)(param_2 + 0x404) = uVar19 | *(uint *)(param_2 + 0x404) & 0xffffffcf;
      uVar19 = 0;
      if (fVar16 != 2.8026e-45) {
        uVar19 = 0x30;
      }
      *(uint *)(param_2 + 0x408) = uVar19 | *(uint *)(param_2 + 0x408) & 0xffffffcf;
      return;
    }
    break;
  case 0x92:
    *(float *)(param_2 + 0x184c) = fVar16;
    if (*(char *)(param_2 + 0x1882) != '\0') {
      *(float *)(param_2 + 0xe14) = fVar16;
      param_3[0x11] = 1;
      uVar19 = *(uint *)(param_2 + 0x3f4);
      *(uint *)(param_2 + 0x3f4) = (uVar19 ^ (int)fVar16 << 6) & 0xc0 ^ uVar19;
      uVar19 = 0;
      if (fVar16 != 1.4013e-45) {
        uVar19 = 0xc0;
      }
      *(uint *)(param_2 + 0x404) = uVar19 | *(uint *)(param_2 + 0x404) & 0xffffff3f;
      uVar19 = 0;
      if (fVar16 != 2.8026e-45) {
        uVar19 = 0xc0;
      }
      *(uint *)(param_2 + 0x408) = uVar19 | *(uint *)(param_2 + 0x408) & 0xffffff3f;
      return;
    }
    break;
  case 0x93:
    *(float *)(param_2 + 0x1850) = fVar16;
    if (*(char *)(param_2 + 0x1882) != '\0') {
      *(float *)(param_2 + 0xe18) = fVar16;
      param_3[0x11] = 1;
      *(uint *)(param_2 + 0x3f4) = *(uint *)(param_2 + 0x3f4) & 0xfffffffc | (uint)fVar16 & 3;
      uVar19 = 0;
      if (fVar16 != 1.4013e-45) {
        uVar19 = 3;
      }
      *(uint *)(param_2 + 0x404) = uVar19 | *(uint *)(param_2 + 0x404) & 0xfffffffc;
      uVar19 = 0;
      if (fVar16 != 2.8026e-45) {
        uVar19 = 3;
      }
      *(uint *)(param_2 + 0x408) = uVar19 | *(uint *)(param_2 + 0x408) & 0xfffffffc;
      return;
    }
    break;
  case 0x94:
    *(float *)(param_2 + 0x1854) = fVar16;
    if (*(char *)(param_2 + 0x1882) != '\0') {
      *(float *)(param_2 + 0xe1c) = fVar16;
      param_3[0x11] = 1;
      uVar19 = *(uint *)(param_2 + 0x3f4);
      *(uint *)(param_2 + 0x3f4) = (uVar19 ^ (int)fVar16 << 2) & 0xc ^ uVar19;
      uVar19 = 0;
      if (fVar16 != 1.4013e-45) {
        uVar19 = 0xc;
      }
      *(uint *)(param_2 + 0x404) = uVar19 | *(uint *)(param_2 + 0x404) & 0xfffffff3;
      uVar19 = 0;
      if (fVar16 != 2.8026e-45) {
        uVar19 = 0xc;
      }
      *(uint *)(param_2 + 0x408) = uVar19 | *(uint *)(param_2 + 0x408) & 0xfffffff3;
      return;
    }
    break;
  case 0x97:
    if (3 < (uint)fVar16) {
      fVar16 = 0.0;
    }
    *(float *)(param_2 + 0x1870) = fVar16;
    return;
  case 0x98:
    *(int *)(param_2 + 0xe80) = -(uint)((param_5 & 1) != 0);
    *(int *)(param_2 + 0xe84) = -(uint)((param_5 & 2) != 0);
    *(int *)(param_2 + 0xe88) = -(uint)((param_5 & 4) != 0);
    *(int *)(param_2 + 0xe8c) = -(uint)((param_5 & 8) != 0);
    *(int *)(param_2 + 0xe90) = -(uint)((param_5 & 0x10) != 0);
    *(int *)(param_2 + 0xe94) = -(uint)((param_5 & 0x20) != 0);
    *(uint *)(param_2 + 0x1874) = (uint)fVar16 & 0x3f;
    param_3[0x11] = 1;
    *(int *)(param_2 + 0x530) = *(int *)(param_2 + 0xe80);
    *(int *)(param_2 + 0x534) = *(int *)(param_2 + 0xe84);
    *(int *)(param_2 + 0x538) = *(int *)(param_2 + 0xe88);
    *(int *)(param_2 + 0x53c) = *(int *)(param_2 + 0xe8c);
    *(int *)(param_2 + 0x540) = *(int *)(param_2 + 0xe90);
    *(int *)(param_2 + 0x544) = *(int *)(param_2 + 0xe94);
    param_3[0x18] = 1;
    param_3[8] = 1;
  }
  return;
}

