/*
 * FUN_180207d68 at 180207d68
 * undefined FUN_180207d68(void)
 * Address ranges: 180207d68-180207fd7;180207ff0-1802083f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180207d68(longlong param_1,longlong *param_2,undefined8 param_3,int param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int extraout_w10;
  ulonglong uVar13;
  longlong extraout_x10;
  longlong extraout_x10_00;
  longlong extraout_x10_01;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong *plVar14;
  int *piVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined4 uVar19;
  longlong *plVar20;
  int *piVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  uint local_dc;
  int local_d8;
  uint local_d4;
  undefined4 local_d0;
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  undefined8 local_b0;
  uint local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  ulonglong local_88;
  longlong *local_80;
  longlong *plStack_78;
  longlong local_70;
  longlong lStack_68;
  uint local_60;
  int iStack_5c;
  longlong local_58;
  longlong local_50;
  
  lVar17 = *(longlong *)(param_1 + 0xb10);
  if (lVar17 == 0) {
    return;
  }
  plVar20 = *(longlong **)(param_1 + 0xb18);
  *(undefined4 *)(param_1 + 0xb38) = 0;
  local_98 = *(longlong *)(param_1 + 0xb78);
  local_90 = param_2;
  thunk_FUN_1802236f8(plVar20 + 5);
  uVar19 = 0;
  if ((char)plVar20[10] == '\0') {
    uVar10 = *(uint *)((longlong)plVar20 + 0xc);
    if (uVar10 == 0) goto LAB_180208298;
    uVar12 = 0;
    uVar11 = uVar10;
    do {
      uVar5 = uVar11 + uVar12 >> 1;
      uVar13 = (ulonglong)uVar5;
      plVar14 = *(longlong **)(*plVar20 + uVar13 * 0x18);
      if (plVar14 <= param_2) {
        if (param_2 <= plVar14) break;
        uVar12 = uVar5 + 1;
        uVar13 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar11;
      }
      uVar11 = uVar5;
    } while (uVar11 != uVar12);
    if (((uint)uVar13 == uVar10) || (*(longlong **)(*plVar20 + uVar13 * 0x18) != param_2))
    goto LAB_180208298;
  }
  puVar6 = (undefined4 *)FUN_18020ec30(plVar20,&local_90);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0;
    local_d8 = -1;
    lVar7 = FUN_18020ee08(puVar6 + 2,&local_d8);
    if (lVar7 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(lVar7 + 0x14);
    }
    uVar13 = 0;
    if (puVar6[6] != 0) {
      local_d0 = 0;
      local_88 = 0;
      local_d8 = iVar9;
      local_d4 = puVar6[6];
      local_c8 = param_1;
      local_c0 = lVar17;
      local_90 = param_5;
      local_80 = param_2;
      plStack_78 = plVar20;
      do {
        local_dc = local_d4 - 1;
        if (local_dc < (uint)puVar6[6]) {
          lVar17 = *(longlong *)(puVar6 + 4) + (ulonglong)local_dc * 0x30;
          plVar20 = (longlong *)(lVar17 + 0x10);
          piVar15 = (int *)(lVar17 + 0x20);
          plVar14 = (longlong *)(lVar17 + 0x18);
          piVar21 = (int *)(lVar17 + 0x24);
          plVar18 = (longlong *)(lVar17 + 0x28);
        }
        else {
          plVar20 = (longlong *)&DAT_00000008;
          piVar15 = (int *)&DAT_00000018;
          plVar14 = (longlong *)&DAT_00000010;
          piVar21 = (int *)&DAT_0000001c;
          plVar18 = (longlong *)&DAT_00000020;
        }
        if (*piVar15 != -1) {
          lVar7 = FUN_18020deb0(lVar7,plVar20);
          lVar17 = local_c8;
          local_b8 = (int)lVar7;
          iVar9 = param_4;
          if ((local_90 != (longlong *)0x0) && (*(uint *)(local_90 + 1) != 0)) {
            uVar13 = 0;
            do {
              local_a0 = plVar14;
              if (*piVar15 == *(int *)(*local_90 + 4 + uVar13 * 8)) {
                local_88 = 1L << (uVar13 & 0x3f) | local_88;
                iVar9 = *(int *)(*local_90 + uVar13 * 8);
                break;
              }
              uVar10 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar10;
            } while (uVar10 < *(uint *)(local_90 + 1));
          }
          if (local_b8 != local_d8 || iVar9 != param_4) {
            iVar4 = *piVar15;
            local_a0 = (longlong *)CONCAT44(local_a0._4_4_,iVar4);
            iVar3 = *(int *)(local_c8 + 0xb3c);
            if (*(int *)(local_c8 + 0xb38) == iVar3) {
              uVar10 = iVar3 << 1;
              if (iVar3 == 0) {
                uVar10 = 0x10;
              }
              local_b0 = (code *)CONCAT44(local_b0._4_4_,uVar10);
              lVar7 = (ulonglong)uVar10 * 0xc;
              if (SUB168(ZEXT416(uVar10) * ZEXT816(0xc),8) != 0) {
                lVar7 = -1;
              }
              local_50 = FUN_1802229a8(lVar7);
              lVar7 = 0;
              if (local_50 != 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_180104c48(local_50,*(undefined8 *)(lVar17 + 0xb30),
                                    (ulonglong)*(uint *)(lVar17 + 0xb3c) * 0xc);
              }
            }
            else {
              piVar15 = (int *)(*(longlong *)(local_c8 + 0xb30) +
                               (ulonglong)*(uint *)(local_c8 + 0xb38) * 0xc);
              *piVar15 = local_b8;
              piVar15[1] = iVar9;
              piVar15[2] = iVar4;
              *(int *)(local_c8 + 0xb38) = *(int *)(local_c8 + 0xb38) + 1;
            }
            if (iVar9 != param_4) {
              *piVar21 = iVar9;
              *plVar20 = local_c0;
              *plVar14 = local_c8;
              *plVar18 = local_98;
              goto LAB_180208098;
            }
          }
          while( true ) {
            uVar13 = (ulonglong)local_d4;
            if ((uint)puVar6[6] <= local_d4) break;
            puVar1 = (undefined8 *)(*(longlong *)(puVar6 + 4) + (ulonglong)(local_d4 - 1) * 0x30);
            local_d4 = local_d4 + 1;
            puVar2 = (undefined8 *)(*(longlong *)(puVar6 + 4) + uVar13 * 0x30);
            uVar8 = *puVar2;
            uVar23 = puVar2[3];
            uVar22 = puVar2[2];
            puVar1[1] = puVar2[1];
            *puVar1 = uVar8;
            puVar1[3] = uVar23;
            puVar1[2] = uVar22;
            uVar8 = puVar2[4];
            puVar1[5] = puVar2[5];
            puVar1[4] = uVar8;
          }
          puVar6[6] = puVar6[6] - 1;
        }
LAB_180208098:
        local_d4 = local_dc;
        uVar13 = local_88;
        param_1 = local_c8;
        lVar17 = local_c0;
        param_5 = local_90;
        param_2 = local_80;
        plVar20 = plStack_78;
        iVar9 = local_d8;
        uVar19 = local_d0;
      } while (local_dc != 0);
    }
    if ((param_5 != (longlong *)0x0) && ((int)param_5[1] != 0)) {
      uVar16 = 0;
      local_d0 = uVar19;
      local_c0 = lVar17;
      local_80 = param_2;
      plStack_78 = plVar20;
      do {
        if ((1L << (uVar16 & 0x3f) & uVar13) == 0) {
          piVar15 = (int *)(*param_5 + uVar16 * 8);
          iVar3 = *piVar15;
          if (iVar3 != iVar9) {
            local_70 = local_c0;
            local_60 = piVar15[1];
            local_58 = local_98;
            lStack_68 = param_1;
            iStack_5c = iVar3;
            FUN_18020ee88(puVar6 + 2,piVar15 + 1,&local_70);
            local_b0 = (code *)CONCAT44(iVar3,iVar9);
            local_a8 = local_60;
            FUN_18020eaf0(param_1 + 0xb30,&local_b0);
          }
        }
        uVar10 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar10;
        lVar17 = local_c0;
        param_2 = local_80;
        plVar20 = plStack_78;
        uVar19 = local_d0;
      } while (uVar10 < *(uint *)(param_5 + 1));
    }
    uVar10 = 0xffffffff;
    local_dc = 0xffffffff;
    plVar14 = (longlong *)FUN_18020ee08(puVar6 + 2,&local_dc);
    if (plVar14 == (longlong *)0x0) {
      local_58 = local_98;
      local_dc = uVar10;
      local_70 = lVar17;
      lStack_68 = param_1;
      local_60 = uVar10;
      iStack_5c = param_4;
      FUN_18020ee88(puVar6 + 2,&local_dc,&local_70);
    }
    else {
      uVar19 = *(undefined4 *)((longlong)plVar14 + 0x14);
      local_b0 = (code *)__hybrid_os_arm64x_dispatch_icall;
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar13 = (*extraout_x11)();
      if (uVar13 < (ulonglong)plVar14[3]) {
        lVar7 = plVar14[1];
        if (lVar17 == *plVar14) {
          if (param_1 == lVar7) {
            uVar19 = *(undefined4 *)((longlong)plVar14 + 0x14);
          }
          else if (lVar7 != -1) {
            FUN_180207560(lVar7 + 8,0);
          }
        }
        else {
          if (lVar7 != -1) {
            FUN_180207560(lVar7 + 8,0);
          }
          if (param_1 != -1) {
            FUN_180207560(param_1 + 8,0);
          }
          lVar7 = *plVar14;
          uVar8 = (*local_b0)(0x180224000);
          (*extraout_x11_00)(uVar8,*(undefined8 *)(lVar7 + 0x18),plVar14[3]);
        }
      }
      *plVar14 = lVar17;
      plVar14[1] = param_1;
      *(undefined4 *)(plVar14 + 2) = 0xffffffff;
      *(int *)((longlong)plVar14 + 0x14) = param_4;
      plVar14[3] = local_98;
    }
  }
LAB_180208298:
  thunk_FUN_18022370c(plVar20 + 5);
  if (*(int *)(*(longlong *)(param_1 + 0xb10) + 0x30) != 3) {
    uVar13 = FUN_18020d9b8(uVar19,param_4,0);
    if ((uVar13 & 1) == 0) {
      uVar13 = 0;
      if (extraout_w10 != 0) {
        do {
          puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0xb30) + uVar13 * 0xc);
          uVar16 = FUN_18020d9b8(*puVar6,puVar6[1],0);
          if ((uVar16 & 1) != 0) {
            FUN_180206e88(param_1,param_2,*(undefined4 *)(extraout_x10_01 + 8));
          }
          uVar10 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)(param_1 + 0xb38));
      }
    }
    else {
      uVar13 = 0;
      if (extraout_w10 != 0) {
        do {
          uVar16 = FUN_18020d9b8(*(undefined4 *)(*(longlong *)(param_1 + 0xb30) + uVar13 * 0xc),
                                 uVar19,0);
          if ((uVar16 & 1) != 0) {
            FUN_180206e88(param_1,param_2,*(undefined4 *)(extraout_x10 + 8));
          }
          uVar10 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)(param_1 + 0xb38));
      }
      FUN_180206e88(param_1,param_2,0xffffffff,uVar19,param_4);
      uVar13 = 0;
      if (*(int *)(param_1 + 0xb38) != 0) {
        do {
          auVar24 = FUN_18020d9b8(param_4,*(undefined4 *)
                                           (*(longlong *)(param_1 + 0xb30) + uVar13 * 0xc + 4),0);
          if ((auVar24._0_8_ & 1) != 0) {
            FUN_180206e88(param_1,param_2,*(undefined4 *)(extraout_x10_00 + 8),param_4,
                          auVar24._8_8_ & 0xffffffff);
          }
          uVar10 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)(param_1 + 0xb38));
      }
    }
  }
  return;
}

