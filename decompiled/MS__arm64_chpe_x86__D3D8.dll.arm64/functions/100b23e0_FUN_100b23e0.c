/*
 * FUN_100b23e0 at 100b23e0
 * undefined FUN_100b23e0(void)
 * Address ranges: 100b23e0-100b2933
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b23e0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  ulonglong extraout_x1;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  ulonglong extraout_x12;
  int extraout_w13;
  ulonglong extraout_x13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint local_ec;
  int local_e8;
  uint local_e4;
  uint local_e0;
  int local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_c8;
  uint uStack_c4;
  int local_c0;
  uint local_bc;
  uint local_b8;
  int iStack_b4;
  int local_b0;
  code *local_ac;
  uint local_a8;
  uint local_a4;
  int *local_a0;
  uint local_9c;
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  int local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  iVar14 = -0x7789f794;
  if ((param_2 != 0) && (param_3 != 0)) {
    if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
      bVar4 = false;
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
    }
    else {
      bVar4 = true;
      iVar7 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
      if (iVar7 == 0) {
        FUN_10006560(0);
      }
    }
    pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    local_ac = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar7 = (*extraout_w11)(param_2);
    (*pcVar5)();
    iVar8 = (*extraout_w11_00)(param_3);
    if (iVar7 == iVar8) {
      switch(iVar8) {
      case 3:
      case 5:
        cVar6 = FUN_1001b738(param_3 + -0x78,param_2 + -0x78);
        if (cVar6 != '\0') {
          iVar14 = 0;
        }
        break;
      case 4:
        if (((*(int *)(param_3 + -0x20) == *(int *)(param_2 + -0x20)) &&
            (*(int *)(param_3 + -0x18) == 0)) && (*(int *)(param_2 + -0x18) == 2)) {
          local_ec = 0;
          local_e8 = 0;
          uVar2 = *(ushort *)(param_2 + -0x98);
          local_dc = 0;
          local_d8 = 0;
          local_e4 = 0;
          local_e0 = 0;
          local_d4 = (uint)*(ushort *)(param_3 + -0x98);
          uVar10 = uVar2 - local_d4;
          local_d0 = (uint)uVar2;
          local_b0 = *(ushort *)(param_3 + -0x98) - local_d0;
          if (uVar2 < local_d4) {
            uVar10 = 0;
          }
          else {
            local_b0 = 0;
          }
          uVar17 = param_3 - 200;
          local_a0 = (int *)(param_3 + -0x20);
          FUN_1001d500(param_2 + -200,uVar10,&local_dc,&local_e0,&local_e4);
          FUN_1001d500(uVar17,extraout_x13 & 0xffffffff,&local_e8,&local_ec,&local_d8);
          if (((local_dc != local_e8 || local_e0 != local_ec) || local_e4 != local_d8) &&
             ((uVar10 != 0 || (extraout_w13 != 0)))) {
            local_b0 = 0;
            uVar10 = 0;
            FUN_1001d500(extraout_x12 & 0xffffffff,0,&local_dc,&local_e0,&local_e4);
            FUN_1001d500(uVar17,extraout_x1 & 0xffffffff,&local_e8,&local_ec,&local_d8);
          }
          local_60 = 0;
          uStack_54 = *(undefined4 *)(param_3 + -0x30);
          uVar16 = 1;
          local_58 = 0;
          local_50 = *(undefined4 *)(param_3 + -0x2c);
          uStack_4c = *(undefined4 *)(param_3 + -0x28);
          local_98 = (undefined8 *)(param_2 + -0x50);
          local_90 = *(undefined4 *)local_98;
          uStack_8c = *(undefined4 *)(param_2 + -0x4c);
          local_88 = *(undefined4 *)(param_2 + -0x48);
          uStack_84 = *(undefined4 *)(param_2 + -0x44);
          local_80 = *(undefined4 *)(param_2 + -0x40);
          uStack_7c = *(undefined4 *)(param_2 + -0x3c);
          FUN_1001cdd0(&local_60,&local_78,&local_90);
          pcVar5 = local_ac;
          uVar1 = local_d4;
          if (local_d0 < local_d4) {
            uVar1 = local_d0;
          }
          bVar3 = false;
          iVar7 = iVar14;
          if (uVar1 != 0) {
            local_e8 = -0x7789f794;
            uVar15 = 0;
            local_e0 = uStack_6c;
            local_dc = local_70;
            local_d8 = uStack_74;
            local_a8 = local_68;
            local_a4 = uStack_64;
            local_d4 = local_78;
            local_ec = uVar17;
            local_e4 = (1 << (ulonglong)(uVar10 & 0x1f)) - 1;
            local_d0 = uVar10;
            local_9c = uVar1;
            do {
              iVar7 = local_e8;
              uVar17 = local_ec;
              if (uVar16 == 0) break;
              uVar10 = uVar15 + local_d0;
              local_c8 = (int)local_d4 >> (uVar10 & 0x1f);
              uStack_c4 = (int)local_d8 >> (uVar10 & 0x1f);
              local_c0 = local_dc >> (uVar10 & 0x1f);
              local_bc = (int)local_e0 >> (uVar10 & 0x1f);
              if ((local_e0 & local_e4) != 0) {
                local_bc = local_bc + 1;
              }
              local_b8 = (int)local_a8 >> (uVar10 & 0x1f);
              if ((local_a8 & local_e4) != 0) {
                local_b8 = local_b8 + 1;
              }
              iStack_b4 = (int)local_a4 >> (uVar10 & 0x1f);
              if ((local_a4 & local_e4) != 0) {
                iStack_b4 = iStack_b4 + 1;
              }
              if (((int)local_c8 < (int)local_bc && (int)uStack_c4 < (int)local_b8) &&
                  local_c0 < iStack_b4) {
                iVar14 = uVar15 + local_b0;
                iVar7 = *(int *)(param_2 + uVar10 * 4 + -0x90);
                iVar8 = *(int *)(param_3 + iVar14 * 4 + -0x90);
                if (iVar7 != 0) {
                  FUN_100357a0(iVar7,*(undefined1 *)(iVar7 + 0x48));
                }
                if (*(int *)(*(int *)(iVar8 + 0x60) + 0x94) != 0) {
                  FUN_100357a0(iVar8,*(undefined1 *)(iVar8 + 0x48));
                }
                iVar7 = *local_a0;
                if ((((((iVar7 == 0x59565955 || iVar7 == 0x32595559) || iVar7 == 0x31545844) ||
                      iVar7 == 0x32545844) || iVar7 == 0x33545844) || iVar7 == 0x34545844) ||
                    iVar7 == 0x35545844) {
                  local_bc = local_bc + 3 & 0xfffffffc;
                  local_b8 = local_b8 + 3 & 0xfffffffc;
                  local_c8 = local_c8 & 0xfffffffc;
                  uStack_c4 = uStack_c4 & 0xfffffffc;
                }
                uVar13 = (ulonglong)uStack_c4;
                uVar12 = (ulonglong)local_c8;
                puVar11 = (undefined4 *)(param_2 + -0x34);
                iVar7 = local_c0;
                uVar9 = (*pcVar5)();
                uVar10 = (*extraout_w11_01)(uVar9,iVar14,uVar10,*extraout_w8,*puVar11,&local_c8,
                                            uVar12 & 0xffffffff,uVar13 & 0xffffffff,iVar7);
                uVar16 = uVar10 & 0xff & uVar16;
                bVar3 = true;
              }
              uVar15 = uVar15 + 1;
              iVar7 = local_e8;
              uVar17 = local_ec;
            } while (uVar15 < local_9c);
          }
          *local_98 = 0;
          local_98[1] = 0;
          local_98[2] = 0;
          if (bVar3) {
            iVar14 = 0;
            if (*(int *)(param_3 + -0xb4) != 0) {
              iVar14 = *(int *)(param_3 + -0xb4) + -0x58e0;
            }
            FUN_1000c7f0(iVar14,uVar17);
          }
          iVar14 = 0;
          if (uVar16 == 0) {
            iVar14 = iVar7;
          }
        }
      }
    }
    if (bVar4) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  return iVar14;
}

