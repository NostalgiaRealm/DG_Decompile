/*
 * FUN_18003ec58 at 18003ec58
 * uint __cdecl FUN_18003ec58(int * param_1, ushort param_2, ushort param_3, byte param_4, byte param_5, longlong * param_6, byte param_7)
 * Address ranges: 18003ec58-18003f04f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18003ec58(int *param_1,ushort param_2,ushort param_3,byte param_4,byte param_5,
                  longlong *param_6,byte param_7)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint extraout_w1;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int extraout_w9;
  longlong extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  uint uVar13;
  undefined4 extraout_w11;
  int extraout_w11_00;
  undefined4 extraout_w12;
  int extraout_w12_00;
  longlong extraout_x14;
  uint uVar14;
  uint uVar16;
  float fVar17;
  float fVar18;
  uint uVar15;
  
  uVar9 = 0;
  if ((param_2 & 0xff0) != 0x300) {
    uVar9 = (uint)param_2;
  }
  uVar13 = 0;
  if ((uVar9 & 0xdf0) != 0 && (uVar9 & 0xff0) != 0x100) {
    uVar13 = (uint)param_4;
  }
  uVar3 = FUN_18003ea30(param_1,uVar9,(uint)param_3,0,0,0,param_5,param_6);
  uVar9 = 0xa4;
  if (param_5 != 7) {
    uVar9 = 0xff;
  }
  uVar4 = 0xe4;
  if (param_5 != 0xf) {
    uVar4 = uVar9;
  }
  uVar4 = FUN_18003e9f8((longlong)param_1,(uint)param_3,uVar4);
  piVar5 = (int *)FUN_18003e308((longlong)param_1,extraout_w1,param_5);
  FUN_18003e3e8(piVar5,0,uVar3 & 0xffff,(byte)uVar4,0,0);
  uVar9 = 0;
  if ((uVar3 & 0xff0) != 0x100) {
    uVar9 = uVar3 & 0xf00;
  }
  iVar11 = param_1[0x57] + param_1[0x4f];
  uVar16 = 1;
  uVar14 = uVar3 & 0xffff;
  uVar15 = uVar3 & 0xffff;
  uVar4 = uVar4 & 0xff;
  if ((uVar9 - 0x300 & 0xfffffdff) == 0) {
    bVar8 = 1;
LAB_18003ee94:
    if (((uVar14 >> 0xd & 1) == 0) || (bVar8 == 0)) {
      bVar2 = uVar4 == 0xff;
      iVar11 = 5;
      if (bVar2) {
        iVar11 = 2;
      }
      iVar12 = 0x4000;
      if (bVar2) {
        iVar12 = 0x4001;
      }
      iVar10 = 0x4006;
      if (bVar2) {
        iVar10 = iVar12;
      }
      param_1[0x5f] = iVar11;
      param_1[0x60] = iVar10;
      fVar17 = FUN_18003bff8(uVar14);
      puVar6 = (uint *)(param_1 + 0x5f);
      if (uVar13 == 0) {
        param_1[99] = (int)fVar17;
        param_1[100] = (int)fVar17;
        param_1[0x61] = (int)fVar17;
        param_1[0x62] = (int)fVar17;
        puVar7 = (uint *)0x0;
        uVar9 = ~uVar15 & 0x2000;
        iVar11 = extraout_w12_00;
      }
      else {
        fVar18 = (float)(extraout_w9 << (ulonglong)(uVar13 & 0x1f));
        puVar7 = (uint *)(param_1 + 0x67);
        param_1[99] = (int)fVar18;
        param_1[100] = (int)fVar18;
        param_1[0x61] = (int)fVar18;
        param_1[0x62] = (int)fVar18;
        fVar17 = fVar17 * fVar18;
        param_1[0x67] = extraout_w12_00;
        param_1[0x68] = extraout_w11_00;
        param_1[0x6b] = (int)fVar17;
        param_1[0x6c] = (int)fVar17;
        param_1[0x69] = (int)fVar17;
        param_1[0x6a] = (int)fVar17;
        iVar11 = 10;
        if (uVar4 == 0xff) {
          iVar11 = 4;
        }
        uVar9 = 0x2032;
      }
      uVar9 = (iVar11 + extraout_w10_00) * 0x1000000 + 0x1000000U & 0x7f000000 | uVar9;
LAB_18003eff0:
      FUN_180057c58(param_6,uVar9,(uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),puVar6,puVar7);
      uVar16 = ~(uVar15 >> 0xd) & 1;
      goto LAB_18003f000;
    }
    bVar2 = uVar4 == 0xff;
    iVar11 = 5;
    if (bVar2) {
      iVar11 = 2;
    }
    iVar12 = 0x4000;
    if (bVar2) {
      iVar12 = 0x4001;
    }
    iVar10 = 0x4006;
    if (bVar2) {
      iVar10 = iVar12;
    }
    param_1[0x5f] = iVar11;
    param_1[0x60] = iVar10;
    param_1[99] = 0x3b808081;
    param_1[100] = 0x3b808081;
    param_1[0x61] = 0x3b808081;
    param_1[0x62] = 0x3b808081;
    fVar17 = FUN_18003bff8(uVar14);
    *(undefined4 *)(extraout_x9 + 0x20) = extraout_w12;
    *(undefined4 *)(extraout_x9 + 0x24) = extraout_w11;
    puVar7 = (uint *)(param_1 + 0x67);
    fVar17 = fVar17 / 255.0;
    *(float *)(extraout_x9 + 0x30) = fVar17;
    *(float *)(extraout_x9 + 0x34) = fVar17;
    *(float *)(extraout_x9 + 0x28) = fVar17;
    *(float *)(extraout_x9 + 0x2c) = fVar17;
    iVar12 = 10;
    if (uVar4 == 0xff) {
      iVar12 = 4;
    }
    iVar12 = iVar12 + extraout_w10;
    uVar9 = 0x2032;
LAB_18003ef14:
    uVar9 = iVar12 * 0x1000000 + 0x1000000U & 0x7f000000 | uVar9;
    puVar6 = (uint *)(param_1 + 0x5f);
  }
  else {
    bVar8 = param_7 | ((param_3 & 0xf0) == 0x70 || uVar13 != 0);
    if (uVar9 != 0) {
      if (uVar9 != 0x100) goto LAB_18003f000;
      goto LAB_18003ee94;
    }
    if (((uVar14 >> 0xd & 1) != 0) && (bVar8 != 0)) {
      bVar2 = uVar4 == 0xff;
      iVar12 = 5;
      if (bVar2) {
        iVar12 = 2;
      }
      iVar10 = 0x4000;
      if (bVar2) {
        iVar10 = 0x4001;
      }
      iVar1 = 0x4006;
      if (bVar2) {
        iVar1 = iVar10;
      }
      puVar7 = (uint *)0x0;
      param_1[0x5f] = iVar12;
      param_1[0x60] = iVar1;
      iVar12 = iVar12 + iVar11;
      fVar17 = (float)(1 << (ulonglong)(uVar13 & 0x1f)) / 255.0;
      param_1[99] = (int)fVar17;
      param_1[100] = (int)fVar17;
      param_1[0x61] = (int)fVar17;
      param_1[0x62] = (int)fVar17;
      uVar9 = 0x2038;
      goto LAB_18003ef14;
    }
    puVar7 = (uint *)0x0;
    if (uVar13 != 1) {
      if (uVar13 == 2) {
        bVar2 = uVar4 == 0xff;
        iVar12 = 5;
        if (bVar2) {
          iVar12 = 2;
        }
        iVar10 = 0x4000;
        if (bVar2) {
          iVar10 = 0x4001;
        }
        iVar1 = 0x4006;
        if (bVar2) {
          iVar1 = iVar10;
        }
        puVar6 = (uint *)(param_1 + 0x5f);
        param_1[0x5f] = iVar12;
        param_1[0x60] = iVar1;
        param_1[99] = 0x40800000;
        param_1[100] = 0x40800000;
        param_1[0x61] = 0x40800000;
        param_1[0x62] = 0x40800000;
        uVar9 = (iVar12 + iVar11) * 0x1000000 + 0x1000000U & 0x7f000000 | 0x2038;
        goto LAB_18003ef28;
      }
      puVar6 = (uint *)0x0;
      uVar9 = iVar11 * 0x1000000 + 0x1000000U & 0x7f000000 | 0x36;
      goto LAB_18003eff0;
    }
    puVar6 = (uint *)(param_1 + 0x57);
    uVar9 = (param_1[0x4f] + param_1[0x57] * 2) * 0x1000000 + 0x1000000U & 0x7f000000 | 0x2000;
  }
LAB_18003ef28:
  FUN_180057c58(param_6,uVar9,(uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),puVar6,puVar7);
LAB_18003f000:
  if ((uVar15 != param_2 && uVar15 != param_3) && ((uVar3 & 0xf0) == 0x80)) {
    FUN_180056c30((longlong)param_1,param_1[(ulonglong)(uVar3 & 0xf) + 0x26]);
    *(undefined4 *)(extraout_x14 + 0x98) = 0;
  }
  return uVar16;
}

