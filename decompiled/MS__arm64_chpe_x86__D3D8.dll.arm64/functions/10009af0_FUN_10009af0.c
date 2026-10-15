/*
 * FUN_10009af0 at 10009af0
 * undefined FUN_10009af0(void)
 * Address ranges: 10009af0-1000a2c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10009af0(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int local_dc;
  int *local_d8;
  uint local_d4;
  uint local_d0;
  code *local_cc;
  int local_c8;
  int local_c4;
  code *local_c0;
  undefined4 *local_bc;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_a0;
  undefined4 local_9c;
  code *local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined4 *local_88;
  int local_84;
  int local_80;
  undefined8 local_70;
  ulonglong uStack_68;
  undefined8 local_60;
  ulonglong uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  
  local_d8 = (int *)(param_2 + 4);
  iVar7 = *local_d8;
  local_98 = (code *)(param_3 + 4);
  iVar3 = *(int *)local_98;
  local_bc = (undefined4 *)(param_2 + 0x28);
  uStack_68 = *(ulonglong *)(param_2 + 0x40);
  local_70 = *(undefined8 *)(param_2 + 0x38);
  iVar16 = (int)((ulonglong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
  uVar14 = *(ulonglong *)(param_3 + 0x30);
  uStack_48 = *(ulonglong *)(param_3 + 0x40);
  local_50 = *(undefined8 *)(param_3 + 0x38);
  iVar15 = (int)(uVar14 >> 0x20);
  local_dc = param_2;
  local_c8 = param_6;
  local_c4 = param_5;
  if ((iVar16 == 3) && (iVar15 == 3)) {
    uVar10 = *(uint *)(iVar7 + 0x18);
    if (uVar10 == 0) {
      uVar10 = (uint)*(byte *)(iVar7 + 0x1e);
    }
    FUN_10009950(param_1,*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_3 + 0x24),
                 *(undefined4 *)(iVar7 + 0x10),*(undefined4 *)(iVar3 + 0x10),
                 *(undefined1 *)(iVar7 + 0x1c),*(undefined1 *)(iVar7 + 0x1d),uVar10,param_4);
    return 1;
  }
  local_d0 = *(uint *)(iVar7 + 0x50);
  uVar10 = *(uint *)(iVar3 + 0x50);
  local_9c = *(undefined4 *)(iVar7 + 0x70);
  local_d4 = *(uint *)(iVar3 + 0x70);
  uVar11 = (ulonglong)local_d4;
  local_a4 = *(undefined4 *)(iVar7 + 0x6c);
  uVar8 = *(undefined4 *)(iVar3 + 0x6c);
  local_cc = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_c0 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar16 == 3) {
    if (iVar15 == 1) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      cVar5 = (*extraout_w11)(uVar10,uVar8,uVar11 & 0xffffffff);
      if ((cVar5 == '\0') && (iVar7 = FUN_10018880(param_3,&local_b8,0,0,0,0), -1 < iVar7)) {
        iVar7 = *local_d8;
        uVar10 = *(uint *)(iVar7 + 0x18);
        if (uVar10 == 0) {
          uVar10 = (uint)*(byte *)(iVar7 + 0x1e);
        }
        FUN_10009950(param_1,*(undefined4 *)(local_dc + 0x24),uStack_b4,
                     *(undefined4 *)(iVar7 + 0x10),local_b8,*(undefined1 *)(iVar7 + 0x1c),
                     *(undefined1 *)(iVar7 + 0x1d),uVar10,param_4);
        FUN_10019130(param_3,0);
        return 1;
      }
    }
  }
  else if (iVar15 == 1) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar5 = (*extraout_w11_00)(uVar10,uVar8,local_d4);
    if (cVar5 == '\0') {
      uVar9 = (*local_cc)();
      cVar5 = (*extraout_w11_01)(uVar9,uVar8,local_d4);
      if (((cVar5 == '\0') && (*(int *)(*local_d8 + 0x20) != 0)) &&
         (iVar7 = FUN_10018880(param_3,&local_b8,0,0,1,0), -1 < iVar7)) {
        bVar4 = true;
        local_60 = 0;
        uStack_58 = 0;
        iVar7 = FUN_10018880(local_dc,&local_90,&local_60,0x10,1,0);
        if (-1 < iVar7) {
          iVar7 = *local_d8;
          uVar12 = *(uint *)(iVar7 + 0x18);
          if (uVar12 == 0) {
            uVar12 = (uint)*(byte *)(iVar7 + 0x1e);
          }
          FUN_10009950(param_1,uStack_8c,uStack_b4,local_90,local_b8,*(undefined1 *)(iVar7 + 0x1c),
                       *(undefined1 *)(iVar7 + 0x1d),uVar12,param_4);
          bVar4 = false;
          FUN_10019130(local_dc,1);
        }
        FUN_10019130(param_3,0);
        if (!bVar4) {
          return 1;
        }
      }
    }
  }
  uVar9 = *(undefined4 *)(param_3 + 0x50);
  local_a0 = local_d4;
  local_b0 = uVar9;
  local_a8 = uVar8;
  if ((iVar16 == 3) && (iVar15 != 3)) {
    uVar8 = (*local_c0)();
    local_d0 = (*extraout_w11_02)(uVar8,uStack_68 & 0xffffffff,uStack_68 >> 0x20,uVar9,1,0,1);
    local_9c = 0;
    local_a4 = 0;
    local_ac = uVar9;
    uVar12 = local_d0;
  }
  else {
    uVar8 = *(undefined4 *)(local_dc + 0x50);
    local_ac = uVar8;
    uVar12 = 0;
    if ((iVar16 != 3) && (iVar15 == 3)) {
      uVar9 = (*local_c0)();
      uVar10 = (*extraout_w11_03)(uVar9,uStack_48 & 0xffffffff,uStack_48 >> 0x20,uVar8,1,0,1);
      local_a0 = 0;
      local_a8 = 0;
      local_b0 = uVar8;
      uVar12 = uVar10;
    }
  }
  if ((local_d0 == 0) || (uVar10 == 0)) {
    bVar6 = 0;
    goto LAB_1000a27c;
  }
  bVar6 = 1;
  if (((*(int *)(*(int *)(*local_d8 + 0x50) + 4) == 2) && ((uVar14 & 0xfffffffd00000000) == 0)) &&
     (local_cc = local_98, *(int *)(*(int *)(*(int *)local_98 + 0x50) + 4) != 2)) {
    FUN_100184a0(param_3);
    uVar10 = *(uint *)(*(int *)local_cc + 0x50);
  }
  if (iVar16 == 3) {
    local_d4 = 0;
    local_cc = (code *)0x0;
    (*local_c0)();
    iVar7 = (*extraout_w11_04)(uVar12,0,0,2,1,&local_d4,&local_cc);
    if (iVar7 == 0) {
      iVar7 = *local_d8;
      uVar13 = *(uint *)(iVar7 + 0x18);
      if (uVar13 == 0) {
        uVar13 = (uint)*(byte *)(iVar7 + 0x1e);
      }
      FUN_10009950(param_1,*(undefined4 *)(local_dc + 0x24),local_d4,*(undefined4 *)(iVar7 + 0x10),
                   local_cc,*(undefined1 *)(iVar7 + 0x1c),*(undefined1 *)(iVar7 + 0x1d),uVar13,
                   param_4);
    }
    else {
      bVar6 = 0;
    }
    FUN_100183a0(param_3,0);
    if (bVar6 != 0) goto LAB_1000a0ac;
  }
  else {
    FUN_100183a0(param_3,local_dc);
LAB_1000a0ac:
    iVar3 = local_c4;
    iVar7 = local_c8;
    uVar13 = 0;
    if (param_4 != 0) {
      local_88 = (undefined4 *)(param_1 + 0xb24);
      local_b8 = uVar12;
      local_90 = iVar15;
      local_84 = param_1;
      local_80 = param_3;
      do {
        puVar1 = (undefined8 *)(iVar3 + uVar13 * 0x10);
        uStack_68 = puVar1[1];
        local_60 = *puVar1;
        local_70 = local_60;
        if (iVar7 != 0) {
          piVar2 = (int *)(iVar7 + uVar13 * 8);
          local_70._0_4_ = (int)local_60;
          local_70._4_4_ = (int)((ulonglong)local_60 >> 0x20);
          iVar15 = piVar2[1] - local_70._4_4_;
          iVar16 = *piVar2 - (int)local_70;
          uStack_58 = uStack_68;
          (*(code *)PTR_FUN_10134234)(&local_70,iVar16,iVar15);
        }
        uVar8 = *local_bc;
        local_60 = local_70;
        uStack_58 = uStack_68;
        FUN_10003360(uVar8);
        FUN_100032d0(uVar8);
        bVar6 = FUN_100366d0(uVar10,local_d0,*local_88,local_9c,local_a0,local_a4,local_a8,1,
                             local_ac);
        uVar13 = uVar13 + 1;
      } while (uVar13 < param_4);
      param_3 = local_80;
      param_1 = local_84;
      iVar15 = local_90;
      uVar12 = local_b8;
      if ((bVar6 & 1) == 0) goto LAB_1000a26c;
    }
    if (iVar15 == 3) {
      local_dc = 0;
      local_d8 = (int *)0x0;
      (*local_c0)();
      iVar7 = (*extraout_w11_05)(uVar12,0,0,2,1,&local_dc,&local_d8);
      if (iVar7 == 0) {
        iVar7 = *(int *)local_98;
        uVar10 = *(uint *)(iVar7 + 0x18);
        if (uVar10 == 0) {
          uVar10 = (uint)*(byte *)(iVar7 + 0x1e);
        }
        FUN_10009950(param_1,local_dc,*(undefined4 *)(param_3 + 0x24),local_d8,
                     *(undefined4 *)(iVar7 + 0x10),*(undefined1 *)(iVar7 + 0x1c),
                     *(undefined1 *)(iVar7 + 0x1d),uVar10,param_4);
      }
      else {
        bVar6 = 0;
      }
    }
    if (*(int *)(param_3 + 0x1c) != 0) {
      *(undefined1 *)(*(int *)(param_3 + 0x1c) + 0x6d) = 0;
    }
  }
LAB_1000a26c:
  FUN_10018470(param_3);
LAB_1000a27c:
  if (uVar12 != 0) {
    (*local_c0)();
    (*extraout_w11_06)(uVar12);
  }
  return bVar6;
}

