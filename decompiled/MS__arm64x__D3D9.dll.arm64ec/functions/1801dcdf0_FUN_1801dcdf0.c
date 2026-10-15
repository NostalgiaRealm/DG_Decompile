/*
 * FUN_1801dcdf0 at 1801dcdf0
 * undefined FUN_1801dcdf0(void)
 * Address ranges: 1801dcdf0-1801dd1f3;1801dd208-1801dd223;1801dd234-1801dd2ff;1801dd310-1801dd38f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801dcdf0(undefined8 *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  code *extraout_x11;
  undefined8 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  
  uVar8 = FUN_1801042d0((longlong)param_1 + 0xc);
  if ((int)uVar8 + *(int *)(param_1 + 1) != 0) {
    return;
  }
  if (((*(uint *)(param_1[3] + 0xe78) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar6 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar6 = true;
    uVar8 = thunk_FUN_1802236e4(DAT_180258900);
    if ((int)uVar8 == 0) {
      uVar8 = FUN_1801085c8();
      bVar6 = true;
    }
  }
  lVar20 = param_1[3];
  uVar4 = *(uint *)(lVar20 + 0x6940);
  if (uVar4 == 0) goto LAB_1801dd320;
  uVar14 = 0;
  uVar12 = uVar4;
  do {
    uVar16 = uVar12 + uVar14 >> 1;
    puVar19 = *(undefined8 **)(*(longlong *)(lVar20 + 0x6938) + (ulonglong)uVar16 * 0x248);
    uVar7 = uVar16;
    if (puVar19 <= param_1) {
      if (param_1 <= puVar19) break;
      uVar14 = uVar16 + 1;
      uVar16 = uVar16 + 1;
      uVar7 = uVar12;
    }
    uVar12 = uVar7;
  } while (uVar12 != uVar14);
  if (((uVar16 == uVar4) ||
      (puVar19 = (undefined8 *)(*(longlong *)(lVar20 + 0x6938) + (ulonglong)uVar16 * 0x248),
      (undefined8 *)*puVar19 != param_1)) || (puVar1 = puVar19 + 2, puVar1 == (ulonglong *)0x0))
  goto LAB_1801dd320;
  uVar4 = *(uint *)(lVar20 + 0x6920);
  if (uVar4 == 0) {
LAB_1801dcf84:
    plVar21 = (longlong *)FUN_1802229a8(0x10);
    uVar8 = 0;
    if (plVar21 != (longlong *)0x0) {
      *plVar21 = 0;
      plVar21[1] = 0;
      uVar17 = 0;
      uVar11 = puVar19[0x48];
      uVar4 = *(uint *)(lVar20 + 0x6920);
      if (uVar4 != 0) {
        uVar14 = 0;
        uVar12 = uVar4;
        do {
          uVar16 = uVar12 + uVar14 >> 1;
          uVar17 = (ulonglong)uVar16;
          uVar18 = *(ulonglong *)(*(longlong *)(lVar20 + 0x6918) + uVar17 * 0x18);
          if (uVar18 <= uVar11) {
            if (uVar11 <= uVar18) break;
            uVar14 = uVar16 + 1;
            uVar17 = (ulonglong)(uVar16 + 1);
            uVar16 = uVar12;
          }
          uVar12 = uVar16;
        } while (uVar12 != uVar14);
        if (((uint)uVar17 != uVar4) &&
           (puVar2 = (ulonglong *)(*(longlong *)(lVar20 + 0x6918) + uVar17 * 0x18),
           *puVar2 == uVar11)) {
          puVar2[2] = (ulonglong)plVar21;
          goto LAB_1801dd168;
        }
      }
      plVar13 = (longlong *)(lVar20 + 0x6918);
      uVar14 = *(uint *)(lVar20 + 0x6924);
      if (uVar14 == uVar4) {
        uVar4 = 0x10;
        if (uVar14 != 0) {
          uVar4 = uVar14 << 1;
        }
        lVar15 = FUN_1802229a8((ulonglong)uVar4 * 0x18);
        if (lVar15 != 0) {
          uVar18 = 0;
          if (*(int *)(lVar20 + 0x6920) != 0) {
            do {
              uVar14 = (int)uVar18 + 1;
              puVar9 = (undefined8 *)(*(longlong *)(lVar20 + 0x6918) + uVar18 * 0x18);
              puVar3 = (undefined8 *)(lVar15 + uVar18 * 0x18);
              uVar8 = *puVar9;
              puVar3[1] = puVar9[1];
              *puVar3 = uVar8;
              puVar3[2] = puVar9[2];
              uVar18 = (ulonglong)uVar14;
            } while (uVar14 < *(uint *)(lVar20 + 0x6920));
          }
          FUN_1802229d8(*(undefined8 *)(lVar20 + 0x6910));
          *(longlong *)(lVar20 + 0x6910) = lVar15;
          *(longlong *)(lVar20 + 0x6918) = lVar15;
          *(uint *)(lVar20 + 0x6924) = uVar4;
        }
      }
      uVar18 = (ulonglong)*(uint *)(lVar20 + 0x6920);
      if (*(uint *)(lVar20 + 0x6924) != *(uint *)(lVar20 + 0x6920)) {
        while ((uint)uVar17 < (uint)uVar18) {
          uVar10 = (ulonglong)((uint)uVar18 - 1);
          puVar9 = (undefined8 *)(*(longlong *)(lVar20 + 0x6918) + uVar18 * 0x18);
          puVar3 = (undefined8 *)(*(longlong *)(lVar20 + 0x6918) + uVar10 * 0x18);
          uVar8 = *puVar3;
          puVar9[1] = puVar3[1];
          *puVar9 = uVar8;
          puVar9[2] = puVar3[2];
          uVar18 = uVar10;
        }
        *(int *)(lVar20 + 0x6920) = *(int *)(lVar20 + 0x6920) + 1;
        *(undefined8 *)(*plVar13 + uVar17 * 0x18 + 8) = puVar19[0x48];
        *(longlong **)(*plVar13 + uVar17 * 0x18 + 0x10) = plVar21;
        *(ulonglong *)(*plVar13 + uVar17 * 0x18) = uVar11;
      }
LAB_1801dd168:
      uVar4 = *(uint *)((longlong)plVar21 + 0xc);
      if (*(uint *)(plVar21 + 1) != uVar4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(*plVar21 + (ulonglong)*(uint *)(plVar21 + 1) * 0x238,puVar1,0x238);
      }
      uVar14 = uVar4 << 1;
      if (uVar4 == 0) {
        uVar14 = 0x10;
      }
      uVar17 = CONCAT44(0,uVar14);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar17;
      lVar15 = uVar17 * 0x238;
      if (SUB168(auVar5 * ZEXT816(0x238),8) != 0) {
        lVar15 = -1;
      }
      puVar19 = (undefined8 *)FUN_1802229a8(lVar15);
      if (puVar19 != (undefined8 *)0x0) {
        puVar9 = puVar19;
        if (uVar14 != 0) {
          do {
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9[2] = 0;
            uVar17 = uVar17 - 1;
            *(undefined4 *)((longlong)puVar9 + 0x224) = 0;
            puVar9[0x45] = 0;
            puVar9[0x46] = 0;
            puVar9 = puVar9 + 0x47;
          } while (uVar17 != 0);
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(puVar19,*plVar21,(ulonglong)*(uint *)((longlong)plVar21 + 0xc) * 0x238);
      }
      uVar8 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar8 = (*extraout_x11)(uVar8,0);
    }
  }
  else {
    uVar17 = puVar19[0x48];
    uVar14 = 0;
    uVar12 = uVar4;
    do {
      uVar16 = uVar12 + uVar14 >> 1;
      uVar18 = (ulonglong)uVar16;
      uVar11 = *(ulonglong *)(*(longlong *)(lVar20 + 0x6918) + uVar18 * 0x18);
      if (uVar11 <= uVar17) {
        if (uVar17 <= uVar11) break;
        uVar14 = uVar16 + 1;
        uVar18 = (ulonglong)(uVar16 + 1);
        uVar16 = uVar12;
      }
      uVar12 = uVar16;
    } while (uVar12 != uVar14);
    if ((((uint)uVar18 == uVar4) ||
        (puVar2 = (ulonglong *)(*(longlong *)(lVar20 + 0x6918) + uVar18 * 0x18), *puVar2 != uVar17))
       || (puVar2 = puVar2 + 2, puVar2 == (ulonglong *)0x0)) goto LAB_1801dcf84;
    plVar21 = (longlong *)*puVar2;
    if (plVar21 != (longlong *)0x0) goto LAB_1801dd168;
  }
  FUN_1801dbbb8(uVar8,puVar1);
  uVar4 = *(uint *)(lVar20 + 0x6940);
  if (uVar4 != 0) {
    uVar17 = *puVar1;
    uVar14 = 0;
    uVar12 = uVar4;
    do {
      uVar16 = uVar12 + uVar14 >> 1;
      uVar11 = *(ulonglong *)(*(longlong *)(lVar20 + 0x6938) + (ulonglong)uVar16 * 0x248);
      uVar7 = uVar16;
      if (uVar11 <= uVar17) {
        if (uVar17 <= uVar11) break;
        uVar14 = uVar16 + 1;
        uVar16 = uVar16 + 1;
        uVar7 = uVar12;
      }
      uVar12 = uVar7;
    } while (uVar12 != uVar14);
    if ((uVar16 != uVar4) &&
       (*(ulonglong *)(*(longlong *)(lVar20 + 0x6938) + (ulonglong)uVar16 * 0x248) == uVar17)) {
      if (uVar16 + 1 < uVar4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(*(longlong *)(lVar20 + 0x6938) + (ulonglong)uVar16 * 0x248,
                            *(longlong *)(lVar20 + 0x6938) + (ulonglong)(uVar16 + 1) * 0x248,0x248);
      }
      *(int *)(lVar20 + 0x6940) = *(int *)(lVar20 + 0x6940) + -1;
    }
  }
LAB_1801dd320:
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
  return;
}

