/*
 * FUN_1801e40e8 at 1801e40e8
 * undefined FUN_1801e40e8(void)
 * Address ranges: 1801e40e8-1801e42eb;1801e42fc-1801e45cf;1801e45e0-1801e45fb;1801e460c-1801e4633
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801e40e8(undefined8 *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
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
  uVar4 = *(uint *)(lVar20 + 0x68e8);
  if (uVar4 == 0) goto LAB_1801e430c;
  uVar14 = 0;
  uVar11 = uVar4;
  do {
    uVar15 = uVar11 + uVar14 >> 1;
    puVar19 = *(undefined8 **)(*(longlong *)(lVar20 + 0x68e0) + (ulonglong)uVar15 * 0x898);
    uVar7 = uVar15;
    if (puVar19 <= param_1) {
      if (param_1 <= puVar19) break;
      uVar14 = uVar15 + 1;
      uVar15 = uVar15 + 1;
      uVar7 = uVar11;
    }
    uVar11 = uVar7;
  } while (uVar11 != uVar14);
  if (((uVar15 == uVar4) ||
      (puVar19 = (undefined8 *)(*(longlong *)(lVar20 + 0x68e0) + (ulonglong)uVar15 * 0x898),
      (undefined8 *)*puVar19 != param_1)) || (puVar1 = puVar19 + 2, puVar1 == (ulonglong *)0x0))
  goto LAB_1801e430c;
  uVar4 = *(uint *)(lVar20 + 0x68c8);
  if (uVar4 == 0) {
LAB_1801e4368:
    plVar21 = (longlong *)FUN_1802229a8(0x10);
    uVar8 = 0;
    if (plVar21 != (longlong *)0x0) {
      *plVar21 = 0;
      plVar21[1] = 0;
      uVar4 = *(uint *)(lVar20 + 0x68c8);
      uVar16 = 0;
      uVar10 = puVar19[0x112];
      if (uVar4 != 0) {
        uVar14 = 0;
        uVar11 = uVar4;
        do {
          uVar15 = uVar11 + uVar14 >> 1;
          uVar16 = (ulonglong)uVar15;
          uVar18 = *(ulonglong *)(*(longlong *)(lVar20 + 0x68c0) + uVar16 * 0x18);
          if (uVar18 <= uVar10) {
            if (uVar10 <= uVar18) break;
            uVar14 = uVar15 + 1;
            uVar16 = (ulonglong)(uVar15 + 1);
            uVar15 = uVar11;
          }
          uVar11 = uVar15;
        } while (uVar11 != uVar14);
        if (((uint)uVar16 != uVar4) &&
           (puVar2 = (ulonglong *)(*(longlong *)(lVar20 + 0x68c0) + uVar16 * 0x18),
           *puVar2 == uVar10)) {
          puVar2[2] = (ulonglong)plVar21;
          goto LAB_1801e4538;
        }
      }
      plVar12 = (longlong *)(lVar20 + 0x68c0);
      uVar14 = *(uint *)(lVar20 + 0x68cc);
      if (uVar14 == uVar4) {
        uVar4 = 0x10;
        if (uVar14 != 0) {
          uVar4 = uVar14 << 1;
        }
        lVar17 = FUN_1802229a8((ulonglong)uVar4 * 0x18);
        if (lVar17 != 0) {
          uVar18 = 0;
          if (*(int *)(lVar20 + 0x68c8) != 0) {
            do {
              uVar14 = (int)uVar18 + 1;
              puVar13 = (undefined8 *)(*(longlong *)(lVar20 + 0x68c0) + uVar18 * 0x18);
              puVar3 = (undefined8 *)(lVar17 + uVar18 * 0x18);
              uVar8 = *puVar13;
              puVar3[1] = puVar13[1];
              *puVar3 = uVar8;
              puVar3[2] = puVar13[2];
              uVar18 = (ulonglong)uVar14;
            } while (uVar14 < *(uint *)(lVar20 + 0x68c8));
          }
          FUN_1802229d8(*(undefined8 *)(lVar20 + 0x68b8));
          *(longlong *)(lVar20 + 0x68b8) = lVar17;
          *(longlong *)(lVar20 + 0x68c0) = lVar17;
          *(uint *)(lVar20 + 0x68cc) = uVar4;
        }
      }
      uVar18 = (ulonglong)*(uint *)(lVar20 + 0x68c8);
      if (*(uint *)(lVar20 + 0x68cc) != *(uint *)(lVar20 + 0x68c8)) {
        while ((uint)uVar16 < (uint)uVar18) {
          uVar9 = (ulonglong)((uint)uVar18 - 1);
          puVar13 = (undefined8 *)(*(longlong *)(lVar20 + 0x68c0) + uVar18 * 0x18);
          puVar3 = (undefined8 *)(*(longlong *)(lVar20 + 0x68c0) + uVar9 * 0x18);
          uVar8 = *puVar3;
          puVar13[1] = puVar3[1];
          *puVar13 = uVar8;
          puVar13[2] = puVar3[2];
          uVar18 = uVar9;
        }
        *(int *)(lVar20 + 0x68c8) = *(int *)(lVar20 + 0x68c8) + 1;
        *(undefined8 *)(*plVar12 + uVar16 * 0x18 + 8) = puVar19[0x112];
        *(longlong **)(*plVar12 + uVar16 * 0x18 + 0x10) = plVar21;
        *(ulonglong *)(*plVar12 + uVar16 * 0x18) = uVar10;
      }
LAB_1801e4538:
      uVar4 = *(uint *)((longlong)plVar21 + 0xc);
      if (*(uint *)(plVar21 + 1) != uVar4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(*plVar21 + (ulonglong)*(uint *)(plVar21 + 1) * 0x888,puVar1,0x888);
      }
      uVar14 = uVar4 << 1;
      if (uVar4 == 0) {
        uVar14 = 0x10;
      }
      uVar16 = CONCAT44(0,uVar14);
      lVar17 = uVar16 * 0x888;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar16;
      if (SUB168(auVar5 * ZEXT816(0x888),8) != 0) {
        lVar17 = -1;
      }
      puVar19 = (undefined8 *)FUN_1802229a8(lVar17);
      uVar8 = 0;
      if (puVar19 != (undefined8 *)0x0) {
        puVar13 = puVar19;
        if (uVar14 != 0) {
          do {
            *puVar13 = 0;
            puVar13[1] = 0;
            puVar13[2] = 0;
            uVar16 = uVar16 - 1;
            *(undefined4 *)((longlong)puVar13 + 0x864) = 0;
            *(undefined2 *)(puVar13 + 3) = 0xffff;
            puVar13[0x10d] = 0;
            puVar13[0x10e] = 0;
            puVar13[0x10f] = 0;
            puVar13[0x110] = 0;
            puVar13 = puVar13 + 0x111;
          } while (uVar16 != 0);
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(puVar19,*plVar21,(ulonglong)*(uint *)((longlong)plVar21 + 0xc) * 0x888);
      }
    }
  }
  else {
    uVar16 = puVar19[0x112];
    uVar14 = 0;
    uVar11 = uVar4;
    do {
      uVar15 = uVar11 + uVar14 >> 1;
      uVar18 = (ulonglong)uVar15;
      uVar10 = *(ulonglong *)(*(longlong *)(lVar20 + 0x68c0) + uVar18 * 0x18);
      if (uVar10 <= uVar16) {
        if (uVar16 <= uVar10) break;
        uVar14 = uVar15 + 1;
        uVar18 = (ulonglong)(uVar15 + 1);
        uVar15 = uVar11;
      }
      uVar11 = uVar15;
    } while (uVar11 != uVar14);
    if ((((uint)uVar18 == uVar4) ||
        (puVar2 = (ulonglong *)(*(longlong *)(lVar20 + 0x68c0) + uVar18 * 0x18), *puVar2 != uVar16))
       || (puVar2 = puVar2 + 2, puVar2 == (ulonglong *)0x0)) goto LAB_1801e4368;
    plVar21 = (longlong *)*puVar2;
    if (plVar21 != (longlong *)0x0) goto LAB_1801e4538;
  }
  FUN_1801dbac8(uVar8,puVar1);
  uVar4 = *(uint *)(lVar20 + 0x68e8);
  if (uVar4 != 0) {
    uVar16 = *puVar1;
    uVar14 = 0;
    uVar11 = uVar4;
    do {
      uVar15 = uVar11 + uVar14 >> 1;
      uVar10 = *(ulonglong *)(*(longlong *)(lVar20 + 0x68e0) + (ulonglong)uVar15 * 0x898);
      uVar7 = uVar15;
      if (uVar10 <= uVar16) {
        if (uVar16 <= uVar10) break;
        uVar14 = uVar15 + 1;
        uVar15 = uVar15 + 1;
        uVar7 = uVar11;
      }
      uVar11 = uVar7;
    } while (uVar11 != uVar14);
    if ((uVar15 != uVar4) &&
       (*(ulonglong *)(*(longlong *)(lVar20 + 0x68e0) + (ulonglong)uVar15 * 0x898) == uVar16)) {
      if (uVar15 + 1 < uVar4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(*(longlong *)(lVar20 + 0x68e0) + (ulonglong)uVar15 * 0x898,
                            *(longlong *)(lVar20 + 0x68e0) + (ulonglong)(uVar15 + 1) * 0x898,0x898);
      }
      *(int *)(lVar20 + 0x68e8) = *(int *)(lVar20 + 0x68e8) + -1;
    }
  }
LAB_1801e430c:
  param_1[4] = 0;
  *param_1 = &PTR_FUN_18022f278;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1802229d8(param_1,0x30);
  if (bVar6) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return;
}

