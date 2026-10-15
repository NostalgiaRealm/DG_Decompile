/*
 * FUN_180204620 at 180204620
 * undefined FUN_180204620(void)
 * Address ranges: 180204620-1802048bf;180204940-180204963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180204620(longlong *param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  
  uVar6 = CONCAT44(0,param_3);
  uVar11 = 0;
  uVar17 = uVar6;
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
    goto LAB_180204824;
  }
  if (uVar1 == *(uint *)(param_1 + 1)) {
    uVar14 = CONCAT44(0,*(uint *)(param_1 + 1) << 1);
    lVar8 = uVar14 * 0x18;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar14;
    if (SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
      lVar8 = -1;
    }
    lVar8 = FUN_1802229a8(lVar8);
    if (lVar8 != 0) {
      uVar14 = 0;
      if ((int)param_1[1] != 0) {
        do {
          uVar1 = (int)uVar14 + 1;
          puVar16 = (undefined8 *)(*param_1 + uVar14 * 0x18);
          puVar2 = (undefined8 *)(lVar8 + uVar14 * 0x18);
          uVar18 = *puVar16;
          puVar2[1] = puVar16[1];
          *puVar2 = uVar18;
          puVar2[2] = puVar16[2];
          uVar14 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 1));
      }
      FUN_1802229d8(*param_1);
      *param_1 = lVar8;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar14 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  while ((uint)uVar11 < (uint)uVar14) {
    uVar13 = (ulonglong)((uint)uVar14 - 1);
    puVar16 = (undefined8 *)(*param_1 + uVar14 * 0x18);
    puVar2 = (undefined8 *)(*param_1 + uVar13 * 0x18);
    uVar18 = *puVar2;
    puVar16[1] = puVar2[1];
    *puVar16 = uVar18;
    puVar16[2] = puVar2[2];
    uVar14 = uVar13;
  }
  *(ulonglong *)(*param_1 + uVar11 * 0x18) = uVar17;
  *(ulonglong *)(*param_1 + uVar11 * 0x18 + 8) = uVar17;
  puVar16 = (undefined8 *)FUN_1802229a8(0x10);
  if (puVar16 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    *puVar16 = 0;
    puVar16[1] = 0;
  }
  *(undefined8 **)(*param_1 + uVar11 * 0x18 + 0x10) = puVar16;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_180204824:
  plVar15 = *(longlong **)(uVar11 * 0x18 + *param_1 + 0x10);
  if (plVar15 != (longlong *)0x0) {
    uVar1 = *(uint *)(plVar15 + 1);
    if (uVar1 != 0) {
      lVar8 = *plVar15;
      uVar17 = 0;
      do {
        puVar16 = *(undefined8 **)(lVar8 + uVar17 * 8);
        if ((param_3 == *(uint *)(puVar16 + 1)) &&
           (iVar7 = FUN_180222c00(*puVar16,param_2,uVar6 << 5), iVar7 == 0)) {
          return puVar16;
        }
        uVar12 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar12;
      } while (uVar12 < uVar1);
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar6;
    lVar8 = uVar6 << 5;
    if (SUB168(auVar5 * ZEXT816(0x20),8) != 0) {
      lVar8 = -1;
    }
    lVar8 = FUN_1802229a8(lVar8);
    if (lVar8 != 0) {
      lVar9 = FUN_1802229a8(0x10);
      if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar8,param_2,uVar6 << 5);
      }
      FUN_1802229d8(lVar8);
    }
  }
  return (undefined8 *)0x0;
}

