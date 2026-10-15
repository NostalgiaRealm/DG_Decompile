/*
 * FUN_100d5950 at 100d5950
 * undefined FUN_100d5950(void)
 * Address ranges: 100d5950-100d5ecf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100d5950(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong extraout_x1;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  ulonglong extraout_x12;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  byte local_f0;
  int local_ec;
  int iStack_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  uint local_d4;
  uint local_d0;
  code *local_cc;
  uint local_c8;
  uint uStack_c4;
  int local_c0;
  uint local_bc;
  uint local_b8;
  int iStack_b4;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint local_a4;
  int local_a0;
  int *local_9c;
  int local_98;
  uint local_94;
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  int local_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  iVar16 = -0x7789f794;
  if ((param_2 != 0) && (param_3 != 0)) {
    if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
      bVar3 = false;
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
    }
    else {
      bVar3 = true;
      iVar9 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
      if (iVar9 == 0) {
        FUN_100071d0(0);
      }
    }
    pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    local_cc = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar9 = (*extraout_w11)(param_2);
    (*pcVar4)();
    iVar10 = (*extraout_w11_00)(param_3);
    if (iVar9 == iVar10) {
      switch(iVar10) {
      case 3:
      case 5:
        if ((((*(uint *)(*(int *)(param_2 + 0x10) + 0x30) >> 10 & 1) == 0) ||
            ((*(uint *)(*(int *)(param_3 + 0x10) + 0x30) >> 10 & 1) != 0)) &&
           (cVar7 = FUN_10020cb8(param_3 + -0x78,param_2 + -0x78), cVar7 != '\0')) {
          iVar16 = 0;
        }
        break;
      case 4:
        if (((*(int *)(param_3 + -0x20) == *(int *)(param_2 + -0x20)) &&
            (*(int *)(param_3 + -0x18) == 0)) && (*(int *)(param_2 + -0x18) == 2)) {
          local_e4 = 0;
          local_e0 = 0;
          uVar1 = *(ushort *)(param_2 + -0x98);
          local_dc = 0;
          local_d8 = 0;
          local_ec = 0;
          iStack_e8 = 0;
          local_d4 = (uint)*(ushort *)(param_3 + -0x98);
          uVar14 = (uint)uVar1;
          uVar17 = uVar14 - local_d4;
          local_d0 = (uint)uVar1;
          if (uVar14 < local_d4) {
            uVar17 = 0;
          }
          iVar9 = *(ushort *)(param_3 + -0x98) - local_d0;
          iVar10 = param_3 + -200;
          if (uVar14 >= local_d4) {
            iVar9 = 0;
          }
          local_9c = (int *)(param_3 + -0x20);
          FUN_10022b40(param_2 + -200,uVar17,&local_d8,&local_dc,&local_ec);
          FUN_10022b40(iVar10,iVar9,&local_e0,&local_e4,&iStack_e8);
          if (((local_d8 != local_e0 || local_dc != local_e4) || local_ec != iStack_e8) &&
             ((uVar17 != 0 || (iVar9 != 0)))) {
            iVar9 = 0;
            uVar17 = 0;
            FUN_10022b40(extraout_x12 & 0xffffffff,0,&local_d8,&local_dc,&local_ec);
            FUN_10022b40(iVar10,extraout_x1 & 0xffffffff,&local_e0,&local_e4,&iStack_e8);
          }
          local_58 = 0;
          local_f0 = 1;
          uStack_4c = *(undefined4 *)(param_3 + -0x30);
          local_50 = 0;
          local_48 = *(undefined4 *)(param_3 + -0x2c);
          uStack_44 = *(undefined4 *)(param_3 + -0x28);
          local_90 = (undefined8 *)(param_2 + -0x50);
          local_88 = *(undefined4 *)local_90;
          uStack_84 = *(undefined4 *)(param_2 + -0x4c);
          local_80 = *(undefined4 *)(param_2 + -0x48);
          uStack_7c = *(undefined4 *)(param_2 + -0x44);
          local_78 = *(undefined4 *)(param_2 + -0x40);
          uStack_74 = *(undefined4 *)(param_2 + -0x3c);
          FUN_10022430(&local_58,&local_70,&local_88);
          pcVar4 = local_cc;
          uVar14 = local_d4;
          if (local_d0 < local_d4) {
            uVar14 = local_d0;
          }
          bVar2 = false;
          iVar15 = iVar16;
          if (uVar14 != 0) {
            local_d4 = local_70;
            uVar18 = 0;
            local_dc = local_68;
            local_d8 = iStack_6c;
            local_a8 = local_60;
            local_a4 = uStack_5c;
            local_b0 = uStack_64;
            local_e4 = -0x7789f794;
            local_ec = param_3;
            iStack_e8 = iVar10;
            local_e0 = param_2;
            local_d0 = uVar17;
            uStack_ac = (1 << (ulonglong)(uVar17 & 0x1f)) - 1;
            local_a0 = iVar9;
            local_94 = uVar14;
            do {
              iVar15 = local_e4;
              iVar10 = iStack_e8;
              param_3 = local_ec;
              if (local_f0 == 0) break;
              local_cc = (code *)(uVar18 + local_d0);
              local_c8 = (int)local_d4 >> ((uint)local_cc & 0x1f);
              uStack_c4 = local_d8 >> ((uint)local_cc & 0x1f);
              local_c0 = local_dc >> ((uint)local_cc & 0x1f);
              local_bc = (int)local_b0 >> ((uint)local_cc & 0x1f);
              if ((local_b0 & uStack_ac) != 0) {
                local_bc = local_bc + 1;
              }
              local_b8 = (int)local_a8 >> ((uint)local_cc & 0x1f);
              if ((local_a8 & uStack_ac) != 0) {
                local_b8 = local_b8 + 1;
              }
              iStack_b4 = (int)local_a4 >> ((uint)local_cc & 0x1f);
              if ((local_a4 & uStack_ac) != 0) {
                iStack_b4 = iStack_b4 + 1;
              }
              if (((int)local_c8 < (int)local_bc && (int)uStack_c4 < (int)local_b8) &&
                  local_c0 < iStack_b4) {
                local_98 = uVar18 + local_a0;
                iVar16 = *(int *)(local_e0 + (int)local_cc * 4 + -0x90);
                iVar9 = *(int *)(local_ec + local_98 * 4 + -0x90);
                if (iVar16 != 0) {
                  FUN_1003f5e0(iVar16,*(undefined1 *)(iVar16 + 0x48));
                }
                if (*(int *)(*(int *)(iVar9 + 0x60) + 0x94) != 0) {
                  FUN_1003f5e0(iVar9,*(undefined1 *)(iVar9 + 0x48));
                }
                uVar6 = local_b8;
                uVar5 = local_bc;
                iVar16 = local_c0;
                uVar14 = uStack_c4;
                uVar17 = local_c8;
                uVar12 = FUN_10003810(*local_9c);
                if ((uVar12 & 1) != 0) {
                  local_bc = uVar5 + 3 & 0xfffffffc;
                  local_b8 = uVar6 + 3 & 0xfffffffc;
                  uVar17 = uVar17 & 0xfffffffc;
                  uVar14 = uVar14 & 0xfffffffc;
                  local_c8 = uVar17;
                  uStack_c4 = uVar14;
                }
                puVar13 = (undefined4 *)(local_e0 + -0x34);
                uVar11 = (*pcVar4)();
                bVar8 = (*extraout_w11_01)(uVar11,local_98,local_cc,*extraout_w8,*puVar13,&local_c8,
                                           uVar17,uVar14,iVar16);
                local_f0 = bVar8 & local_f0;
                bVar2 = true;
              }
              uVar18 = uVar18 + 1;
              iVar15 = local_e4;
              iVar10 = iStack_e8;
              param_3 = local_ec;
            } while (uVar18 < local_94);
          }
          *local_90 = 0;
          local_90[1] = 0;
          local_90[2] = 0;
          if (bVar2) {
            iVar16 = 0;
            if (*(int *)(param_3 + -0xb4) != 0) {
              iVar16 = *(int *)(param_3 + -0xb4) + -0x66b4;
            }
            FUN_1000d9c0(iVar16,iVar10);
          }
          iVar16 = 0;
          if (local_f0 == 0) {
            iVar16 = iVar15;
          }
        }
      }
    }
    if (bVar3) {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    else {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
  }
  return iVar16;
}

