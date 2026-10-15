/*
 * FUN_18009bd88 at 18009bd88
 * undefined FUN_18009bd88(void)
 * Address ranges: 18009bd88-18009c32b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18009bd88(undefined8 param_1,uint *param_2,uint param_3,undefined4 param_4,uint param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar9 = *param_2;
  if ((((*(char *)((longlong)param_2 + 5) == '\0') && (*(char *)((longlong)param_2 + 6) == '\0')) &&
      (*(char *)((longlong)param_2 + 7) == '\0')) && ((char)param_2[2] == '\0')) {
    uVar7 = param_5;
    if (param_5 == 0 || (uVar9 & 0xc00) != 0) {
      uVar7 = param_3;
    }
  }
  else {
    uVar7 = FUN_1800f42d0(param_2 + 4,4,1);
  }
  uVar14 = 0;
  uVar15 = 0;
  uVar11 = (uint)*(byte *)((longlong)param_2 + 0x6d);
  param_2[(ulonglong)*(byte *)((longlong)param_2 + 0x6d) + 0x22] = 4;
  uVar8 = 0;
  FUN_1800f5730(param_2 + 4,param_1,0x2d,uVar7,1,param_3,0xe4,uVar11 | 0x410700,0,0);
  if ((*(char *)((longlong)param_2 + 5) != '\0') || (*(char *)((longlong)param_2 + 7) != '\0')) {
    uVar15 = 0;
    uVar14 = CONCAT44((int)(uVar14 >> 0x20),uVar11) | 0x410700;
    FUN_1800f5730(param_2 + 4,param_1,0x8000002d,0x201,uVar7,2,param_3,0xe4,uVar14,0,0);
  }
  if ((*(char *)((longlong)param_2 + 6) != '\0') || ((char)param_2[2] != '\0')) {
    uVar15 = 0;
    uVar14 = CONCAT44((int)(uVar14 >> 0x20),uVar11) | 0x410700;
    FUN_1800f5730(param_2 + 4,param_1,0x8000002d,0x2001,uVar7,4,param_3,0xe4,uVar14,0,0);
  }
  if (((*(char *)((longlong)param_2 + 5) != '\0') || (*(char *)((longlong)param_2 + 7) != '\0')) &&
     ((*(char *)((longlong)param_2 + 6) != '\0' || ((char)param_2[2] != '\0')))) {
    uVar15 = 0;
    uVar14 = CONCAT44((int)(uVar14 >> 0x20),uVar11) | 0x410700;
    FUN_1800f5730(param_2 + 4,param_1,0x8000002d,0x2201,uVar7,8,param_3,0xe4,uVar14,0,0);
  }
  if ((*param_2 >> 10 & 1) != 0) {
    bVar1 = *(char *)((longlong)param_2 + 7) != '\0' | ((char)param_2[2] != '\0') << 1;
    if (bVar1 == 0) {
      uVar8 = (uVar7 & 0xc0000) + 0x40000 | uVar7 & 0xff83ffff | 0x100000;
    }
    else if (bVar1 == 1) {
      uVar8 = (uVar7 & 0xc0000) + 0x80000 | uVar7 & 0xff83ffff | 0x200000;
    }
    else if (bVar1 == 2) {
      uVar8 = (uVar7 & 0xc0000) + 0x40000 | uVar7 & 0xff83ffff | 0x300000;
    }
    else if (bVar1 == 3) {
      uVar8 = FUN_1800f42d0(param_2 + 4,4,1);
    }
    else {
      uVar8 = 0;
    }
    uVar14 = 0;
    uVar15 = 0;
    uVar11 = (uint)*(byte *)((longlong)param_2 + 0x6e);
    param_2[(ulonglong)*(byte *)((longlong)param_2 + 0x6e) + 0x22] = 4;
    FUN_1800f5730(param_2 + 4,param_1,0x2d,uVar8,1,param_3,0xe4,uVar11 | 0x410700,0,0);
    if ((*(char *)((longlong)param_2 + 5) != '\0') || (*(char *)((longlong)param_2 + 7) != '\0')) {
      uVar15 = 0;
      uVar14 = CONCAT44((int)(uVar14 >> 0x20),uVar11) | 0x410700;
      FUN_1800f5730(param_2 + 4,param_1,0x8000002d,0x201,uVar8,2,param_3,0xe4,uVar14,0,0);
    }
    if ((*(char *)((longlong)param_2 + 6) != '\0') || ((char)param_2[2] != '\0')) {
      uVar15 = 0;
      uVar14 = CONCAT44((int)(uVar14 >> 0x20),uVar11) | 0x410700;
      FUN_1800f5730(param_2 + 4,param_1,0x8000002d,0x2001,uVar8,4,param_3,0xe4,uVar14,0,0);
    }
    if (((*(char *)((longlong)param_2 + 5) != '\0') || (*(char *)((longlong)param_2 + 7) != '\0'))
       && ((*(char *)((longlong)param_2 + 6) != '\0' || ((char)param_2[2] != '\0')))) {
      uVar15 = 0;
      uVar14 = CONCAT44((int)(uVar14 >> 0x20),uVar11) | 0x410700;
      FUN_1800f5730(param_2 + 4,param_1,0x8000002d,0x2201,uVar8,8,param_3,0xe4,uVar14,0,0);
    }
  }
  if (param_3 != uVar7) {
    FUN_1800f4370(param_2 + 4,param_3);
  }
  if ((uVar9 & 0xc00) != 0) {
    bVar6 = (*param_2 & 0x400) != 0;
    lVar2 = 5;
    if (bVar6) {
      lVar2 = 7;
    }
    lVar3 = 6;
    if (bVar6) {
      lVar3 = 8;
    }
    uVar9 = (uint)(*(char *)((longlong)param_2 + lVar2) != '\0') |
            (uint)(*(char *)((longlong)param_2 + lVar3) != '\0') << 1;
    uVar10 = (ulonglong)uVar9;
    if (uVar9 == 0) {
      uVar9 = (uVar7 & 0xc0000) + 0x40000 | uVar7 & 0xff83ffff | 0x100000;
    }
    else if (uVar9 == 1) {
      uVar9 = (uVar7 & 0xc0000) + 0x80000 | uVar7 & 0xff83ffff | 0x200000;
    }
    else if (uVar9 == 2) {
      uVar9 = (uVar7 & 0xc0000) + 0x40000 | uVar7 & 0xff83ffff | 0x300000;
    }
    else if (uVar9 == 3) {
      uVar9 = FUN_1800f42d0(param_2 + 4,4,1);
    }
    else {
      uVar9 = 0;
    }
    uVar4 = (&DAT_18022d730)[uVar10 & 0xffffffff];
    uVar12 = 0x27;
    if ((*param_2 & 0x1000) == 0) {
      uVar12 = 0x20;
    }
    if ((*param_2 & 0xf) - 3 < 2) {
      uVar13 = 0x84;
      uVar11 = 0x7c;
    }
    else {
      uVar13 = 0x80;
      uVar11 = 0x78;
    }
    uVar5 = (byte)(&DAT_18022d734)[uVar10 & 0xffffffff] | 0x100;
    if (uVar8 == 0) {
      FUN_1800f5730(param_2 + 4,param_1,1,uVar9,uVar4,uVar7,uVar5,param_2[0x17],0,uVar13,0);
      uVar15 = (ulonglong)uVar11;
      uVar14 = 0;
      FUN_1800f5730(param_2 + 4,param_1,uVar12,uVar9,uVar4,uVar9,uVar5,param_2[0x17],0,uVar15,0);
    }
    else {
      uVar15 = 0;
      uVar14 = CONCAT44((int)(uVar14 >> 0x20),(uint)(byte)(&DAT_18022d734)[uVar10 & 0xffffffff]) |
               0x100;
      FUN_1800f5730(param_2 + 4,param_1,uVar12,uVar9,uVar4,uVar7,uVar5,uVar8,uVar14,0);
    }
    FUN_18009b5d0(param_1,param_2,param_4,uVar9);
    if ((uVar9 != 0) &&
       (((uVar9 & 0xff) != (uVar7 & 0xff) || ((uVar9 >> 8 & 0x3f) != (uVar7 >> 8 & 0x3f))))) {
      FUN_1800f4370(param_2 + 4,uVar9);
    }
    if (((uVar8 & 0xff) != (uVar7 & 0xff)) || ((uVar8 >> 8 & 0x3f) != (uVar7 >> 8 & 0x3f))) {
      FUN_1800f4370(param_2 + 4,uVar8);
    }
  }
  if ((param_5 != 0) && (uVar7 != param_5)) {
    FUN_1800f5730(param_2 + 4,param_1,0x36,param_5,1,uVar7,0,0,uVar14,uVar15);
    FUN_1800f4370(param_2 + 4,uVar7);
    uVar7 = param_5;
  }
  return uVar7;
}

