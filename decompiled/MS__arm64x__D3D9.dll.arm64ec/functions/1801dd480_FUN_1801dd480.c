/*
 * FUN_1801dd480 at 1801dd480
 * undefined FUN_1801dd480(void)
 * Address ranges: 1801dd480-1801dd893;1801dd8a4-1801dd8bf;1801dd8d0-1801dd99b;1801dd9ac-1801dda4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801dd480(undefined8 *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  code *extraout_x11;
  longlong lVar21;
  longlong *plVar22;
  ulonglong uVar23;
  
  lVar13 = param_1[3];
  uVar9 = FUN_1801042d0(param_1 + 1);
  iVar8 = (int)uVar9;
  if (*(int *)((longlong)param_1 + 0xc) + iVar8 != 0) goto LAB_1801dda18;
  if (((*(uint *)(param_1[3] + 0xe78) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar6 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar6 = true;
    uVar9 = thunk_FUN_1802236e4(DAT_180258900);
    if ((int)uVar9 == 0) {
      uVar9 = FUN_1801085c8();
      bVar6 = true;
    }
  }
  lVar21 = param_1[3];
  uVar4 = *(uint *)(lVar21 + 0x6940);
  if (uVar4 != 0) {
    uVar16 = 0;
    uVar12 = uVar4;
    do {
      uVar17 = uVar12 + uVar16 >> 1;
      puVar10 = *(undefined8 **)(*(longlong *)(lVar21 + 0x6938) + (ulonglong)uVar17 * 0x248);
      uVar7 = uVar17;
      if (puVar10 <= param_1) {
        if (param_1 <= puVar10) break;
        uVar16 = uVar17 + 1;
        uVar17 = uVar17 + 1;
        uVar7 = uVar12;
      }
      uVar12 = uVar7;
    } while (uVar12 != uVar16);
    if (((uVar17 != uVar4) &&
        (puVar10 = (undefined8 *)(*(longlong *)(lVar21 + 0x6938) + (ulonglong)uVar17 * 0x248),
        (undefined8 *)*puVar10 == param_1)) && (puVar1 = puVar10 + 2, puVar1 != (ulonglong *)0x0)) {
      uVar4 = *(uint *)(lVar21 + 0x6920);
      if (uVar4 == 0) {
LAB_1801dd630:
        plVar22 = (longlong *)FUN_1802229a8(0x10);
        uVar9 = 0;
        if (plVar22 != (longlong *)0x0) {
          *plVar22 = 0;
          plVar22[1] = 0;
          uVar18 = 0;
          uVar11 = puVar10[0x48];
          uVar4 = *(uint *)(lVar21 + 0x6920);
          if (uVar4 != 0) {
            uVar16 = 0;
            uVar12 = uVar4;
            do {
              uVar17 = uVar12 + uVar16 >> 1;
              uVar18 = (ulonglong)uVar17;
              uVar20 = *(ulonglong *)(*(longlong *)(lVar21 + 0x6918) + uVar18 * 0x18);
              if (uVar20 <= uVar11) {
                if (uVar11 <= uVar20) break;
                uVar16 = uVar17 + 1;
                uVar18 = (ulonglong)(uVar17 + 1);
                uVar17 = uVar12;
              }
              uVar12 = uVar17;
            } while (uVar12 != uVar16);
            if (((uint)uVar18 != uVar4) &&
               (puVar2 = (ulonglong *)(*(longlong *)(lVar21 + 0x6918) + uVar18 * 0x18),
               *puVar2 == uVar11)) {
              puVar2[2] = (ulonglong)plVar22;
              goto LAB_1801dd808;
            }
          }
          plVar14 = (longlong *)(lVar21 + 0x6918);
          uVar16 = *(uint *)(lVar21 + 0x6924);
          if (uVar16 == uVar4) {
            uVar4 = 0x10;
            if (uVar16 != 0) {
              uVar4 = uVar16 << 1;
            }
            lVar19 = FUN_1802229a8((ulonglong)uVar4 * 0x18);
            if (lVar19 != 0) {
              uVar20 = 0;
              if (*(int *)(lVar21 + 0x6920) != 0) {
                do {
                  uVar16 = (int)uVar20 + 1;
                  puVar15 = (undefined8 *)(*(longlong *)(lVar21 + 0x6918) + uVar20 * 0x18);
                  puVar3 = (undefined8 *)(lVar19 + uVar20 * 0x18);
                  uVar9 = *puVar15;
                  puVar3[1] = puVar15[1];
                  *puVar3 = uVar9;
                  puVar3[2] = puVar15[2];
                  uVar20 = (ulonglong)uVar16;
                } while (uVar16 < *(uint *)(lVar21 + 0x6920));
              }
              FUN_1802229d8(*(undefined8 *)(lVar21 + 0x6910));
              *(longlong *)(lVar21 + 0x6910) = lVar19;
              *(longlong *)(lVar21 + 0x6918) = lVar19;
              *(uint *)(lVar21 + 0x6924) = uVar4;
            }
          }
          uVar20 = (ulonglong)*(uint *)(lVar21 + 0x6920);
          if (*(uint *)(lVar21 + 0x6924) != *(uint *)(lVar21 + 0x6920)) {
            while ((uint)uVar18 < (uint)uVar20) {
              uVar23 = (ulonglong)((uint)uVar20 - 1);
              puVar15 = (undefined8 *)(*(longlong *)(lVar21 + 0x6918) + uVar20 * 0x18);
              puVar3 = (undefined8 *)(*(longlong *)(lVar21 + 0x6918) + uVar23 * 0x18);
              uVar9 = *puVar3;
              puVar15[1] = puVar3[1];
              *puVar15 = uVar9;
              puVar15[2] = puVar3[2];
              uVar20 = uVar23;
            }
            *(int *)(lVar21 + 0x6920) = *(int *)(lVar21 + 0x6920) + 1;
            *(undefined8 *)(*plVar14 + uVar18 * 0x18 + 8) = puVar10[0x48];
            *(longlong **)(*plVar14 + uVar18 * 0x18 + 0x10) = plVar22;
            *(ulonglong *)(*plVar14 + uVar18 * 0x18) = uVar11;
          }
LAB_1801dd808:
          uVar4 = *(uint *)((longlong)plVar22 + 0xc);
          if (*(uint *)(plVar22 + 1) != uVar4) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_180104c48(*plVar22 + (ulonglong)*(uint *)(plVar22 + 1) * 0x238,puVar1,0x238);
          }
          uVar16 = uVar4 << 1;
          if (uVar4 == 0) {
            uVar16 = 0x10;
          }
          uVar18 = CONCAT44(0,uVar16);
          lVar19 = uVar18 * 0x238;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar18;
          if (SUB168(auVar5 * ZEXT816(0x238),8) != 0) {
            lVar19 = -1;
          }
          puVar10 = (undefined8 *)FUN_1802229a8(lVar19);
          if (puVar10 != (undefined8 *)0x0) {
            puVar15 = puVar10;
            if (uVar16 != 0) {
              do {
                *puVar15 = 0;
                puVar15[1] = 0;
                puVar15[2] = 0;
                uVar18 = uVar18 - 1;
                *(undefined4 *)((longlong)puVar15 + 0x224) = 0;
                puVar15[0x45] = 0;
                puVar15[0x46] = 0;
                puVar15 = puVar15 + 0x47;
              } while (uVar18 != 0);
            }
                    /* WARNING: Subroutine does not return */
            thunk_FUN_180104c48(puVar10,*plVar22,
                                (ulonglong)*(uint *)((longlong)plVar22 + 0xc) * 0x238);
          }
          uVar9 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          uVar9 = (*extraout_x11)(uVar9,0);
        }
      }
      else {
        uVar18 = puVar10[0x48];
        uVar16 = 0;
        uVar12 = uVar4;
        do {
          uVar17 = uVar12 + uVar16 >> 1;
          uVar20 = (ulonglong)uVar17;
          uVar11 = *(ulonglong *)(*(longlong *)(lVar21 + 0x6918) + uVar20 * 0x18);
          if (uVar11 <= uVar18) {
            if (uVar18 <= uVar11) break;
            uVar16 = uVar17 + 1;
            uVar20 = (ulonglong)(uVar17 + 1);
            uVar17 = uVar12;
          }
          uVar12 = uVar17;
        } while (uVar12 != uVar16);
        if ((((uint)uVar20 == uVar4) ||
            (puVar2 = (ulonglong *)(*(longlong *)(lVar21 + 0x6918) + uVar20 * 0x18),
            *puVar2 != uVar18)) || (puVar2 = puVar2 + 2, puVar2 == (ulonglong *)0x0))
        goto LAB_1801dd630;
        plVar22 = (longlong *)*puVar2;
        if (plVar22 != (longlong *)0x0) goto LAB_1801dd808;
      }
      FUN_1801dbbb8(uVar9,puVar1);
      uVar4 = *(uint *)(lVar21 + 0x6940);
      if (uVar4 != 0) {
        uVar18 = *puVar1;
        uVar16 = 0;
        uVar12 = uVar4;
        do {
          uVar17 = uVar12 + uVar16 >> 1;
          uVar11 = *(ulonglong *)(*(longlong *)(lVar21 + 0x6938) + (ulonglong)uVar17 * 0x248);
          uVar7 = uVar17;
          if (uVar11 <= uVar18) {
            if (uVar18 <= uVar11) break;
            uVar16 = uVar17 + 1;
            uVar17 = uVar17 + 1;
            uVar7 = uVar12;
          }
          uVar12 = uVar7;
        } while (uVar12 != uVar16);
        if ((uVar17 != uVar4) &&
           (*(ulonglong *)(*(longlong *)(lVar21 + 0x6938) + (ulonglong)uVar17 * 0x248) == uVar18)) {
          if (uVar17 + 1 < uVar4) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_180104c48(*(longlong *)(lVar21 + 0x6938) + (ulonglong)uVar17 * 0x248,
                                *(longlong *)(lVar21 + 0x6938) + (ulonglong)(uVar17 + 1) * 0x248,
                                0x248);
          }
          *(int *)(lVar21 + 0x6940) = *(int *)(lVar21 + 0x6940) + -1;
        }
      }
    }
  }
  FUN_1802229d8(param_1[6]);
  *param_1 = &PTR_FUN_18022ecf0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1802229d8(param_1,0x38);
  if (bVar6) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
LAB_1801dda18:
  if (iVar8 == 0) {
    FUN_1801c3098(lVar13 + 0x6838);
  }
  return iVar8;
}

