/*
 * FUN_18009dc48 at 18009dc48
 * undefined FUN_18009dc48(void)
 * Address ranges: 18009dc48-18009e27f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18009dc48(undefined8 param_1,uint *param_2,uint param_3,uint param_4,int param_5,int param_6
                 ,uint param_7)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int local_58;
  
  uVar3 = (param_7 ^ 1) << 3 | 7;
  bVar2 = *(byte *)((longlong)param_2 + 0x6d);
  uVar10 = 4;
  if ((*param_2 & 0xf) == 4) {
    uVar10 = 5;
  }
  param_2[(ulonglong)bVar2 + 0x22] = uVar10;
  uVar10 = bVar2 | 0x410700;
  local_58 = 2;
  iVar7 = 0;
  iVar8 = 0;
  bVar2 = *(char *)((longlong)param_2 + 5) != '\0' | (*(char *)((longlong)param_2 + 6) != '\0') << 1
  ;
  if ((param_6 == 0) || ((*param_2 >> 0xb & 1) != 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((bVar2 != 0) ||
     (FUN_18009b588(param_2,param_3,param_4), iVar6 = param_6, !bVar5 || param_5 != 2)) {
    iVar6 = FUN_1800f42d0(param_2 + 4,4,1);
  }
  iVar1 = iVar6;
  if (iVar6 == param_6) {
    iVar1 = 0;
  }
  FUN_18009d878(param_1,param_2,0,iVar6,uVar3,param_3,uVar10);
  if (bVar2 == 0) {
    param_3 = 0;
  }
  if (bVar2 == 0) {
    param_4 = 0;
  }
  if ((*param_2 >> 0xb & 1) != 0) {
    iVar7 = FUN_1800f42d0(param_2 + 4,4,1);
    FUN_18009d9e0(param_1,param_2,iVar1,iVar7,1,0,iVar7);
  }
  uVar4 = (undefined1)uVar3;
  if (*(char *)((longlong)param_2 + 5) != '\0') {
    if ((bVar2 == 1 && param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
      FUN_1800f4370(param_2 + 4,param_3);
    }
    iVar8 = FUN_1800f42d0(param_2 + 4,4,1);
    FUN_18009d878(param_1,param_2,1,iVar8,uVar3,param_3,uVar10);
    if ((*param_2 >> 0xb & 1) != 0) {
      if (iVar7 == 0) {
        iVar7 = FUN_1800f42d0(param_2 + 4,4,1);
      }
      FUN_18009d9e0(param_1,param_2,iVar8,iVar7,2,0x55,0);
    }
    FUN_1800f5730(param_2 + 4,param_1,0x56,iVar1,uVar4,iVar1,0xe4,0);
    FUN_1800f5730(param_2 + 4,param_1,0x56,iVar8,uVar4,iVar8,0xe4,0);
    local_58 = 1;
    iVar6 = param_6;
    if ((bVar2 != 1 || !bVar5) || param_5 != 1) {
      iVar6 = iVar1;
    }
    FUN_18009b4c8(param_1,param_2,iVar6,uVar3,iVar8,iVar1,iVar8,param_4,0);
    if ((bVar2 == 1 && param_4 != 0) && ((param_4 & 0x3f00) == 0)) {
      FUN_1800f4370(param_2 + 4,param_4);
    }
  }
  if (*(char *)((longlong)param_2 + 6) != '\0') {
    if ((bVar2 == 2 && param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
      FUN_1800f4370(param_2 + 4,param_3);
    }
    if (iVar8 == 0) {
      iVar8 = FUN_1800f42d0(param_2 + 4,4,1);
    }
    FUN_18009d878(param_1,param_2,2,iVar8,uVar3,param_3,uVar10);
    if ((*param_2 >> 0xb & 1) != 0) {
      if (iVar7 == 0) {
        iVar7 = FUN_1800f42d0(param_2 + 4,4,1);
      }
      FUN_18009d9e0(param_1,param_2,iVar8,iVar7,4,0xaa,0);
    }
    if (*(char *)((longlong)param_2 + 5) == '\0') {
      FUN_1800f5730(param_2 + 4,param_1,0x56,iVar1,uVar4,iVar1,0xe4,0);
      FUN_1800f5730(param_2 + 4,param_1,0x56,iVar8,uVar4,iVar8,0xe4,0);
      local_58 = 1;
      iVar6 = param_6;
      if (!bVar5 || param_5 != 1) {
        iVar6 = iVar1;
      }
      FUN_18009b4c8(param_1,param_2,iVar1,0xf,iVar8,iVar1,iVar8,param_4,0);
      if ((param_4 != 0) && ((param_4 & 0x3f00) == 0)) {
        FUN_1800f4370(param_2 + 4,param_4);
      }
    }
  }
  if ((*(char *)((longlong)param_2 + 5) != '\0') && (*(char *)((longlong)param_2 + 6) != '\0')) {
    if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
      FUN_1800f4370(param_2 + 4,param_3);
    }
    uVar9 = FUN_1800f42d0(param_2 + 4,4,1);
    FUN_18009d878(param_1,param_2,3,uVar9,uVar3,param_3,uVar10);
    if ((*param_2 >> 0xb & 1) != 0) {
      FUN_18009d9e0(param_1,param_2,uVar9,iVar7,8,0xff,0);
    }
    FUN_1800f5730(param_2 + 4,param_1,0x56,iVar8,0xf,iVar8,0xe4,0);
    FUN_1800f5730(param_2 + 4,param_1,0x56,uVar9,0xf,uVar9,0xe4,0);
    local_58 = 1;
    FUN_18009b4c8(param_1,param_2,iVar8,0xf,uVar9,iVar8,uVar9,param_4,0);
    FUN_1800f4370(param_2 + 4,uVar9);
    iVar6 = param_6;
    if (!bVar5 || param_5 != 1) {
      iVar6 = iVar1;
    }
    FUN_18009b4c8(param_1,param_2,iVar1,0xf,iVar8,iVar1,iVar8,param_4,0x55);
    if ((param_4 != 0) && ((param_4 & 0x3f00) == 0)) {
      FUN_1800f4370(param_2 + 4,param_4);
    }
  }
  if ((*param_2 >> 0xb & 1) != 0) {
    FUN_18009b878(param_1,param_2,iVar7,0,param_4,iVar7);
  }
  if ((iVar6 != param_6) && (local_58 != param_5)) {
    iVar6 = param_6;
    if (param_6 == 0) {
      iVar6 = iVar1;
    }
    FUN_18009b2f0(param_1,param_2,iVar6,uVar3,iVar1,local_58,param_5);
  }
  if (iVar1 != iVar6) {
    FUN_1800f4370(param_2 + 4,iVar1);
  }
  FUN_1800f4370(param_2 + 4,iVar8);
  FUN_1800f4370(param_2 + 4,iVar7);
  return iVar6;
}

