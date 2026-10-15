/*
 * FUN_1800e7690 at 1800e7690
 * undefined FUN_1800e7690(void)
 * Address ranges: 1800e7690-1800e7ac3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e7690(longlong param_1,uint param_2,int param_3,longlong *param_4,ulonglong param_5)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined8 uVar18;
  undefined4 uStack_5c;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x28);
  if ((param_4 == (longlong *)0x0) ||
     (uVar10 = (**(code **)(*param_4 + 0x40))(param_4), param_5 <= uVar10)) {
    uVar13 = param_2 & 0xffff;
    uVar7 = uVar13 + param_3;
    if (uVar13 < uVar7) {
      lVar14 = *(longlong *)
                (*(longlong *)(param_1 + 0x50) + (ulonglong)(param_2 >> 0x10) * 0x10 + 8);
      do {
        uVar10 = -1L << ((ulonglong)uVar13 & 0x3f);
        uVar11 = (uVar13 & 0xffffffc0) + 0x40;
        if (uVar7 < uVar11) {
          uVar10 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar7 & 0x3f) & uVar10;
        }
        *(ulonglong *)(lVar14 + (ulonglong)(uVar13 >> 6) * 8) =
             *(ulonglong *)(lVar14 + (ulonglong)(uVar13 >> 6) * 8) & (uVar10 ^ 0xffffffffffffffff);
        uVar13 = uVar11;
      } while (uVar11 < uVar7);
    }
    goto LAB_1800e7a98;
  }
  uVar7 = *(uint *)(param_1 + 0x70);
  if (uVar7 == 0) {
LAB_1800e7774:
    plVar17 = (longlong *)FUN_180102f80(0x18);
    if (plVar17 == (longlong *)0x0) goto LAB_1800e7a98;
    plVar17[2] = -1;
    uVar10 = 0;
    *plVar17 = 0;
    plVar17[1] = 0;
    uVar7 = *(uint *)(param_1 + 0x70);
    if (uVar7 != 0) {
      uVar13 = 0;
      uVar11 = uVar7;
      do {
        uVar8 = uVar11 + uVar13 >> 1;
        uVar10 = (ulonglong)uVar8;
        plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x68) + uVar10 * 0x18);
        if (plVar15 <= param_4) {
          if (param_4 <= plVar15) break;
          uVar13 = uVar8 + 1;
          uVar10 = (ulonglong)(uVar8 + 1);
          uVar8 = uVar11;
        }
        uVar11 = uVar8;
      } while (uVar11 != uVar13);
      if (((uint)uVar10 != uVar7) &&
         (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x68) + uVar10 * 0x18),
         (longlong *)*puVar1 == param_4)) {
        puVar1[2] = (ulonglong)plVar17;
        goto LAB_1800e7900;
      }
    }
    uVar13 = *(uint *)(param_1 + 0x74);
    plVar15 = (longlong *)(param_1 + 0x68);
    if (uVar13 == uVar7) {
      uVar7 = 0x10;
      if (uVar13 != 0) {
        uVar7 = uVar13 << 1;
      }
      lVar14 = thunk_FUN_180102f80((ulonglong)uVar7 * 0x18);
      if (lVar14 != 0) {
        uVar12 = 0;
        if (*(int *)(param_1 + 0x70) != 0) {
          do {
            uVar13 = (int)uVar12 + 1;
            puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + uVar12 * 0x18);
            puVar2 = (undefined8 *)(lVar14 + uVar12 * 0x18);
            uVar18 = *puVar4;
            puVar2[1] = puVar4[1];
            *puVar2 = uVar18;
            puVar2[2] = puVar4[2];
            uVar12 = (ulonglong)uVar13;
          } while (uVar13 < *(uint *)(param_1 + 0x70));
        }
        thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x60));
        *(longlong *)(param_1 + 0x60) = lVar14;
        *(longlong *)(param_1 + 0x68) = lVar14;
        *(uint *)(param_1 + 0x74) = uVar7;
      }
    }
    uVar12 = (ulonglong)*(uint *)(param_1 + 0x70);
    if (*(uint *)(param_1 + 0x74) != *(uint *)(param_1 + 0x70)) {
      while ((uint)uVar10 < (uint)uVar12) {
        uVar16 = (ulonglong)((uint)uVar12 - 1);
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + uVar12 * 0x18);
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + uVar16 * 0x18);
        uVar18 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar18;
        puVar4[2] = puVar2[2];
        uVar12 = uVar16;
      }
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      *(longlong **)(*plVar15 + uVar10 * 0x18 + 8) = param_4;
      *(longlong **)(*plVar15 + uVar10 * 0x18 + 0x10) = plVar17;
      *(longlong **)(*plVar15 + uVar10 * 0x18) = param_4;
    }
  }
  else {
    uVar13 = 0;
    uVar11 = uVar7;
    do {
      uVar8 = uVar11 + uVar13 >> 1;
      uVar10 = (ulonglong)uVar8;
      plVar17 = *(longlong **)(*(longlong *)(param_1 + 0x68) + uVar10 * 0x18);
      if (plVar17 <= param_4) {
        if (param_4 <= plVar17) break;
        uVar13 = uVar8 + 1;
        uVar10 = (ulonglong)(uVar8 + 1);
        uVar8 = uVar11;
      }
      uVar11 = uVar8;
    } while (uVar11 != uVar13);
    if ((((uint)uVar10 == uVar7) ||
        (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x68) + uVar10 * 0x18),
        (longlong *)*puVar1 != param_4)) || (puVar1 = puVar1 + 2, puVar1 == (ulonglong *)0x0))
    goto LAB_1800e7774;
    plVar17 = (longlong *)*puVar1;
    if (plVar17 == (longlong *)0x0) goto LAB_1800e7a98;
  }
LAB_1800e7900:
  uVar10 = (ulonglong)*(uint *)((longlong)plVar17 + 0x14);
  if (*(uint *)((longlong)plVar17 + 0x14) != 0xffffffff) {
    piVar3 = (int *)(*plVar17 + uVar10 * 0x18);
    if ((*piVar3 == -1) || (uVar7 = piVar3[4], uVar10 = (ulonglong)uVar7, uVar7 != 0xffffffff)) {
      lVar14 = uVar10 * 0x18;
      *(uint *)(*plVar17 + lVar14) = param_2;
      *(int *)(lVar14 + *plVar17 + 4) = param_3;
      *(ulonglong *)(lVar14 + *plVar17 + 8) = param_5;
      *(int *)((longlong)plVar17 + 0x14) = (int)uVar10;
      goto LAB_1800e7a98;
    }
  }
  iVar5 = (int)plVar17[1];
  iVar6 = *(int *)((longlong)plVar17 + 0xc);
  if (iVar5 == iVar6) {
    uVar7 = iVar6 << 1;
    if (iVar6 == 0) {
      uVar7 = 0x10;
    }
    lVar14 = CONCAT44(0,uVar7) * 0x18;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = CONCAT44(0,uVar7);
    if (SUB168(auVar9 * ZEXT816(0x18),8) != 0) {
      lVar14 = -1;
    }
    lVar14 = thunk_FUN_180102f80(lVar14);
    if (lVar14 == 0) goto LAB_1800e7a98;
    thunk_FUN_180001218(lVar14,*plVar17,(ulonglong)*(uint *)((longlong)plVar17 + 0xc) * 0x18);
    thunk_FUN_180102fc0(*plVar17);
    *plVar17 = lVar14;
    *(uint *)((longlong)plVar17 + 0xc) = uVar7;
  }
  puVar4 = (undefined8 *)(*plVar17 + (ulonglong)*(uint *)(plVar17 + 1) * 0x18);
  puVar4[1] = param_5;
  *puVar4 = CONCAT44(param_3,param_2);
  puVar4[2] = CONCAT44(uStack_5c,0xffffffff);
  *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
  if (*(uint *)((longlong)plVar17 + 0x14) != 0xffffffff) {
    *(int *)(*plVar17 + (ulonglong)*(uint *)((longlong)plVar17 + 0x14) * 0x18 + 0x10) = iVar5;
  }
  *(int *)((longlong)plVar17 + 0x14) = iVar5;
  if ((int)plVar17[2] == -1) {
    *(int *)(plVar17 + 2) = iVar5;
  }
LAB_1800e7a98:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x28);
  return;
}

