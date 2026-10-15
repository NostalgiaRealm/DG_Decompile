/*
 * FUN_1800ed3b0 at 1800ed3b0
 * undefined FUN_1800ed3b0(void)
 * Address ranges: 1800ed3b0-1800ed6e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_1800ed3b0(longlong *param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 uVar19;
  
  uVar7 = CONCAT44(0,param_3);
  uVar11 = 0;
  uVar17 = uVar7;
  if (param_3 != 0) {
    do {
      plVar15 = (longlong *)(param_2 + uVar11 * 0x20);
      uVar1 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar1;
      uVar17 = ((ulonglong)*(uint *)((longlong)plVar15 + 0x1c) |
               (ulonglong)*(uint *)((longlong)plVar15 + 0xc) + (longlong)(int)plVar15[3] +
               (ulonglong)*(uint *)(plVar15 + 1) << 0x20) +
               (ulonglong)*(uint *)((longlong)plVar15 + 0x14) + (ulonglong)*(uint *)(plVar15 + 2) +
               *plVar15 + uVar17;
    } while (uVar1 < param_3);
  }
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar11 = 0;
  if (uVar1 != 0) {
    uVar12 = 0;
    uVar10 = uVar1;
    do {
      uVar3 = uVar10 + uVar12 >> 1;
      uVar11 = (ulonglong)uVar3;
      uVar14 = *(ulonglong *)(*param_1 + uVar11 * 0x18);
      if (uVar14 <= uVar17) {
        if (uVar17 <= uVar14) break;
        uVar12 = uVar3 + 1;
        uVar11 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar10;
      }
      uVar10 = uVar3;
    } while (uVar10 != uVar12);
    if (((uint)uVar11 != uVar1) && (*(ulonglong *)(*param_1 + uVar11 * 0x18) == uVar17))
    goto LAB_1800ed5b0;
  }
  if (uVar1 == *(uint *)(param_1 + 1)) {
    uVar14 = CONCAT44(0,*(uint *)(param_1 + 1) << 1);
    lVar18 = uVar14 * 0x18;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar14;
    if (SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
      lVar18 = -1;
    }
    lVar18 = thunk_FUN_180102f80(lVar18);
    if (lVar18 != 0) {
      uVar14 = 0;
      if ((int)param_1[1] != 0) {
        do {
          uVar1 = (int)uVar14 + 1;
          puVar9 = (undefined8 *)(*param_1 + uVar14 * 0x18);
          puVar2 = (undefined8 *)(lVar18 + uVar14 * 0x18);
          uVar19 = *puVar9;
          puVar2[1] = puVar9[1];
          *puVar2 = uVar19;
          puVar2[2] = puVar9[2];
          uVar14 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 1));
      }
      thunk_FUN_180102fc0(*param_1);
      *param_1 = lVar18;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar14 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  while ((uint)uVar11 < (uint)uVar14) {
    uVar13 = (ulonglong)((uint)uVar14 - 1);
    puVar9 = (undefined8 *)(*param_1 + uVar14 * 0x18);
    puVar2 = (undefined8 *)(*param_1 + uVar13 * 0x18);
    uVar19 = *puVar2;
    puVar9[1] = puVar2[1];
    *puVar9 = uVar19;
    puVar9[2] = puVar2[2];
    uVar14 = uVar13;
  }
  *(ulonglong *)(*param_1 + uVar11 * 0x18) = uVar17;
  *(ulonglong *)(*param_1 + uVar11 * 0x18 + 8) = uVar17;
  puVar9 = (undefined8 *)FUN_180102f80(0x10);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    *puVar9 = 0;
    puVar9[1] = 0;
  }
  *(undefined8 **)(*param_1 + uVar11 * 0x18 + 0x10) = puVar9;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_1800ed5b0:
  plVar15 = *(longlong **)(uVar11 * 0x18 + *param_1 + 0x10);
  if (plVar15 != (longlong *)0x0) {
    uVar1 = *(uint *)(plVar15 + 1);
    if (uVar1 != 0) {
      lVar18 = *plVar15;
      uVar17 = 0;
      do {
        plVar16 = *(longlong **)(lVar18 + uVar17 * 8);
        if ((param_3 == *(uint *)(plVar16 + 1)) &&
           (iVar8 = func_0x000180222c00(*plVar16,param_2,uVar7 << 5), iVar8 == 0)) {
          return plVar16;
        }
        uVar12 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar12;
      } while (uVar12 < uVar1);
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar7;
    lVar18 = uVar7 << 5;
    if (SUB168(auVar5 * ZEXT816(0x20),8) != 0) {
      lVar18 = -1;
    }
    lVar18 = thunk_FUN_180102f80(lVar18);
    if (lVar18 != 0) {
      plVar16 = (longlong *)FUN_180102f80(0x10);
      if (plVar16 != (longlong *)0x0) {
        thunk_FUN_180001218(lVar18,param_2,uVar7 << 5);
        *plVar16 = lVar18;
        *(uint *)(plVar16 + 1) = param_3;
        iVar8 = *(int *)((longlong)plVar15 + 0xc);
        if ((int)plVar15[1] == iVar8) {
          uVar1 = iVar8 << 1;
          if (iVar8 == 0) {
            uVar1 = 0x10;
          }
          lVar18 = CONCAT44(0,uVar1) << 3;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = CONCAT44(0,uVar1);
          if (SUB168(auVar6 * ZEXT816(8),8) != 0) {
            lVar18 = -1;
          }
          lVar18 = thunk_FUN_180102f80(lVar18);
          if (lVar18 == 0) {
            return plVar16;
          }
          thunk_FUN_180001218(lVar18,*plVar15,(ulonglong)*(uint *)((longlong)plVar15 + 0xc) << 3);
          thunk_FUN_180102fc0(*plVar15);
          *plVar15 = lVar18;
          *(uint *)((longlong)plVar15 + 0xc) = uVar1;
        }
        *(longlong **)(*plVar15 + (ulonglong)*(uint *)(plVar15 + 1) * 8) = plVar16;
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        return plVar16;
      }
      thunk_FUN_180102fc0(lVar18);
    }
  }
  return (longlong *)0x0;
}

