/*
 * FUN_1801b4f28 at 1801b4f28
 * undefined FUN_1801b4f28(void)
 * Address ranges: 1801b4f28-1801b52eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801b4f28(undefined8 param_1,uint *param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,int param_6,int param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  
  if ((param_7 == 0) || ((*param_2 >> 0x11 & 1) == 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  iVar12 = param_7;
  if (!bVar10) {
    iVar12 = 0;
  }
  iVar5 = FUN_1801b35a0(param_1,param_2,param_3,param_4,iVar12);
  iVar12 = iVar5;
  if (iVar5 == param_7) goto LAB_1801b52c0;
  uVar4 = (param_8 ^ 1) << 3 | 7;
  uVar8 = (param_8 ^ 1) + 3;
  uVar9 = (ulonglong)uVar8;
  uVar1 = (uint)(*(char *)((longlong)param_2 + 5) != '\0') |
          (uint)(*(char *)((longlong)param_2 + 6) != '\0') << 1;
  uVar11 = (undefined1)uVar8;
  iVar2 = param_7;
  if (uVar1 - 1 < 2) {
    uVar8 = uVar1;
    uVar7 = FUN_180213760(param_2 + 4,uVar11,1);
    uVar6 = 0x55;
    if (uVar8 != 1) {
      uVar6 = 0xaa;
    }
    FUN_1801b4be8(param_1,param_2,iVar5,uVar6,1,uVar7,param_8);
    FUN_1801b4be8(param_1,param_2,iVar5,0,1,iVar5,param_8);
    if (param_7 == 0 || param_6 != 1) {
      iVar2 = iVar5;
    }
    uVar11 = 0;
    if (uVar1 != 1) {
      uVar11 = 0x55;
    }
    FUN_1801b2b68(param_1,param_2,iVar2,uVar4,uVar7,iVar5,uVar7,param_4,uVar11);
    FUN_180213800(param_2 + 4,uVar7);
    if (param_7 == 0 || param_6 != 1) {
      iVar3 = param_7;
      if (param_7 == 0) {
        iVar3 = iVar5;
      }
      FUN_1801b2908(param_1,param_2,iVar3,uVar4,iVar5,1,param_6);
    }
LAB_1801b5290:
    if (iVar2 != param_7) goto LAB_1801b52c0;
    FUN_180213800(param_2 + 4,iVar5);
  }
  else {
    if (uVar1 != 0) {
      if (uVar1 != 3) goto LAB_1801b52c0;
      uVar6 = FUN_180213760(param_2 + 4,uVar11,1);
      uVar7 = FUN_180213760(param_2 + 4,uVar9 & 0xff,1);
      FUN_1801b4be8(param_1,param_2,iVar5,0x55,1,uVar6,param_8);
      FUN_1801b4be8(param_1,param_2,iVar5,0,1,uVar7,param_8);
      FUN_1801b2b68(param_1,param_2,uVar6,uVar4,uVar6,uVar7,uVar6,param_4,0);
      FUN_1801b4be8(param_1,param_2,iVar5,0xff,1,uVar7,param_8);
      FUN_1801b4be8(param_1,param_2,iVar5,0xaa,1,iVar5,param_8);
      FUN_1801b2b68(param_1,param_2,iVar5,uVar4,uVar7,iVar5,uVar7,param_4,0);
      FUN_180213800(param_2 + 4,uVar7);
      if (param_7 == 0 || param_6 != 1) {
        iVar2 = iVar5;
      }
      FUN_1801b2b68(param_1,param_2,iVar5,uVar4,iVar5,uVar6,iVar5,param_4,0x55);
      FUN_180213800(param_2 + 4,uVar6);
      if (param_7 == 0 || param_6 != 1) {
        iVar3 = param_7;
        if (param_7 == 0) {
          iVar3 = iVar5;
        }
        FUN_1801b2908(param_1,param_2,iVar3,uVar4,iVar5,1,param_6);
      }
      goto LAB_1801b5290;
    }
    if (param_7 == 0) {
      param_7 = iVar5;
    }
    FUN_1801b4be8(param_1,param_2,iVar5,0,param_6,param_7,param_8);
  }
  iVar12 = param_7;
  if (param_7 != iVar5) {
    FUN_180213800(param_2 + 4,iVar5);
  }
LAB_1801b52c0:
  FUN_180213800(param_2 + 4,param_4);
  return iVar12;
}

