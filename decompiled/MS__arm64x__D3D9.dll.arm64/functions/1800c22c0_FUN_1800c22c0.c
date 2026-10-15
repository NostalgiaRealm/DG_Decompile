/*
 * FUN_1800c22c0 at 1800c22c0
 * undefined FUN_1800c22c0(void)
 * Address ranges: 1800c22c0-1800c28bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c22c0(undefined8 *param_1)

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
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong *plVar25;
  undefined8 uVar26;
  
  lVar15 = param_1[3];
  iVar9 = FUN_180001590(param_1 + 1);
  if (*(int *)((longlong)param_1 + 0xc) + iVar9 != 0) goto LAB_1800c2884;
  if (((*(uint *)(param_1[3] + 0xe78) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar7 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar7 = true;
    iVar10 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar10 == 0) {
      FUN_180003398();
      bVar7 = true;
    }
  }
  lVar24 = param_1[3];
  uVar4 = *(uint *)(lVar24 + 0x6940);
  if (uVar4 != 0) {
    uVar17 = 0;
    uVar14 = uVar4;
    do {
      uVar19 = uVar14 + uVar17 >> 1;
      puVar22 = *(undefined8 **)(*(longlong *)(lVar24 + 0x6938) + (ulonglong)uVar19 * 0x248);
      uVar8 = uVar19;
      if (puVar22 <= param_1) {
        if (param_1 <= puVar22) break;
        uVar17 = uVar19 + 1;
        uVar19 = uVar19 + 1;
        uVar8 = uVar14;
      }
      uVar14 = uVar8;
    } while (uVar14 != uVar17);
    if (((uVar19 != uVar4) &&
        (puVar22 = (undefined8 *)(*(longlong *)(lVar24 + 0x6938) + (ulonglong)uVar19 * 0x248),
        (undefined8 *)*puVar22 == param_1)) && (puVar1 = puVar22 + 2, puVar1 != (ulonglong *)0x0)) {
      uVar4 = *(uint *)(lVar24 + 0x6920);
      if (uVar4 == 0) {
LAB_1800c2470:
        plVar25 = (longlong *)FUN_180102f80(0x10);
        if (plVar25 == (longlong *)0x0) goto LAB_1800c2744;
        *plVar25 = 0;
        plVar25[1] = 0;
        uVar21 = puVar22[0x48];
        uVar4 = *(uint *)(lVar24 + 0x6920);
        uVar20 = 0;
        if (uVar4 != 0) {
          uVar17 = 0;
          uVar14 = uVar4;
          do {
            uVar19 = uVar14 + uVar17 >> 1;
            uVar20 = (ulonglong)uVar19;
            uVar23 = *(ulonglong *)(*(longlong *)(lVar24 + 0x6918) + uVar20 * 0x18);
            if (uVar23 <= uVar21) {
              if (uVar21 <= uVar23) break;
              uVar17 = uVar19 + 1;
              uVar20 = (ulonglong)(uVar19 + 1);
              uVar19 = uVar14;
            }
            uVar14 = uVar19;
          } while (uVar14 != uVar17);
          if (((uint)uVar20 != uVar4) &&
             (puVar3 = (ulonglong *)(*(longlong *)(lVar24 + 0x6918) + uVar20 * 0x18),
             *puVar3 == uVar21)) {
            puVar3[2] = (ulonglong)plVar25;
            goto LAB_1800c2660;
          }
        }
        plVar16 = (longlong *)(lVar24 + 0x6918);
        uVar17 = *(uint *)(lVar24 + 0x6924);
        if (uVar17 == uVar4) {
          uVar4 = 0x10;
          if (uVar17 != 0) {
            uVar4 = uVar17 << 1;
          }
          lVar18 = thunk_FUN_180102f80((ulonglong)uVar4 * 0x18);
          if (lVar18 != 0) {
            uVar23 = 0;
            if (*(int *)(lVar24 + 0x6920) != 0) {
              do {
                uVar17 = (int)uVar23 + 1;
                puVar11 = (undefined8 *)(*(longlong *)(lVar24 + 0x6918) + uVar23 * 0x18);
                puVar12 = (undefined8 *)(lVar18 + uVar23 * 0x18);
                uVar26 = *puVar11;
                puVar12[1] = puVar11[1];
                *puVar12 = uVar26;
                puVar12[2] = puVar11[2];
                uVar23 = (ulonglong)uVar17;
              } while (uVar17 < *(uint *)(lVar24 + 0x6920));
            }
            thunk_FUN_180102fc0(*(undefined8 *)(lVar24 + 0x6910));
            *(longlong *)(lVar24 + 0x6910) = lVar18;
            *(longlong *)(lVar24 + 0x6918) = lVar18;
            *(uint *)(lVar24 + 0x6924) = uVar4;
          }
        }
        uVar23 = (ulonglong)*(uint *)(lVar24 + 0x6920);
        if (*(uint *)(lVar24 + 0x6924) != *(uint *)(lVar24 + 0x6920)) {
          while ((uint)uVar20 < (uint)uVar23) {
            uVar13 = (ulonglong)((uint)uVar23 - 1);
            puVar11 = (undefined8 *)(*(longlong *)(lVar24 + 0x6918) + uVar23 * 0x18);
            puVar12 = (undefined8 *)(*(longlong *)(lVar24 + 0x6918) + uVar13 * 0x18);
            uVar26 = *puVar12;
            puVar11[1] = puVar12[1];
            *puVar11 = uVar26;
            puVar11[2] = puVar12[2];
            uVar23 = uVar13;
          }
          *(int *)(lVar24 + 0x6920) = *(int *)(lVar24 + 0x6920) + 1;
          *(undefined8 *)(*plVar16 + uVar20 * 0x18 + 8) = puVar22[0x48];
          *(longlong **)(*plVar16 + uVar20 * 0x18 + 0x10) = plVar25;
          *(ulonglong *)(*plVar16 + uVar20 * 0x18) = uVar21;
        }
LAB_1800c2660:
        puVar2 = (uint *)(plVar25 + 1);
        uVar4 = *(uint *)((longlong)plVar25 + 0xc);
        if (*puVar2 == uVar4) {
          uVar17 = uVar4 << 1;
          if (uVar4 == 0) {
            uVar17 = 0x10;
          }
          uVar20 = CONCAT44(0,uVar17);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar20;
          lVar18 = uVar20 * 0x238;
          if (SUB168(auVar5 * ZEXT816(0x238),8) != 0) {
            lVar18 = -1;
          }
          puVar11 = (undefined8 *)thunk_FUN_180102f80(lVar18);
          if (puVar11 != (undefined8 *)0x0) {
            puVar12 = puVar11;
            if (uVar17 != 0) {
              do {
                *puVar12 = 0;
                puVar12[1] = 0;
                puVar12[2] = 0;
                uVar20 = uVar20 - 1;
                *(undefined4 *)((longlong)puVar12 + 0x224) = 0;
                puVar12[0x45] = 0;
                puVar12[0x46] = 0;
                puVar12 = puVar12 + 0x47;
              } while (uVar20 != 0);
            }
            thunk_FUN_180001218(puVar11,*plVar25,
                                (ulonglong)*(uint *)((longlong)plVar25 + 0xc) * 0x238);
            thunk_FUN_180102fc0(*plVar25);
            *(uint *)((longlong)plVar25 + 0xc) = uVar17;
            *plVar25 = (longlong)puVar11;
            goto LAB_1800c2700;
          }
          bVar6 = true;
        }
        else {
LAB_1800c2700:
          thunk_FUN_180001218(*plVar25 + (ulonglong)*puVar2 * 0x238,puVar1,0x238);
          bVar6 = false;
          *puVar2 = *puVar2 + 1;
        }
        (**(code **)(*(longlong *)puVar22[3] + 8))((longlong *)puVar22[3],0);
        if (bVar6) goto LAB_1800c2744;
      }
      else {
        uVar20 = puVar22[0x48];
        uVar17 = 0;
        uVar14 = uVar4;
        do {
          uVar19 = uVar14 + uVar17 >> 1;
          uVar21 = (ulonglong)uVar19;
          uVar23 = *(ulonglong *)(*(longlong *)(lVar24 + 0x6918) + uVar21 * 0x18);
          if (uVar23 <= uVar20) {
            if (uVar20 <= uVar23) break;
            uVar17 = uVar19 + 1;
            uVar21 = (ulonglong)(uVar19 + 1);
            uVar19 = uVar14;
          }
          uVar14 = uVar19;
        } while (uVar14 != uVar17);
        if ((((uint)uVar21 == uVar4) ||
            (puVar3 = (ulonglong *)(*(longlong *)(lVar24 + 0x6918) + uVar21 * 0x18),
            *puVar3 != uVar20)) || (puVar3 = puVar3 + 2, puVar3 == (ulonglong *)0x0))
        goto LAB_1800c2470;
        plVar25 = (longlong *)*puVar3;
        if (plVar25 != (longlong *)0x0) goto LAB_1800c2660;
LAB_1800c2744:
        puVar11 = (undefined8 *)puVar22[3];
        if (puVar11 != (undefined8 *)0x0) {
          (**(code **)*puVar11)(puVar11,1);
        }
        thunk_FUN_180102fc0(puVar22[0x47]);
        FUN_180102fc0(puVar22[4],0x1270);
      }
      uVar4 = *(uint *)(lVar24 + 0x6940);
      if (uVar4 != 0) {
        uVar20 = *puVar1;
        uVar17 = 0;
        uVar14 = uVar4;
        do {
          uVar19 = uVar14 + uVar17 >> 1;
          uVar21 = *(ulonglong *)(*(longlong *)(lVar24 + 0x6938) + (ulonglong)uVar19 * 0x248);
          uVar8 = uVar19;
          if (uVar21 <= uVar20) {
            if (uVar20 <= uVar21) break;
            uVar17 = uVar19 + 1;
            uVar19 = uVar19 + 1;
            uVar8 = uVar14;
          }
          uVar14 = uVar8;
        } while (uVar14 != uVar17);
        if ((uVar19 != uVar4) &&
           (*(ulonglong *)(*(longlong *)(lVar24 + 0x6938) + (ulonglong)uVar19 * 0x248) == uVar20)) {
          uVar19 = uVar19 + 1;
          if (uVar19 < uVar4) {
            do {
              thunk_FUN_180001218(*(longlong *)(lVar24 + 0x6938) + (ulonglong)(uVar19 - 1) * 0x248,
                                  *(longlong *)(lVar24 + 0x6938) + (ulonglong)uVar19 * 0x248,0x248);
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(uint *)(lVar24 + 0x6940));
          }
          *(int *)(lVar24 + 0x6940) = *(int *)(lVar24 + 0x6940) + -1;
        }
      }
    }
  }
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
LAB_1800c2884:
  if (iVar9 == 0) {
    FUN_1800a9f28(lVar15 + 0x6838);
  }
  return iVar9;
}

