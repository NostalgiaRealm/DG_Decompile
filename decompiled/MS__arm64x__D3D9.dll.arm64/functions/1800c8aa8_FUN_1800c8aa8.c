/*
 * FUN_1800c8aa8 at 1800c8aa8
 * undefined FUN_1800c8aa8(void)
 * Address ranges: 1800c8aa8-1800c8fcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c8aa8(undefined8 *param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *plVar22;
  
  uVar9 = FUN_180001590((longlong)param_1 + 0xc);
  if ((int)uVar9 + *(int *)(param_1 + 1) != 0) {
    return;
  }
  if (((*(uint *)(param_1[3] + 0xe78) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar7 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar7 = true;
    uVar9 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if ((int)uVar9 == 0) {
      uVar9 = FUN_180003398();
    }
  }
  lVar20 = param_1[3];
  uVar5 = *(uint *)(lVar20 + 0x68e8);
  if (uVar5 == 0) goto LAB_1800c8cec;
  uVar13 = 0;
  uVar11 = uVar5;
  do {
    uVar15 = uVar11 + uVar13 >> 1;
    puVar18 = *(undefined8 **)(*(longlong *)(lVar20 + 0x68e0) + (ulonglong)uVar15 * 0x898);
    uVar8 = uVar15;
    if (puVar18 <= param_1) {
      if (param_1 <= puVar18) break;
      uVar13 = uVar15 + 1;
      uVar15 = uVar15 + 1;
      uVar8 = uVar11;
    }
    uVar11 = uVar8;
  } while (uVar11 != uVar13);
  if (((uVar15 == uVar5) ||
      (puVar18 = (undefined8 *)(*(longlong *)(lVar20 + 0x68e0) + (ulonglong)uVar15 * 0x898),
      (undefined8 *)*puVar18 != param_1)) || (puVar1 = puVar18 + 2, puVar1 == (ulonglong *)0x0))
  goto LAB_1800c8cec;
  uVar5 = *(uint *)(lVar20 + 0x68c8);
  if (uVar5 == 0) {
LAB_1800c8d28:
    plVar21 = (longlong *)FUN_180102f80(0x10);
    uVar9 = 0;
    if (plVar21 == (longlong *)0x0) goto LAB_1800c8c2c;
    *plVar21 = 0;
    plVar21[1] = 0;
    uVar5 = *(uint *)(lVar20 + 0x68c8);
    uVar16 = 0;
    uVar17 = puVar18[0x112];
    if (uVar5 != 0) {
      uVar13 = 0;
      uVar11 = uVar5;
      do {
        uVar15 = uVar11 + uVar13 >> 1;
        uVar16 = (ulonglong)uVar15;
        uVar19 = *(ulonglong *)(*(longlong *)(lVar20 + 0x68c0) + uVar16 * 0x18);
        if (uVar19 <= uVar17) {
          if (uVar17 <= uVar19) break;
          uVar13 = uVar15 + 1;
          uVar16 = (ulonglong)(uVar15 + 1);
          uVar15 = uVar11;
        }
        uVar11 = uVar15;
      } while (uVar11 != uVar13);
      if (((uint)uVar16 != uVar5) &&
         (puVar3 = (ulonglong *)(*(longlong *)(lVar20 + 0x68c0) + uVar16 * 0x18), *puVar3 == uVar17)
         ) {
        puVar3[2] = (ulonglong)plVar21;
        goto LAB_1800c8ee4;
      }
    }
    plVar22 = (longlong *)(lVar20 + 0x68c0);
    uVar13 = *(uint *)(lVar20 + 0x68cc);
    if (uVar13 == uVar5) {
      uVar5 = 0x10;
      if (uVar13 != 0) {
        uVar5 = uVar13 << 1;
      }
      lVar14 = thunk_FUN_180102f80((ulonglong)uVar5 * 0x18);
      if (lVar14 != 0) {
        uVar19 = 0;
        if (*(int *)(lVar20 + 0x68c8) != 0) {
          do {
            uVar13 = (int)uVar19 + 1;
            puVar12 = (undefined8 *)(*(longlong *)(lVar20 + 0x68c0) + uVar19 * 0x18);
            puVar4 = (undefined8 *)(lVar14 + uVar19 * 0x18);
            uVar9 = *puVar12;
            puVar4[1] = puVar12[1];
            *puVar4 = uVar9;
            puVar4[2] = puVar12[2];
            uVar19 = (ulonglong)uVar13;
          } while (uVar13 < *(uint *)(lVar20 + 0x68c8));
        }
        thunk_FUN_180102fc0(*(undefined8 *)(lVar20 + 0x68b8));
        *(longlong *)(lVar20 + 0x68b8) = lVar14;
        *(longlong *)(lVar20 + 0x68c0) = lVar14;
        *(uint *)(lVar20 + 0x68cc) = uVar5;
      }
    }
    uVar19 = (ulonglong)*(uint *)(lVar20 + 0x68c8);
    if (*(uint *)(lVar20 + 0x68cc) != *(uint *)(lVar20 + 0x68c8)) {
      while ((uint)uVar16 < (uint)uVar19) {
        uVar10 = (ulonglong)((uint)uVar19 - 1);
        puVar12 = (undefined8 *)(*(longlong *)(lVar20 + 0x68c0) + uVar19 * 0x18);
        puVar4 = (undefined8 *)(*(longlong *)(lVar20 + 0x68c0) + uVar10 * 0x18);
        uVar9 = *puVar4;
        puVar12[1] = puVar4[1];
        *puVar12 = uVar9;
        puVar12[2] = puVar4[2];
        uVar19 = uVar10;
      }
      *(int *)(lVar20 + 0x68c8) = *(int *)(lVar20 + 0x68c8) + 1;
      *(undefined8 *)(*plVar22 + uVar16 * 0x18 + 8) = puVar18[0x112];
      *(longlong **)(*plVar22 + uVar16 * 0x18 + 0x10) = plVar21;
      *(ulonglong *)(*plVar22 + uVar16 * 0x18) = uVar17;
    }
LAB_1800c8ee4:
    puVar2 = (uint *)(plVar21 + 1);
    uVar5 = *(uint *)((longlong)plVar21 + 0xc);
    if (*puVar2 == uVar5) {
      uVar13 = uVar5 << 1;
      if (uVar5 == 0) {
        uVar13 = 0x10;
      }
      uVar16 = CONCAT44(0,uVar13);
      lVar14 = uVar16 * 0x888;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar16;
      if (SUB168(auVar6 * ZEXT816(0x888),8) != 0) {
        lVar14 = -1;
      }
      puVar18 = (undefined8 *)thunk_FUN_180102f80(lVar14);
      uVar9 = 0;
      if (puVar18 == (undefined8 *)0x0) goto LAB_1800c8c2c;
      puVar12 = puVar18;
      if (uVar13 != 0) {
        do {
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = 0;
          uVar16 = uVar16 - 1;
          *(undefined4 *)((longlong)puVar12 + 0x864) = 0;
          *(undefined2 *)(puVar12 + 3) = 0xffff;
          puVar12[0x10d] = 0;
          puVar12[0x10e] = 0;
          puVar12[0x10f] = 0;
          puVar12[0x110] = 0;
          puVar12 = puVar12 + 0x111;
        } while (uVar16 != 0);
      }
      thunk_FUN_180001218(puVar18,*plVar21,(ulonglong)*(uint *)((longlong)plVar21 + 0xc) * 0x888);
      thunk_FUN_180102fc0(*plVar21);
      *plVar21 = (longlong)puVar18;
      *(uint *)((longlong)plVar21 + 0xc) = uVar13;
    }
    thunk_FUN_180001218(*plVar21 + (ulonglong)*puVar2 * 0x888,puVar1,0x888);
    *puVar2 = *puVar2 + 1;
  }
  else {
    uVar16 = puVar18[0x112];
    uVar13 = 0;
    uVar11 = uVar5;
    do {
      uVar15 = uVar11 + uVar13 >> 1;
      uVar17 = (ulonglong)uVar15;
      uVar19 = *(ulonglong *)(*(longlong *)(lVar20 + 0x68c0) + uVar17 * 0x18);
      if (uVar19 <= uVar16) {
        if (uVar16 <= uVar19) break;
        uVar13 = uVar15 + 1;
        uVar17 = (ulonglong)(uVar15 + 1);
        uVar15 = uVar11;
      }
      uVar11 = uVar15;
    } while (uVar11 != uVar13);
    if ((((uint)uVar17 == uVar5) ||
        (puVar3 = (ulonglong *)(*(longlong *)(lVar20 + 0x68c0) + uVar17 * 0x18), *puVar3 != uVar16))
       || (puVar3 = puVar3 + 2, puVar3 == (ulonglong *)0x0)) goto LAB_1800c8d28;
    plVar21 = (longlong *)*puVar3;
    if (plVar21 != (longlong *)0x0) goto LAB_1800c8ee4;
LAB_1800c8c2c:
    FUN_1800c09f8(uVar9,puVar1);
  }
  uVar5 = *(uint *)(lVar20 + 0x68e8);
  if (uVar5 != 0) {
    uVar16 = *puVar1;
    uVar13 = 0;
    uVar11 = uVar5;
    do {
      uVar15 = uVar11 + uVar13 >> 1;
      uVar17 = *(ulonglong *)(*(longlong *)(lVar20 + 0x68e0) + (ulonglong)uVar15 * 0x898);
      uVar8 = uVar15;
      if (uVar17 <= uVar16) {
        if (uVar16 <= uVar17) break;
        uVar13 = uVar15 + 1;
        uVar15 = uVar15 + 1;
        uVar8 = uVar11;
      }
      uVar11 = uVar8;
    } while (uVar11 != uVar13);
    if ((uVar15 != uVar5) &&
       (*(ulonglong *)(*(longlong *)(lVar20 + 0x68e0) + (ulonglong)uVar15 * 0x898) == uVar16)) {
      uVar15 = uVar15 + 1;
      if (uVar15 < uVar5) {
        do {
          thunk_FUN_180001218(*(longlong *)(lVar20 + 0x68e0) + (ulonglong)(uVar15 - 1) * 0x898,
                              *(longlong *)(lVar20 + 0x68e0) + (ulonglong)uVar15 * 0x898,0x898);
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(uint *)(lVar20 + 0x68e8));
      }
      *(int *)(lVar20 + 0x68e8) = *(int *)(lVar20 + 0x68e8) + -1;
    }
  }
LAB_1800c8cec:
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
  return;
}

