/*
 * FUN_1801e46d8 at 1801e46d8
 * undefined FUN_1801e46d8(void)
 * Address ranges: 1801e46d8-1801e48e7;1801e48f8-1801e4bcb;1801e4bdc-1801e4bf7;1801e4c08-1801e4c4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801e46d8(undefined8 *param_1)

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
  ulonglong uVar10;
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
  undefined8 *puVar21;
  longlong lVar22;
  longlong *plVar23;
  
  lVar13 = param_1[3];
  uVar9 = FUN_1801042d0(param_1 + 1);
  iVar8 = (int)uVar9;
  if (*(int *)((longlong)param_1 + 0xc) + iVar8 != 0) goto LAB_1801e4c18;
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
  lVar22 = param_1[3];
  uVar4 = *(uint *)(lVar22 + 0x68e8);
  if (uVar4 != 0) {
    uVar16 = 0;
    uVar12 = uVar4;
    do {
      uVar17 = uVar12 + uVar16 >> 1;
      puVar21 = *(undefined8 **)(*(longlong *)(lVar22 + 0x68e0) + (ulonglong)uVar17 * 0x898);
      uVar7 = uVar17;
      if (puVar21 <= param_1) {
        if (param_1 <= puVar21) break;
        uVar16 = uVar17 + 1;
        uVar17 = uVar17 + 1;
        uVar7 = uVar12;
      }
      uVar12 = uVar7;
    } while (uVar12 != uVar16);
    if (((uVar17 != uVar4) &&
        (puVar21 = (undefined8 *)(*(longlong *)(lVar22 + 0x68e0) + (ulonglong)uVar17 * 0x898),
        (undefined8 *)*puVar21 == param_1)) && (puVar1 = puVar21 + 2, puVar1 != (ulonglong *)0x0)) {
      uVar4 = *(uint *)(lVar22 + 0x68c8);
      if (uVar4 == 0) {
LAB_1801e4964:
        plVar23 = (longlong *)FUN_1802229a8(0x10);
        uVar9 = 0;
        if (plVar23 != (longlong *)0x0) {
          *plVar23 = 0;
          plVar23[1] = 0;
          uVar4 = *(uint *)(lVar22 + 0x68c8);
          uVar18 = 0;
          uVar11 = puVar21[0x112];
          if (uVar4 != 0) {
            uVar16 = 0;
            uVar12 = uVar4;
            do {
              uVar17 = uVar12 + uVar16 >> 1;
              uVar18 = (ulonglong)uVar17;
              uVar20 = *(ulonglong *)(*(longlong *)(lVar22 + 0x68c0) + uVar18 * 0x18);
              if (uVar20 <= uVar11) {
                if (uVar11 <= uVar20) break;
                uVar16 = uVar17 + 1;
                uVar18 = (ulonglong)(uVar17 + 1);
                uVar17 = uVar12;
              }
              uVar12 = uVar17;
            } while (uVar12 != uVar16);
            if (((uint)uVar18 != uVar4) &&
               (puVar2 = (ulonglong *)(*(longlong *)(lVar22 + 0x68c0) + uVar18 * 0x18),
               *puVar2 == uVar11)) {
              puVar2[2] = (ulonglong)plVar23;
              goto LAB_1801e4b34;
            }
          }
          plVar14 = (longlong *)(lVar22 + 0x68c0);
          uVar16 = *(uint *)(lVar22 + 0x68cc);
          if (uVar16 == uVar4) {
            uVar4 = 0x10;
            if (uVar16 != 0) {
              uVar4 = uVar16 << 1;
            }
            lVar19 = FUN_1802229a8((ulonglong)uVar4 * 0x18);
            if (lVar19 != 0) {
              uVar20 = 0;
              if (*(int *)(lVar22 + 0x68c8) != 0) {
                do {
                  uVar16 = (int)uVar20 + 1;
                  puVar15 = (undefined8 *)(*(longlong *)(lVar22 + 0x68c0) + uVar20 * 0x18);
                  puVar3 = (undefined8 *)(lVar19 + uVar20 * 0x18);
                  uVar9 = *puVar15;
                  puVar3[1] = puVar15[1];
                  *puVar3 = uVar9;
                  puVar3[2] = puVar15[2];
                  uVar20 = (ulonglong)uVar16;
                } while (uVar16 < *(uint *)(lVar22 + 0x68c8));
              }
              FUN_1802229d8(*(undefined8 *)(lVar22 + 0x68b8));
              *(longlong *)(lVar22 + 0x68b8) = lVar19;
              *(longlong *)(lVar22 + 0x68c0) = lVar19;
              *(uint *)(lVar22 + 0x68cc) = uVar4;
            }
          }
          uVar20 = (ulonglong)*(uint *)(lVar22 + 0x68c8);
          if (*(uint *)(lVar22 + 0x68cc) != *(uint *)(lVar22 + 0x68c8)) {
            while ((uint)uVar18 < (uint)uVar20) {
              uVar10 = (ulonglong)((uint)uVar20 - 1);
              puVar15 = (undefined8 *)(*(longlong *)(lVar22 + 0x68c0) + uVar20 * 0x18);
              puVar3 = (undefined8 *)(*(longlong *)(lVar22 + 0x68c0) + uVar10 * 0x18);
              uVar9 = *puVar3;
              puVar15[1] = puVar3[1];
              *puVar15 = uVar9;
              puVar15[2] = puVar3[2];
              uVar20 = uVar10;
            }
            *(int *)(lVar22 + 0x68c8) = *(int *)(lVar22 + 0x68c8) + 1;
            *(undefined8 *)(*plVar14 + uVar18 * 0x18 + 8) = puVar21[0x112];
            *(longlong **)(*plVar14 + uVar18 * 0x18 + 0x10) = plVar23;
            *(ulonglong *)(*plVar14 + uVar18 * 0x18) = uVar11;
          }
LAB_1801e4b34:
          uVar4 = *(uint *)((longlong)plVar23 + 0xc);
          if (*(uint *)(plVar23 + 1) != uVar4) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_180104c48(*plVar23 + (ulonglong)*(uint *)(plVar23 + 1) * 0x888,puVar1,0x888);
          }
          uVar16 = uVar4 << 1;
          if (uVar4 == 0) {
            uVar16 = 0x10;
          }
          uVar18 = CONCAT44(0,uVar16);
          lVar19 = uVar18 * 0x888;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar18;
          if (SUB168(auVar5 * ZEXT816(0x888),8) != 0) {
            lVar19 = -1;
          }
          puVar21 = (undefined8 *)FUN_1802229a8(lVar19);
          uVar9 = 0;
          if (puVar21 != (undefined8 *)0x0) {
            puVar15 = puVar21;
            if (uVar16 != 0) {
              do {
                *puVar15 = 0;
                puVar15[1] = 0;
                puVar15[2] = 0;
                uVar18 = uVar18 - 1;
                *(undefined4 *)((longlong)puVar15 + 0x864) = 0;
                *(undefined2 *)(puVar15 + 3) = 0xffff;
                puVar15[0x10d] = 0;
                puVar15[0x10e] = 0;
                puVar15[0x10f] = 0;
                puVar15[0x110] = 0;
                puVar15 = puVar15 + 0x111;
              } while (uVar18 != 0);
            }
                    /* WARNING: Subroutine does not return */
            thunk_FUN_180104c48(puVar21,*plVar23,
                                (ulonglong)*(uint *)((longlong)plVar23 + 0xc) * 0x888);
          }
        }
      }
      else {
        uVar18 = puVar21[0x112];
        uVar16 = 0;
        uVar12 = uVar4;
        do {
          uVar17 = uVar12 + uVar16 >> 1;
          uVar20 = (ulonglong)uVar17;
          uVar11 = *(ulonglong *)(*(longlong *)(lVar22 + 0x68c0) + uVar20 * 0x18);
          if (uVar11 <= uVar18) {
            if (uVar18 <= uVar11) break;
            uVar16 = uVar17 + 1;
            uVar20 = (ulonglong)(uVar17 + 1);
            uVar17 = uVar12;
          }
          uVar12 = uVar17;
        } while (uVar12 != uVar16);
        if ((((uint)uVar20 == uVar4) ||
            (puVar2 = (ulonglong *)(*(longlong *)(lVar22 + 0x68c0) + uVar20 * 0x18),
            *puVar2 != uVar18)) || (puVar2 = puVar2 + 2, puVar2 == (ulonglong *)0x0))
        goto LAB_1801e4964;
        plVar23 = (longlong *)*puVar2;
        if (plVar23 != (longlong *)0x0) goto LAB_1801e4b34;
      }
      FUN_1801dbac8(uVar9,puVar1);
      uVar4 = *(uint *)(lVar22 + 0x68e8);
      if (uVar4 != 0) {
        uVar18 = *puVar1;
        uVar16 = 0;
        uVar12 = uVar4;
        do {
          uVar17 = uVar12 + uVar16 >> 1;
          uVar11 = *(ulonglong *)(*(longlong *)(lVar22 + 0x68e0) + (ulonglong)uVar17 * 0x898);
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
           (*(ulonglong *)(*(longlong *)(lVar22 + 0x68e0) + (ulonglong)uVar17 * 0x898) == uVar18)) {
          if (uVar17 + 1 < uVar4) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_180104c48(*(longlong *)(lVar22 + 0x68e0) + (ulonglong)uVar17 * 0x898,
                                *(longlong *)(lVar22 + 0x68e0) + (ulonglong)(uVar17 + 1) * 0x898,
                                0x898);
          }
          *(int *)(lVar22 + 0x68e8) = *(int *)(lVar22 + 0x68e8) + -1;
        }
      }
    }
  }
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
LAB_1801e4c18:
  if (iVar8 == 0) {
    FUN_1801c3098(lVar13 + 0x6838);
  }
  return iVar8;
}

