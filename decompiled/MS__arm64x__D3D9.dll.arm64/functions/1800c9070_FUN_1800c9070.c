/*
 * FUN_1800c9070 at 1800c9070
 * undefined FUN_1800c9070(void)
 * Address ranges: 1800c9070-1800c95bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c9070(undefined8 *param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong *plVar24;
  
  lVar13 = param_1[3];
  uVar10 = FUN_180001590(param_1 + 1);
  iVar9 = (int)uVar10;
  if (*(int *)((longlong)param_1 + 0xc) + iVar9 != 0) goto LAB_1800c9588;
  if (((*(uint *)(param_1[3] + 0xe78) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar7 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar7 = true;
    uVar10 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if ((int)uVar10 == 0) {
      uVar10 = FUN_180003398();
    }
  }
  lVar22 = param_1[3];
  uVar5 = *(uint *)(lVar22 + 0x68e8);
  if (uVar5 != 0) {
    uVar15 = 0;
    uVar12 = uVar5;
    do {
      uVar17 = uVar12 + uVar15 >> 1;
      puVar20 = *(undefined8 **)(*(longlong *)(lVar22 + 0x68e0) + (ulonglong)uVar17 * 0x898);
      uVar8 = uVar17;
      if (puVar20 <= param_1) {
        if (param_1 <= puVar20) break;
        uVar15 = uVar17 + 1;
        uVar17 = uVar17 + 1;
        uVar8 = uVar12;
      }
      uVar12 = uVar8;
    } while (uVar12 != uVar15);
    if (((uVar17 != uVar5) &&
        (puVar20 = (undefined8 *)(*(longlong *)(lVar22 + 0x68e0) + (ulonglong)uVar17 * 0x898),
        (undefined8 *)*puVar20 == param_1)) && (puVar1 = puVar20 + 2, puVar1 != (ulonglong *)0x0)) {
      uVar5 = *(uint *)(lVar22 + 0x68c8);
      if (uVar5 == 0) {
LAB_1800c92fc:
        plVar23 = (longlong *)FUN_180102f80(0x10);
        uVar10 = 0;
        if (plVar23 == (longlong *)0x0) goto LAB_1800c9200;
        *plVar23 = 0;
        plVar23[1] = 0;
        uVar5 = *(uint *)(lVar22 + 0x68c8);
        uVar18 = 0;
        uVar19 = puVar20[0x112];
        if (uVar5 != 0) {
          uVar15 = 0;
          uVar12 = uVar5;
          do {
            uVar17 = uVar12 + uVar15 >> 1;
            uVar18 = (ulonglong)uVar17;
            uVar21 = *(ulonglong *)(*(longlong *)(lVar22 + 0x68c0) + uVar18 * 0x18);
            if (uVar21 <= uVar19) {
              if (uVar19 <= uVar21) break;
              uVar15 = uVar17 + 1;
              uVar18 = (ulonglong)(uVar17 + 1);
              uVar17 = uVar12;
            }
            uVar12 = uVar17;
          } while (uVar12 != uVar15);
          if (((uint)uVar18 != uVar5) &&
             (puVar3 = (ulonglong *)(*(longlong *)(lVar22 + 0x68c0) + uVar18 * 0x18),
             *puVar3 == uVar19)) {
            puVar3[2] = (ulonglong)plVar23;
            goto LAB_1800c94b8;
          }
        }
        plVar24 = (longlong *)(lVar22 + 0x68c0);
        uVar15 = *(uint *)(lVar22 + 0x68cc);
        if (uVar15 == uVar5) {
          uVar5 = 0x10;
          if (uVar15 != 0) {
            uVar5 = uVar15 << 1;
          }
          lVar16 = thunk_FUN_180102f80((ulonglong)uVar5 * 0x18);
          if (lVar16 != 0) {
            uVar21 = 0;
            if (*(int *)(lVar22 + 0x68c8) != 0) {
              do {
                uVar15 = (int)uVar21 + 1;
                puVar14 = (undefined8 *)(*(longlong *)(lVar22 + 0x68c0) + uVar21 * 0x18);
                puVar4 = (undefined8 *)(lVar16 + uVar21 * 0x18);
                uVar10 = *puVar14;
                puVar4[1] = puVar14[1];
                *puVar4 = uVar10;
                puVar4[2] = puVar14[2];
                uVar21 = (ulonglong)uVar15;
              } while (uVar15 < *(uint *)(lVar22 + 0x68c8));
            }
            thunk_FUN_180102fc0(*(undefined8 *)(lVar22 + 0x68b8));
            *(longlong *)(lVar22 + 0x68b8) = lVar16;
            *(longlong *)(lVar22 + 0x68c0) = lVar16;
            *(uint *)(lVar22 + 0x68cc) = uVar5;
          }
        }
        uVar21 = (ulonglong)*(uint *)(lVar22 + 0x68c8);
        if (*(uint *)(lVar22 + 0x68cc) != *(uint *)(lVar22 + 0x68c8)) {
          while ((uint)uVar18 < (uint)uVar21) {
            uVar11 = (ulonglong)((uint)uVar21 - 1);
            puVar14 = (undefined8 *)(*(longlong *)(lVar22 + 0x68c0) + uVar21 * 0x18);
            puVar4 = (undefined8 *)(*(longlong *)(lVar22 + 0x68c0) + uVar11 * 0x18);
            uVar10 = *puVar4;
            puVar14[1] = puVar4[1];
            *puVar14 = uVar10;
            puVar14[2] = puVar4[2];
            uVar21 = uVar11;
          }
          *(int *)(lVar22 + 0x68c8) = *(int *)(lVar22 + 0x68c8) + 1;
          *(undefined8 *)(*plVar24 + uVar18 * 0x18 + 8) = puVar20[0x112];
          *(longlong **)(*plVar24 + uVar18 * 0x18 + 0x10) = plVar23;
          *(ulonglong *)(*plVar24 + uVar18 * 0x18) = uVar19;
        }
LAB_1800c94b8:
        puVar2 = (uint *)(plVar23 + 1);
        uVar5 = *(uint *)((longlong)plVar23 + 0xc);
        if (*puVar2 == uVar5) {
          uVar15 = uVar5 << 1;
          if (uVar5 == 0) {
            uVar15 = 0x10;
          }
          uVar18 = CONCAT44(0,uVar15);
          lVar16 = uVar18 * 0x888;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar18;
          if (SUB168(auVar6 * ZEXT816(0x888),8) != 0) {
            lVar16 = -1;
          }
          puVar20 = (undefined8 *)thunk_FUN_180102f80(lVar16);
          uVar10 = 0;
          if (puVar20 == (undefined8 *)0x0) goto LAB_1800c9200;
          puVar14 = puVar20;
          if (uVar15 != 0) {
            do {
              *puVar14 = 0;
              puVar14[1] = 0;
              puVar14[2] = 0;
              uVar18 = uVar18 - 1;
              *(undefined4 *)((longlong)puVar14 + 0x864) = 0;
              *(undefined2 *)(puVar14 + 3) = 0xffff;
              puVar14[0x10d] = 0;
              puVar14[0x10e] = 0;
              puVar14[0x10f] = 0;
              puVar14[0x110] = 0;
              puVar14 = puVar14 + 0x111;
            } while (uVar18 != 0);
          }
          thunk_FUN_180001218(puVar20,*plVar23,(ulonglong)*(uint *)((longlong)plVar23 + 0xc) * 0x888
                             );
          thunk_FUN_180102fc0(*plVar23);
          *plVar23 = (longlong)puVar20;
          *(uint *)((longlong)plVar23 + 0xc) = uVar15;
        }
        thunk_FUN_180001218(*plVar23 + (ulonglong)*puVar2 * 0x888,puVar1,0x888);
        *puVar2 = *puVar2 + 1;
      }
      else {
        uVar18 = puVar20[0x112];
        uVar15 = 0;
        uVar12 = uVar5;
        do {
          uVar17 = uVar12 + uVar15 >> 1;
          uVar19 = (ulonglong)uVar17;
          uVar21 = *(ulonglong *)(*(longlong *)(lVar22 + 0x68c0) + uVar19 * 0x18);
          if (uVar21 <= uVar18) {
            if (uVar18 <= uVar21) break;
            uVar15 = uVar17 + 1;
            uVar19 = (ulonglong)(uVar17 + 1);
            uVar17 = uVar12;
          }
          uVar12 = uVar17;
        } while (uVar12 != uVar15);
        if ((((uint)uVar19 == uVar5) ||
            (puVar3 = (ulonglong *)(*(longlong *)(lVar22 + 0x68c0) + uVar19 * 0x18),
            *puVar3 != uVar18)) || (puVar3 = puVar3 + 2, puVar3 == (ulonglong *)0x0))
        goto LAB_1800c92fc;
        plVar23 = (longlong *)*puVar3;
        if (plVar23 != (longlong *)0x0) goto LAB_1800c94b8;
LAB_1800c9200:
        FUN_1800c09f8(uVar10,puVar1);
      }
      uVar5 = *(uint *)(lVar22 + 0x68e8);
      if (uVar5 != 0) {
        uVar18 = *puVar1;
        uVar15 = 0;
        uVar12 = uVar5;
        do {
          uVar17 = uVar12 + uVar15 >> 1;
          uVar19 = *(ulonglong *)(*(longlong *)(lVar22 + 0x68e0) + (ulonglong)uVar17 * 0x898);
          uVar8 = uVar17;
          if (uVar19 <= uVar18) {
            if (uVar18 <= uVar19) break;
            uVar15 = uVar17 + 1;
            uVar17 = uVar17 + 1;
            uVar8 = uVar12;
          }
          uVar12 = uVar8;
        } while (uVar12 != uVar15);
        if ((uVar17 != uVar5) &&
           (*(ulonglong *)(*(longlong *)(lVar22 + 0x68e0) + (ulonglong)uVar17 * 0x898) == uVar18)) {
          uVar17 = uVar17 + 1;
          if (uVar17 < uVar5) {
            do {
              thunk_FUN_180001218(*(longlong *)(lVar22 + 0x68e0) + (ulonglong)(uVar17 - 1) * 0x898,
                                  *(longlong *)(lVar22 + 0x68e0) + (ulonglong)uVar17 * 0x898,0x898);
              uVar17 = uVar17 + 1;
            } while (uVar17 < *(uint *)(lVar22 + 0x68e8));
          }
          *(int *)(lVar22 + 0x68e8) = *(int *)(lVar22 + 0x68e8) + -1;
        }
      }
    }
  }
  param_1[4] = 0;
  *param_1 = &PTR_FUN_180236c60;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_180102fc0(param_1,0x30);
  if (bVar7) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
LAB_1800c9588:
  if (iVar9 == 0) {
    FUN_1800a9f28(lVar13 + 0x6838);
  }
  return iVar9;
}

