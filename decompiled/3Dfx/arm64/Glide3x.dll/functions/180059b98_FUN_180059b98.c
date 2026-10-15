/*
 * FUN_180059b98 at 180059b98
 * int __cdecl FUN_180059b98(int * param_1, uint * param_2, uint param_3, uint param_4, uint param_5, byte param_6)
 * Address ranges: 180059b98-180059dd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180059b98(int *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,byte param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong extraout_x11;
  ulonglong extraout_x11_00;
  int extraout_w13;
  int extraout_w13_00;
  int extraout_w13_01;
  int extraout_w13_02;
  int extraout_w13_03;
  int extraout_w13_04;
  int iVar10;
  uint extraout_w14;
  uint extraout_w14_00;
  uint extraout_w14_01;
  uint extraout_w14_02;
  uint extraout_w14_03;
  uint extraout_w14_04;
  uint extraout_w14_05;
  uint extraout_w14_06;
  int extraout_w15;
  int extraout_w15_00;
  int extraout_w15_01;
  int extraout_w15_02;
  int extraout_w15_03;
  int extraout_w15_04;
  int iVar11;
  
  uVar8 = param_3 & 0xff;
  uVar5 = param_3 >> 0x10 & 3;
  if (((param_3 >> 8 & 0x3f) - 6 < 2) &&
     ((*param_1 != 0x30051 && (*param_1 - 0x51U & 0xfffcffff) == 0) &&
      (param_3 & 0x30000) == 0x10000)) {
    uVar5 = uVar5 + 1;
  }
  uVar4 = ~(param_3 >> 0x1b) & 4;
  uVar7 = (ulonglong)uVar4;
  uVar1 = param_3 & 0x10000000;
  bVar6 = (byte)param_4;
  if ((param_3 & 0x88000000) == 0) {
    if ((param_3 & 0x40000000) == 0) {
      if (uVar1 == 0) {
        uVar4 = FUN_180059dd8(param_3,param_4,uVar5,uVar4,0,0);
        uVar5 = extraout_w14_06;
        iVar11 = extraout_w15_04;
        iVar10 = extraout_w13_04;
      }
      else {
        uVar4 = FUN_180059ea0(param_3,bVar6,uVar5,uVar7,0,0);
        uVar5 = extraout_w14_05;
        iVar11 = extraout_w15_03;
        iVar10 = extraout_w13_03;
      }
      *param_2 = uVar4;
      param_2[1] = uVar5;
      iVar9 = 1;
      param_2[2] = uVar8;
    }
    else {
      uVar2 = 3;
      uVar3 = 0;
      if (uVar5 < 2) {
        uVar2 = 0;
        uVar3 = 3;
      }
      if (uVar1 == 0) {
        uVar4 = FUN_180059dd8(param_3,param_4,uVar5,uVar4,uVar3,uVar2);
        uVar5 = extraout_w14_04;
      }
      else {
        uVar4 = FUN_180059ea0(param_3,bVar6,uVar5,uVar7,uVar3,uVar2);
        uVar5 = extraout_w14_03;
      }
      *param_2 = uVar4;
      param_2[1] = uVar5;
      param_2[2] = uVar8;
      uVar5 = FUN_180059ea0(param_5,param_6,1,uVar7,0,0);
      param_2[extraout_x11_00 & 0xffffffff] = uVar5;
      param_2[extraout_w15_02 + 2] = param_5 & 0xff;
      iVar9 = 3;
      iVar11 = extraout_w15_02;
      iVar10 = extraout_w13_02;
    }
  }
  else if ((param_3 & 0x40000000) == 0) {
    if (uVar1 == 0) {
      uVar4 = FUN_180059dd8(param_3,param_4,uVar5,uVar4,0,0);
      uVar5 = extraout_w14_02;
      iVar11 = extraout_w15_01;
      iVar10 = extraout_w13_01;
    }
    else {
      uVar4 = FUN_180059ea0(param_3,bVar6,uVar5,uVar7,0,0);
      uVar5 = extraout_w14_01;
      iVar11 = extraout_w15_00;
      iVar10 = extraout_w13_00;
    }
    param_2[2] = uVar5;
    param_2[3] = uVar8;
    uVar5 = *(uint *)(&DAT_18006a188 +
                     (((ulonglong)param_3 & 0x8000000 | (ulonglong)(param_3 >> 5)) >> 0x1a) * 4);
    *param_2 = uVar4 | 0x80000000;
    param_2[1] = uVar5;
    iVar9 = 2;
  }
  else {
    uVar2 = 3;
    uVar3 = 0;
    if (uVar5 < 2) {
      uVar2 = 0;
      uVar3 = 3;
    }
    if (uVar1 == 0) {
      uVar4 = FUN_180059dd8(param_3,param_4,uVar5,uVar4,uVar3,uVar2);
      uVar5 = extraout_w14_00;
    }
    else {
      uVar4 = FUN_180059ea0(param_3,bVar6,uVar5,uVar7,uVar3,uVar2);
      uVar5 = extraout_w14;
    }
    param_2[2] = uVar5;
    param_2[3] = uVar8;
    uVar5 = *(uint *)(&DAT_18006a188 +
                     (((ulonglong)param_3 & 0x8000000 | (ulonglong)(param_3 >> 5)) >> 0x1a) * 4);
    *param_2 = uVar4 | 0x80000000;
    param_2[1] = uVar5;
    uVar5 = FUN_180059ea0(param_5,param_6,1,uVar7,0,0);
    param_2[extraout_x11 & 0xffffffff] = uVar5;
    param_2[extraout_w15 + 3] = param_5 & 0xff;
    iVar9 = 4;
    iVar11 = extraout_w15;
    iVar10 = extraout_w13;
  }
  if ((param_3 & 0x3f00) == 0x600) {
    param_1[4] = param_1[4] | iVar10 << (ulonglong)(uVar8 & 0x1f);
  }
  else if ((param_3 & 0x3f00) == 0x700) {
    param_1[3] = iVar10 << (ulonglong)(uVar8 & 0x1f) | param_1[3];
  }
  return iVar9 + iVar11;
}

