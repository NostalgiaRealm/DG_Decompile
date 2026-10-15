/*
 * FUN_18009e378 at 18009e378
 * undefined FUN_18009e378(void)
 * Address ranges: 18009e378-18009eb73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18009e378(undefined8 param_1,uint *param_2,uint param_3,uint param_4,int param_5,int param_6
                 ,ulonglong param_7)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  byte bVar9;
  undefined4 uVar10;
  byte bVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  uint local_6c;
  
  if (((param_7 & 1) == 0) || ((*param_2 >> 10 & 1) != 0)) {
    iVar8 = 0xf;
    uVar13 = 0xf;
  }
  else {
    iVar8 = 7;
    uVar13 = 7;
  }
  uVar16 = *(byte *)((longlong)param_2 + 0x6d) | 0x410700;
  param_2[(ulonglong)*(byte *)((longlong)param_2 + 0x6d) + 0x22] = 5;
  if ((*param_2 >> 10 & 1) == 0) {
    local_6c = 0;
  }
  else {
    local_6c = *(byte *)((longlong)param_2 + 0x6e) | 0x410700;
    param_2[(ulonglong)*(byte *)((longlong)param_2 + 0x6e) + 0x22] = 5;
  }
  if ((*(char *)((longlong)param_2 + 6) == '\0') && ((char)param_2[2] == '\0')) {
    bVar11 = 0;
  }
  else {
    bVar11 = 2;
  }
  if ((*(char *)((longlong)param_2 + 5) == '\0') && (*(char *)((longlong)param_2 + 7) == '\0')) {
    bVar9 = 0;
  }
  else {
    bVar9 = 1;
  }
  bVar9 = bVar9 | bVar11;
  if ((param_6 == 0) || ((*param_2 >> 10 & 1) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar9 == 0) && ((*param_2 >> 10 & 1) == 0)) {
    cVar3 = FUN_18009b588(param_2,param_3,param_4);
LAB_18009e490:
    iVar4 = param_6;
    if (bVar2 && param_5 == 1) goto LAB_18009e4b8;
  }
  else {
    cVar3 = '\0';
    if (bVar9 == 0) goto LAB_18009e490;
  }
  iVar4 = FUN_1800f42d0(param_2 + 4,4,1);
LAB_18009e4b8:
  iVar1 = iVar4;
  if (iVar4 == param_6) {
    iVar1 = 0;
  }
  uVar10 = 0;
  FUN_1800f5730(param_2 + 4,param_1,0x2d,iVar4,uVar13,param_3,0xe4,uVar16,0xe4,0);
  if (cVar3 != '\0') {
    param_3 = 0;
  }
  if (cVar3 != '\0') {
    param_4 = 0;
  }
  if ((*param_2 >> 10 & 1) == 0) {
    uVar12 = 0;
  }
  else {
    if (bVar9 == 0) {
      FUN_18009b588(param_2,param_3,param_4);
      param_4 = 0;
      param_3 = 0;
    }
    auVar14 = FUN_1800f42d0(param_2 + 4,4,1);
    uVar12 = auVar14._0_8_ & 0xffffffff;
    uVar5 = FUN_1800f42d0(param_2 + 4,auVar14._8_8_,0);
    uVar10 = 0;
    FUN_1800f5730(param_2 + 4,param_1,0x2d,uVar5,0xf,param_3,0xe4,local_6c,0xe4,0);
    FUN_18009e288(param_1,param_2,iVar1,uVar5,uVar12,1);
  }
  if ((*(char *)((longlong)param_2 + 5) != '\0') ||
     (iVar6 = 0, *(char *)((longlong)param_2 + 7) != '\0')) {
    if ((bVar9 == 1) && ((*param_2 >> 10 & 1) == 0)) {
      if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
        FUN_1800f4370(param_2 + 4,param_3);
      }
      param_3 = 0;
    }
    iVar6 = FUN_1800f42d0(param_2 + 4,4,1);
    uVar17 = CONCAT44(uVar10,0xe4);
    uVar15 = uVar16;
    FUN_1800f5730(param_2 + 4,param_1,0x8000002d,0x201,iVar6,uVar13,param_3,0xe4,uVar16,uVar17,0);
    uVar10 = (undefined4)((ulonglong)uVar17 >> 0x20);
    if ((*param_2 >> 10 & 1) != 0) {
      if (bVar9 == 1) {
        FUN_18009b588(param_2,param_3,param_4);
        param_4 = 0;
        param_3 = 0;
      }
      uVar5 = FUN_1800f42d0(param_2 + 4,4,0);
      uVar17 = CONCAT44(uVar10,0xe4);
      uVar15 = local_6c;
      FUN_1800f5730(param_2 + 4,param_1,0x8000002d,0x201,uVar5,0xf,param_3,0xe4,local_6c,uVar17,0);
      uVar10 = (undefined4)((ulonglong)uVar17 >> 0x20);
      FUN_18009e288(param_1,param_2,iVar6,uVar5,uVar12,2);
    }
    if (*(char *)((longlong)param_2 + 5) != '\0') {
      iVar4 = param_6;
      if ((bVar9 != 1 || !bVar2) || param_5 != 1) {
        iVar4 = iVar1;
      }
      FUN_18009b4c8(param_1,param_2,iVar4,iVar8,iVar6,iVar1,iVar6,param_4,uVar15 & 0xffffff00);
    }
    if ((bVar9 == 1) && ((*param_2 >> 10 & 1) == 0)) {
      if ((param_4 != 0) && ((param_4 & 0x3f00) == 0)) {
        FUN_1800f4370(param_2 + 4,param_4);
      }
      param_4 = 0;
    }
  }
  if ((*(char *)((longlong)param_2 + 6) != '\0') || ((char)param_2[2] != '\0')) {
    if ((bVar9 == 2) && ((*param_2 >> 10 & 1) == 0)) {
      if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
        FUN_1800f4370(param_2 + 4,param_3);
      }
      param_3 = 0;
    }
    if (iVar6 == 0) {
      iVar6 = FUN_1800f42d0(param_2 + 4,4,1);
    }
    uVar17 = CONCAT44(uVar10,0xe4);
    uVar15 = uVar16;
    FUN_1800f5730(param_2 + 4,param_1,0x8000002d,0x2001,iVar6,uVar13,param_3,0xe4,uVar16,uVar17,0);
    uVar10 = (undefined4)((ulonglong)uVar17 >> 0x20);
    if ((*param_2 >> 10 & 1) != 0) {
      if (bVar9 == 2) {
        FUN_18009b588(param_2,param_3,param_4);
      }
      uVar5 = FUN_1800f42d0(param_2 + 4,4,0);
      uVar17 = CONCAT44(uVar10,0xe4);
      uVar15 = local_6c;
      FUN_1800f5730(param_2 + 4,param_1,0x8000002d,0x2001,uVar5,0xf,param_3,0xe4,local_6c,uVar17,0);
      uVar10 = (undefined4)((ulonglong)uVar17 >> 0x20);
      FUN_18009e288(param_1,param_2,iVar6,uVar5,uVar12,4);
    }
    if ((*(char *)((longlong)param_2 + 5) == '\0') && (*(char *)((longlong)param_2 + 6) != '\0')) {
      iVar4 = param_6;
      if (!bVar2 || param_5 != 1) {
        iVar4 = iVar1;
      }
      FUN_18009b4c8(param_1,param_2,iVar1,iVar8,iVar6,iVar1,iVar6,param_4,uVar15 & 0xffffff00);
    }
    if ((bVar9 == 2) && ((*param_2 >> 10 & 1) == 0)) {
      if ((param_4 != 0) && ((param_4 & 0x3f00) == 0)) {
        FUN_1800f4370(param_2 + 4,param_4);
      }
      param_4 = 0;
    }
  }
  if (((*(char *)((longlong)param_2 + 5) != '\0') && (*(char *)((longlong)param_2 + 6) != '\0')) ||
     ((*(char *)((longlong)param_2 + 7) != '\0' && ((char)param_2[2] != '\0')))) {
    if ((*param_2 >> 10 & 1) == 0) {
      if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
        FUN_1800f4370(param_2 + 4,param_3);
      }
      param_3 = 0;
    }
    uVar5 = FUN_1800f42d0(param_2 + 4,4,1);
    uVar17 = CONCAT44(uVar10,0xe4);
    FUN_1800f5730(param_2 + 4,param_1,0x8000002d,0x2201,uVar5,uVar13,param_3,0xe4,uVar16,uVar17,0);
    uVar10 = (undefined4)((ulonglong)uVar17 >> 0x20);
    if ((*param_2 >> 10 & 1) != 0) {
      if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
        FUN_1800f4370(param_2 + 4,param_3);
      }
      uVar7 = FUN_1800f42d0(param_2 + 4,4,0);
      FUN_1800f5730(param_2 + 4,param_1,0x8000002d,0x2201,uVar7,0xf,param_3,0xe4,local_6c,
                    CONCAT44(uVar10,0xe4),0);
      FUN_18009e288(param_1,param_2,iVar6,uVar7,uVar12,8);
      uVar16 = local_6c;
    }
    FUN_1800f4370(param_2 + 4,uVar5);
    if ((*(char *)((longlong)param_2 + 5) != '\0') && (*(char *)((longlong)param_2 + 6) != '\0')) {
      FUN_18009b4c8(param_1,param_2,iVar6,0xf,uVar5,iVar6,uVar5,param_4,uVar16 & 0xffffff00);
      iVar4 = param_6;
      if (!bVar2 || param_5 != 1) {
        iVar4 = iVar1;
      }
      FUN_18009b4c8(param_1,param_2,iVar1,0xf,iVar6,iVar1,iVar6,param_4,0x55);
    }
    if ((*param_2 >> 10 & 1) == 0) {
      if ((param_4 != 0) && ((param_4 & 0x3f00) == 0)) {
        FUN_1800f4370(param_2 + 4,param_4);
      }
      param_4 = 0;
    }
  }
  if ((((*param_2 >> 10 & 1) != 0) && (FUN_18009b5d0(param_1,param_2,param_4,uVar12), param_4 != 0))
     && ((param_4 & 0x3f00) == 0)) {
    FUN_1800f4370(param_2 + 4,param_4);
  }
  if (iVar4 != param_6) {
    if (param_5 == 1) {
      if (param_6 != 0) {
        uVar10 = 0xe4;
        if (iVar8 != 0xf) {
          uVar10 = 0xa4;
        }
        FUN_1800f5730(param_2 + 4,param_1,0x36,param_6,uVar13,iVar4,uVar10,0);
      }
    }
    else {
      iVar4 = param_6;
      if (param_6 == 0) {
        iVar4 = iVar1;
      }
      FUN_18009b2f0(param_1,param_2,iVar4,iVar8,iVar1,1,param_5);
    }
  }
  if (iVar1 != iVar4) {
    FUN_1800f4370(param_2 + 4,iVar1);
  }
  FUN_1800f4370(param_2 + 4,iVar6);
  FUN_1800f4370(param_2 + 4,uVar12);
  return iVar4;
}

