/*
 * FUN_1801b5770 at 1801b5770
 * undefined FUN_1801b5770(void)
 * Address ranges: 1801b5770-1801b5e2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801b5770(undefined8 param_1,uint *param_2,uint param_3,uint param_4,int param_5,int param_6
                 ,uint param_7)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_a0 [2];
  int local_98;
  undefined4 local_90;
  undefined8 local_88;
  int local_68;
  
  uVar9 = (param_7 ^ 1) << 3;
  uVar3 = uVar9 | 7;
  bVar2 = *(byte *)((longlong)param_2 + 0x6d);
  uVar10 = 4;
  if ((*param_2 & 0xf) == 4) {
    uVar10 = 5;
  }
  param_2[(ulonglong)bVar2 + 0x22] = uVar10;
  uVar10 = bVar2 | 0x410700;
  iVar5 = 0;
  iVar6 = 0;
  bVar2 = *(char *)((longlong)param_2 + 5) != '\0' | (*(char *)((longlong)param_2 + 6) != '\0') << 1
  ;
  local_68 = 2;
  if ((param_6 == 0) || ((*param_2 >> 0xb & 1) != 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((bVar2 != 0) ||
     (FUN_1801b2c40(param_2,param_3,param_4), iVar7 = param_6, !bVar4 || param_5 != 2)) {
    iVar7 = FUN_180213760(param_2 + 4,4,1);
  }
  iVar1 = iVar7;
  if (iVar7 == param_6) {
    iVar1 = 0;
  }
  FUN_1801b52f0(param_1,param_2,0,iVar7,uVar3,param_3,uVar10);
  if (bVar2 == 0) {
    param_3 = 0;
    param_4 = 0;
  }
  if ((*param_2 >> 0xb & 1) != 0) {
    iVar5 = FUN_180213760(param_2 + 4,4,1);
    FUN_1801b5488(param_1,param_2,iVar1,iVar5,1,0,iVar5);
  }
  if (*(char *)((longlong)param_2 + 5) != '\0') {
    if ((bVar2 == 1 && param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
      FUN_180213800(param_2 + 4,param_3);
    }
    iVar6 = FUN_180213760(param_2 + 4,4,1);
    FUN_1801b52f0(param_1,param_2,1,iVar6,uVar3,param_3,uVar10);
    if ((*param_2 >> 0xb & 1) != 0) {
      if (iVar5 == 0) {
        iVar5 = FUN_180213760(param_2 + 4,4,1);
      }
      FUN_1801b5488(param_1,param_2,iVar6,iVar5,2,0x55,0);
    }
    local_88 = 0;
    uVar8 = uVar9 & 0xff | 7;
    local_90 = 0xe4;
    local_a0[0] = uVar8;
    local_98 = iVar1;
    FUN_180214c88(param_2 + 4,param_1,0x56,iVar1,local_a0,0x20);
    local_88 = 0;
    local_90 = 0xe4;
    local_a0[0] = uVar8;
    local_98 = iVar6;
    FUN_180214c88(param_2 + 4,param_1,0x56,iVar6,local_a0,0x20);
    local_68 = 1;
    local_a0[0] = local_a0[0] & 0xffffff00;
    iVar7 = param_6;
    if ((bVar2 != 1 || !bVar4) || param_5 != 1) {
      iVar7 = iVar1;
    }
    FUN_1801b2b68(param_1,param_2,iVar7,uVar3,iVar6,iVar1,iVar6,param_4);
    if ((bVar2 == 1 && param_4 != 0) && ((param_4 & 0x3f00) == 0)) {
      FUN_180213800(param_2 + 4,param_4);
    }
  }
  if (*(char *)((longlong)param_2 + 6) != '\0') {
    if ((bVar2 == 2 && param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
      FUN_180213800(param_2 + 4,param_3);
    }
    if (iVar6 == 0) {
      iVar6 = FUN_180213760(param_2 + 4,4,1);
    }
    FUN_1801b52f0(param_1,param_2,2,iVar6,uVar3,param_3,uVar10);
    if ((*param_2 >> 0xb & 1) != 0) {
      if (iVar5 == 0) {
        iVar5 = FUN_180213760(param_2 + 4,4,1);
      }
      FUN_1801b5488(param_1,param_2,iVar6,iVar5,4,0xaa,0);
    }
    if (*(char *)((longlong)param_2 + 5) == '\0') {
      uVar9 = uVar9 & 0xff | 7;
      local_88 = 0;
      local_90 = 0xe4;
      local_a0[0] = uVar9;
      local_98 = iVar1;
      FUN_180214c88(param_2 + 4,param_1,0x56,iVar1,local_a0,0x20);
      local_88 = 0;
      local_90 = 0xe4;
      local_a0[0] = uVar9;
      local_98 = iVar6;
      FUN_180214c88(param_2 + 4,param_1,0x56,iVar6,local_a0,0x20);
      local_68 = 1;
      local_a0[0] = local_a0[0] & 0xffffff00;
      iVar7 = param_6;
      if (!bVar4 || param_5 != 1) {
        iVar7 = iVar1;
      }
      FUN_1801b2b68(param_1,param_2,iVar1,0xf,iVar6,iVar1,iVar6,param_4);
      if ((param_4 != 0) && ((param_4 & 0x3f00) == 0)) {
        FUN_180213800(param_2 + 4,param_4);
      }
    }
  }
  if ((*(char *)((longlong)param_2 + 5) != '\0') && (*(char *)((longlong)param_2 + 6) != '\0')) {
    if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
      FUN_180213800(param_2 + 4,param_3);
    }
    iVar7 = FUN_180213760(param_2 + 4,4,1);
    FUN_1801b52f0(param_1,param_2,3,iVar7,uVar3,param_3,uVar10);
    if ((*param_2 >> 0xb & 1) != 0) {
      FUN_1801b5488(param_1,param_2,iVar7,iVar5,8,0xff,0);
    }
    local_88 = 0;
    local_90 = 0xe4;
    local_a0[0] = 0xf;
    local_98 = iVar6;
    FUN_180214c88(param_2 + 4,param_1,0x56,iVar6,local_a0,0x20);
    local_90 = 0xe4;
    local_88 = 0;
    local_a0[0] = 0xf;
    local_98 = iVar7;
    FUN_180214c88(param_2 + 4,param_1,0x56,iVar7,local_a0,0x20);
    local_68 = 1;
    local_a0[0] = local_a0[0] & 0xffffff00;
    FUN_1801b2b68(param_1,param_2,iVar6,0xf,iVar7,iVar6,iVar7,param_4);
    FUN_180213800(param_2 + 4,iVar7);
    iVar7 = param_6;
    if (!bVar4 || param_5 != 1) {
      iVar7 = iVar1;
    }
    local_a0[0] = CONCAT31(local_a0[0]._1_3_,0x55);
    FUN_1801b2b68(param_1,param_2,iVar1,0xf,iVar6,iVar1,iVar6,param_4);
    if ((param_4 != 0) && ((param_4 & 0x3f00) == 0)) {
      FUN_180213800(param_2 + 4,param_4);
    }
  }
  if ((*param_2 >> 0xb & 1) != 0) {
    FUN_1801b2fb0(param_1,param_2,iVar5,0,param_4,iVar5);
  }
  if ((iVar7 != param_6) && (local_68 != param_5)) {
    iVar7 = param_6;
    if (param_6 == 0) {
      iVar7 = iVar1;
    }
    FUN_1801b2908(param_1,param_2,iVar7,uVar3,iVar1,local_68,param_5);
  }
  if (iVar1 != iVar7) {
    FUN_180213800(param_2 + 4,iVar1);
  }
  FUN_180213800(param_2 + 4,iVar6);
  FUN_180213800(param_2 + 4,iVar5);
  return iVar7;
}

