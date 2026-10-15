/*
 * FUN_1801fabe0 at 1801fabe0
 * undefined FUN_1801fabe0(void)
 * Address ranges: 1801fabe0-1801fb0c7;1801fb0d8-1801fb0f3;1801fb100-1801fb153;1801fb164-1801fb1cf;1801fb1e0-1801fb28b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801fabe0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong uVar14;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  code *local_350;
  longlong local_348;
  longlong local_340;
  longlong local_338;
  undefined1 auStack_330 [80];
  int local_2e0;
  undefined8 local_2d8;
  undefined1 auStack_2d0 [296];
  int local_1a8;
  int iStack_1a4;
  undefined1 auStack_198 [64];
  undefined1 auStack_158 [256];
  undefined8 local_58;
  
  puVar8 = __hybrid_os_arm64x_dispatch_icall;
  local_350 = (code *)0x0;
  lVar16 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(lVar16 + 0x688) != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    iVar10 = (*extraout_x11)();
    if (iVar10 != 0) goto LAB_1801faea0;
  }
  (*(code *)puVar8)(0x180224000);
  iVar10 = (*extraout_x11_00)(&DAT_180238910,&local_350);
  if (-1 < iVar10) {
    if (*(longlong *)(lVar16 + 0x688) != 0) {
      (*(code *)puVar8)(0x180224000);
      (*extraout_x11_01)();
    }
    *(code **)(lVar16 + 0x688) = local_350;
  }
  local_350 = *(code **)(lVar16 + 0x688);
  if (local_350 == (code *)0x0) {
    return 0;
  }
  FUN_1802229d8(*(undefined8 *)(lVar16 + 0x690));
  *(undefined8 *)(lVar16 + 0x690) = 0;
  *(undefined8 *)(lVar16 + 0x698) = 0;
  iVar10 = 0;
  local_348 = 0;
  uVar12 = (*(code *)puVar8)(0x180224000);
  iVar11 = (*extraout_x11_02)(uVar12,0,&local_348);
  while (-1 < iVar11) {
    uVar12 = (*(code *)puVar8)(0x180224000);
    iVar11 = (*extraout_x11_03)(uVar12,auStack_2d0);
    if (-1 < iVar11) {
      uVar13 = 0xffffffff;
      uVar17 = 0;
      do {
        lVar15 = uVar17 * 0x28;
        if (((*(int *)(lVar16 + 0x20 + lVar15) == local_1a8) &&
            (*(int *)(lVar16 + lVar15 + 0x24) == iStack_1a4)) &&
           ((local_1a8 != 0 || (iStack_1a4 != 0)))) {
          (*(code *)puVar8)(0x180224000);
          (*extraout_x11_04)();
          local_348 = 0;
          goto LAB_1801fad64;
        }
        uVar4 = uVar13;
        if (uVar13 == 0xffffffff) {
          uVar4 = (uint)uVar17;
        }
        uVar1 = (uint)uVar17 + 1;
        uVar17 = (ulonglong)uVar1;
        if (*(longlong *)(lVar16 + lVar15 + 0x18) == 0) {
          uVar13 = uVar4;
        }
      } while (uVar1 < 0x10);
      uVar17 = (ulonglong)uVar13;
LAB_1801fad64:
      iVar11 = (int)uVar17;
      if (local_348 == 0) {
        if (iVar11 != -1) goto LAB_1801faddc;
      }
      else if (iVar11 == -1) {
        (*(code *)puVar8)(0x180224000);
        (*extraout_x11_05)();
      }
      else {
        *(longlong *)(lVar16 + 0x18 + (longlong)iVar11 * 0x28) = local_348;
        lVar15 = lVar16 + (longlong)iVar11 * 0x28;
        *(undefined1 *)(lVar15 + 0x2c) = 1;
        *(ulonglong *)(lVar15 + 0x20) = CONCAT44(iStack_1a4,local_1a8);
LAB_1801faddc:
        local_340 = CONCAT44(local_340._4_4_,iVar11);
        FUN_180108518(lVar16 + 0x690,&local_340);
      }
    }
    iVar10 = iVar10 + 1;
    uVar12 = (*(code *)puVar8)(0x180224000);
    iVar11 = (*extraout_x11_06)(uVar12,iVar10,&local_348);
  }
  uVar17 = 0;
  local_340 = param_1;
  do {
    if (*(char *)(lVar16 + 0x2c + uVar17 * 0x28) != '\0') {
      if (*(uint *)(lVar16 + 0x698) != 0) {
        uVar14 = 0;
        do {
          if (*(int *)(*(longlong *)(lVar16 + 0x690) + uVar14 * 4) == (int)uVar17) {
            if ((int)uVar14 != -1) goto LAB_1801fae90;
            break;
          }
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
        } while (uVar13 < *(uint *)(lVar16 + 0x698));
      }
      (*(code *)puVar8)();
      (*extraout_x11_07)();
      *(undefined1 *)(lVar16 + 0x2c + uVar17 * 0x28) = 0;
    }
LAB_1801fae90:
    uVar13 = (int)uVar17 + 1;
    uVar17 = (ulonglong)uVar13;
    param_1 = local_340;
  } while (uVar13 < 0x10);
LAB_1801faea0:
  local_350 = (code *)puVar8;
  lVar16 = 0;
  uVar13 = 1;
  if (*(char *)(param_1 + 0x478) == '\0') {
    uVar13 = 0x10;
  }
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x698);
  if (uVar13 < uVar4) {
    uVar4 = uVar13;
  }
  local_340 = CONCAT44(local_340._4_4_,uVar4);
  do {
    lVar15 = lVar16 * 0x10;
    uVar17 = 0;
    if (*(int *)(param_1 + 0x28 + lVar15) != 0) {
      do {
        FUN_1802229d8(*(undefined8 *)(*(longlong *)(param_1 + (lVar16 + 2) * 0x10) + uVar17 * 8));
        uVar13 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar13;
      } while (uVar13 < *(uint *)(lVar15 + param_1 + 0x28));
    }
    lVar2 = param_1 + lVar15;
    FUN_1802229d8(*(undefined8 *)(lVar2 + 0x20));
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28 + lVar15) = 0;
    *(undefined4 *)(lVar2 + 0x2c) = 0;
    FUN_1802229d8(*(undefined8 *)(lVar2 + 0x120));
    *(undefined8 *)(lVar2 + 0x120) = 0;
    *(undefined8 *)(lVar2 + 0x128) = 0;
    FUN_1802229d8(*(undefined8 *)(lVar2 + 0x220));
    pcVar9 = local_350;
    lVar16 = lVar16 + 1;
    *(undefined8 *)(lVar2 + 0x220) = 0;
    *(undefined8 *)(lVar2 + 0x228) = 0;
  } while (lVar16 != 0x10);
  FUN_1802229d8(*(undefined8 *)(param_1 + 800));
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  uVar17 = 0;
  if ((uint)local_340 != 0) {
    do {
      uVar13 = (uint)uVar17;
      if ((*(int *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 0x18) == uVar13 + 1)) {
        lVar16 = *(longlong *)(param_1 + 0x10);
        if (uVar13 < *(uint *)(lVar16 + 0x698)) {
          uVar17 = (ulonglong)*(uint *)(*(longlong *)(lVar16 + 0x690) + uVar17 * 4);
        }
        else {
          uVar17 = 0;
        }
        uVar14 = (ulonglong)*(uint *)(param_1 + 0x328);
        local_348 = CONCAT44(local_348._4_4_,(int)uVar17);
        FUN_180108518(param_1 + 800,&local_348);
        uVar12 = (*pcVar9)(0x180224000);
        (*extraout_x11_08)(uVar12,auStack_2d0);
        local_350 = (code *)0x0;
        iVar10 = 0;
        uVar12 = (*pcVar9)(0x180224000);
        iVar11 = (*extraout_x11_09)(uVar12,0,&local_350);
        if (iVar11 != -0x7785fffe) {
          local_348 = CONCAT44(local_348._4_4_,uVar13);
          local_338 = lVar16 + uVar17 * 0x28;
          do {
            uVar12 = (*pcVar9)(0x180224000);
            (*extraout_x11_10)(uVar12,auStack_330);
            if (local_2e0 != 0) {
              FUN_180223210(auStack_198,auStack_2d0);
              FUN_180223210(auStack_158,auStack_330);
              local_58 = local_2d8;
              plVar3 = (longlong *)(param_1 + (uVar14 + 0x22) * 0x10);
              iVar11 = *(int *)((longlong)plVar3 + 0xc);
              if ((int)plVar3[1] != iVar11) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_180104c48(*plVar3 + (ulonglong)*(uint *)(plVar3 + 1) * 0x150,auStack_198,
                                    0x150);
              }
              uVar13 = iVar11 << 1;
              if (iVar11 == 0) {
                uVar13 = 0x10;
              }
              auVar5._8_8_ = 0;
              auVar5._0_8_ = CONCAT44(0,uVar13);
              lVar16 = CONCAT44(0,uVar13) * 0x150;
              if (SUB168(auVar5 * ZEXT816(0x150),8) != 0) {
                lVar16 = -1;
              }
              lVar16 = FUN_1802229a8(lVar16);
              if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_180104c48(lVar16,*plVar3,
                                    (ulonglong)*(uint *)((longlong)plVar3 + 0xc) * 0x150);
              }
              plVar3 = (longlong *)(param_1 + (uVar14 + 2) * 0x10);
              iVar11 = *(int *)((longlong)plVar3 + 0xc);
              if ((int)plVar3[1] == iVar11) {
                uVar13 = iVar11 << 1;
                if (iVar11 == 0) {
                  uVar13 = 0x10;
                }
                lVar16 = CONCAT44(0,uVar13) << 3;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = CONCAT44(0,uVar13);
                if (SUB168(auVar6 * ZEXT816(8),8) != 0) {
                  lVar16 = -1;
                }
                lVar16 = FUN_1802229a8(lVar16);
                if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_180104c48(lVar16,*plVar3,
                                      (ulonglong)*(uint *)((longlong)plVar3 + 0xc) << 3);
                }
              }
              else {
                *(undefined8 *)(*plVar3 + (ulonglong)*(uint *)(plVar3 + 1) * 8) = 0;
                *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              }
              plVar3 = (longlong *)(param_1 + (uVar14 + 0x12) * 0x10);
              iVar11 = *(int *)((longlong)plVar3 + 0xc);
              if ((int)plVar3[1] == iVar11) {
                uVar13 = iVar11 << 1;
                if (iVar11 == 0) {
                  uVar13 = 0x10;
                }
                lVar16 = CONCAT44(0,uVar13) << 3;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = CONCAT44(0,uVar13);
                if (SUB168(auVar7 * ZEXT816(8),8) != 0) {
                  lVar16 = -1;
                }
                lVar16 = FUN_1802229a8(lVar16);
                if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_180104c48(lVar16,*plVar3,
                                      (ulonglong)*(uint *)((longlong)plVar3 + 0xc) << 3);
                }
              }
              else {
                *(undefined8 *)(*plVar3 + (ulonglong)*(uint *)(plVar3 + 1) * 8) = 0;
                *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              }
            }
            (*pcVar9)(0x180224000);
            (*extraout_x11_11)();
            iVar10 = iVar10 + 1;
            uVar12 = (*pcVar9)(0x180224000);
            iVar11 = (*extraout_x11_12)(uVar12,iVar10,&local_350);
          } while (iVar11 != -0x7785fffe);
          uVar13 = (uint)local_348;
        }
      }
      uVar17 = (ulonglong)(uVar13 + 1);
    } while (uVar13 + 1 < (uint)local_340);
  }
  return 1;
}

