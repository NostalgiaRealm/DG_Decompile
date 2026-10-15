/*
 * FUN_1800c1c08 at 1800c1c08
 * undefined FUN_1800c1c08(void)
 * Address ranges: 1800c1c08-1800c21d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c1c08(undefined8 *param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined8 uVar24;
  
  iVar9 = FUN_180001590((longlong)param_1 + 0xc);
  if (iVar9 + *(int *)(param_1 + 1) != 0) {
    return;
  }
  if (((*(uint *)(param_1[3] + 0xe78) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar7 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar7 = true;
    iVar9 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar9 == 0) {
      FUN_180003398();
      bVar7 = true;
    }
  }
  lVar22 = param_1[3];
  uVar4 = *(uint *)(lVar22 + 0x6940);
  if (uVar4 == 0) goto LAB_1800c2160;
  uVar15 = 0;
  uVar13 = uVar4;
  do {
    uVar17 = uVar13 + uVar15 >> 1;
    puVar20 = *(undefined8 **)(*(longlong *)(lVar22 + 0x6938) + (ulonglong)uVar17 * 0x248);
    uVar8 = uVar17;
    if (puVar20 <= param_1) {
      if (param_1 <= puVar20) break;
      uVar15 = uVar17 + 1;
      uVar17 = uVar17 + 1;
      uVar8 = uVar13;
    }
    uVar13 = uVar8;
  } while (uVar13 != uVar15);
  if (((uVar17 == uVar4) ||
      (puVar20 = (undefined8 *)(*(longlong *)(lVar22 + 0x6938) + (ulonglong)uVar17 * 0x248),
      (undefined8 *)*puVar20 != param_1)) || (puVar1 = puVar20 + 2, puVar1 == (ulonglong *)0x0))
  goto LAB_1800c2160;
  uVar4 = *(uint *)(lVar22 + 0x6920);
  if (uVar4 == 0) {
LAB_1800c1da4:
    plVar23 = (longlong *)FUN_180102f80(0x10);
    if (plVar23 == (longlong *)0x0) goto LAB_1800c207c;
    *plVar23 = 0;
    plVar23[1] = 0;
    uVar4 = *(uint *)(lVar22 + 0x6920);
    uVar18 = puVar20[0x48];
    uVar19 = 0;
    if (uVar4 != 0) {
      uVar15 = 0;
      uVar13 = uVar4;
      do {
        uVar17 = uVar13 + uVar15 >> 1;
        uVar19 = (ulonglong)uVar17;
        uVar21 = *(ulonglong *)(*(longlong *)(lVar22 + 0x6918) + uVar19 * 0x18);
        if (uVar21 <= uVar18) {
          if (uVar18 <= uVar21) break;
          uVar15 = uVar17 + 1;
          uVar19 = (ulonglong)(uVar17 + 1);
          uVar17 = uVar13;
        }
        uVar13 = uVar17;
      } while (uVar13 != uVar15);
      if (((uint)uVar19 != uVar4) &&
         (puVar3 = (ulonglong *)(*(longlong *)(lVar22 + 0x6918) + uVar19 * 0x18), *puVar3 == uVar18)
         ) {
        puVar3[2] = (ulonglong)plVar23;
        goto LAB_1800c1f98;
      }
    }
    plVar14 = (longlong *)(lVar22 + 0x6918);
    uVar15 = *(uint *)(lVar22 + 0x6924);
    if (uVar15 == uVar4) {
      uVar4 = 0x10;
      if (uVar15 != 0) {
        uVar4 = uVar15 << 1;
      }
      lVar16 = thunk_FUN_180102f80((ulonglong)uVar4 * 0x18);
      if (lVar16 != 0) {
        uVar21 = 0;
        if (*(int *)(lVar22 + 0x6920) != 0) {
          do {
            uVar15 = (int)uVar21 + 1;
            puVar10 = (undefined8 *)(*(longlong *)(lVar22 + 0x6918) + uVar21 * 0x18);
            puVar11 = (undefined8 *)(lVar16 + uVar21 * 0x18);
            uVar24 = *puVar10;
            puVar11[1] = puVar10[1];
            *puVar11 = uVar24;
            puVar11[2] = puVar10[2];
            uVar21 = (ulonglong)uVar15;
          } while (uVar15 < *(uint *)(lVar22 + 0x6920));
        }
        thunk_FUN_180102fc0(*(undefined8 *)(lVar22 + 0x6910));
        *(longlong *)(lVar22 + 0x6910) = lVar16;
        *(longlong *)(lVar22 + 0x6918) = lVar16;
        *(uint *)(lVar22 + 0x6924) = uVar4;
      }
    }
    uVar21 = (ulonglong)*(uint *)(lVar22 + 0x6920);
    if (*(uint *)(lVar22 + 0x6924) != *(uint *)(lVar22 + 0x6920)) {
      while ((uint)uVar19 < (uint)uVar21) {
        uVar12 = (ulonglong)((uint)uVar21 - 1);
        puVar10 = (undefined8 *)(*(longlong *)(lVar22 + 0x6918) + uVar21 * 0x18);
        puVar11 = (undefined8 *)(*(longlong *)(lVar22 + 0x6918) + uVar12 * 0x18);
        uVar24 = *puVar11;
        puVar10[1] = puVar11[1];
        *puVar10 = uVar24;
        puVar10[2] = puVar11[2];
        uVar21 = uVar12;
      }
      *(int *)(lVar22 + 0x6920) = *(int *)(lVar22 + 0x6920) + 1;
      *(undefined8 *)(*plVar14 + uVar19 * 0x18 + 8) = puVar20[0x48];
      *(longlong **)(*plVar14 + uVar19 * 0x18 + 0x10) = plVar23;
      *(ulonglong *)(*plVar14 + uVar19 * 0x18) = uVar18;
    }
LAB_1800c1f98:
    puVar2 = (uint *)(plVar23 + 1);
    uVar4 = *(uint *)((longlong)plVar23 + 0xc);
    if (*puVar2 == uVar4) {
      uVar15 = uVar4 << 1;
      if (uVar4 == 0) {
        uVar15 = 0x10;
      }
      uVar18 = CONCAT44(0,uVar15);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar18;
      lVar16 = uVar18 * 0x238;
      if (SUB168(auVar5 * ZEXT816(0x238),8) != 0) {
        lVar16 = -1;
      }
      puVar10 = (undefined8 *)thunk_FUN_180102f80(lVar16);
      if (puVar10 != (undefined8 *)0x0) {
        puVar11 = puVar10;
        if (uVar15 != 0) {
          do {
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
            uVar18 = uVar18 - 1;
            *(undefined4 *)((longlong)puVar11 + 0x224) = 0;
            puVar11[0x45] = 0;
            puVar11[0x46] = 0;
            puVar11 = puVar11 + 0x47;
          } while (uVar18 != 0);
        }
        thunk_FUN_180001218(puVar10,*plVar23,(ulonglong)*(uint *)((longlong)plVar23 + 0xc) * 0x238);
        thunk_FUN_180102fc0(*plVar23);
        *(uint *)((longlong)plVar23 + 0xc) = uVar15;
        *plVar23 = (longlong)puVar10;
        goto LAB_1800c2038;
      }
      bVar6 = true;
    }
    else {
LAB_1800c2038:
      thunk_FUN_180001218(*plVar23 + (ulonglong)*puVar2 * 0x238,puVar1,0x238);
      *puVar2 = *puVar2 + 1;
      bVar6 = false;
    }
    (**(code **)(*(longlong *)puVar20[3] + 8))((longlong *)puVar20[3],0);
    if (bVar6) goto LAB_1800c207c;
  }
  else {
    uVar18 = puVar20[0x48];
    uVar15 = 0;
    uVar13 = uVar4;
    do {
      uVar17 = uVar13 + uVar15 >> 1;
      uVar19 = (ulonglong)uVar17;
      uVar21 = *(ulonglong *)(*(longlong *)(lVar22 + 0x6918) + uVar19 * 0x18);
      if (uVar21 <= uVar18) {
        if (uVar18 <= uVar21) break;
        uVar15 = uVar17 + 1;
        uVar19 = (ulonglong)(uVar17 + 1);
        uVar17 = uVar13;
      }
      uVar13 = uVar17;
    } while (uVar13 != uVar15);
    if ((((uint)uVar19 == uVar4) ||
        (puVar3 = (ulonglong *)(*(longlong *)(lVar22 + 0x6918) + uVar19 * 0x18), *puVar3 != uVar18))
       || (puVar3 = puVar3 + 2, puVar3 == (ulonglong *)0x0)) goto LAB_1800c1da4;
    plVar23 = (longlong *)*puVar3;
    if (plVar23 != (longlong *)0x0) goto LAB_1800c1f98;
LAB_1800c207c:
    puVar10 = (undefined8 *)puVar20[3];
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10,1);
    }
    thunk_FUN_180102fc0(puVar20[0x47]);
    FUN_180102fc0(puVar20[4],0x1270);
  }
  uVar4 = *(uint *)(lVar22 + 0x6940);
  if (uVar4 != 0) {
    uVar18 = *puVar1;
    uVar15 = 0;
    uVar13 = uVar4;
    do {
      uVar17 = uVar13 + uVar15 >> 1;
      uVar19 = *(ulonglong *)(*(longlong *)(lVar22 + 0x6938) + (ulonglong)uVar17 * 0x248);
      uVar8 = uVar17;
      if (uVar19 <= uVar18) {
        if (uVar18 <= uVar19) break;
        uVar15 = uVar17 + 1;
        uVar17 = uVar17 + 1;
        uVar8 = uVar13;
      }
      uVar13 = uVar8;
    } while (uVar13 != uVar15);
    if ((uVar17 != uVar4) &&
       (*(ulonglong *)(*(longlong *)(lVar22 + 0x6938) + (ulonglong)uVar17 * 0x248) == uVar18)) {
      uVar17 = uVar17 + 1;
      if (uVar17 < uVar4) {
        do {
          thunk_FUN_180001218(*(longlong *)(lVar22 + 0x6938) + (ulonglong)(uVar17 - 1) * 0x248,
                              *(longlong *)(lVar22 + 0x6938) + (ulonglong)uVar17 * 0x248,0x248);
          uVar17 = uVar17 + 1;
        } while (uVar17 < *(uint *)(lVar22 + 0x6940));
      }
      *(int *)(lVar22 + 0x6940) = *(int *)(lVar22 + 0x6940) + -1;
    }
  }
LAB_1800c2160:
  thunk_FUN_180102fc0(param_1[6]);
  *param_1 = &PTR_FUN_1802367f8;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_180102fc0(param_1,0x38);
  if (bVar7) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return;
}

