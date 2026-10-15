/*
 * FUN_18004ad88 at 18004ad88
 * undefined __cdecl FUN_18004ad88(longlong param_1, uint param_2, int param_3, longlong * param_4, ulonglong param_5)
 * Address ranges: 18004ad88-18004b1bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004ad88(longlong param_1,uint param_2,int param_3,longlong *param_4,ulonglong param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  SIZE_T SVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined8 uVar18;
  undefined4 uStack_5c;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if ((param_4 == (longlong *)0x0) ||
     (uVar8 = (**(code **)(*param_4 + 0x40))(param_4), param_5 <= uVar8)) {
    uVar12 = param_2 & 0xffff;
    uVar5 = uVar12 + param_3;
    if (uVar12 < uVar5) {
      lVar14 = *(longlong *)
                (*(longlong *)(param_1 + 0x50) + (ulonglong)(param_2 >> 0x10) * 0x10 + 8);
      do {
        uVar8 = -1L << ((ulonglong)uVar12 & 0x3f);
        uVar10 = (uVar12 & 0xffffffc0) + 0x40;
        if (uVar5 < uVar10) {
          uVar8 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar5 & 0x3f) & uVar8;
        }
        *(ulonglong *)(lVar14 + (ulonglong)(uVar12 >> 6) * 8) =
             *(ulonglong *)(lVar14 + (ulonglong)(uVar12 >> 6) * 8) & (uVar8 ^ 0xffffffffffffffff);
        uVar12 = uVar10;
      } while (uVar10 < uVar5);
    }
    goto LAB_18004b190;
  }
  uVar5 = *(uint *)(param_1 + 0x70);
  if (uVar5 == 0) {
LAB_18004ae6c:
    plVar17 = (longlong *)FUN_1800609d8(0x18);
    if (plVar17 == (longlong *)0x0) goto LAB_18004b190;
    plVar17[2] = -1;
    uVar8 = 0;
    *plVar17 = 0;
    plVar17[1] = 0;
    uVar5 = *(uint *)(param_1 + 0x70);
    if (uVar5 != 0) {
      uVar12 = 0;
      uVar10 = uVar5;
      do {
        uVar6 = uVar10 + uVar12 >> 1;
        uVar8 = (ulonglong)uVar6;
        plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x68) + uVar8 * 0x18);
        if (plVar15 <= param_4) {
          if (param_4 <= plVar15) break;
          uVar12 = uVar6 + 1;
          uVar8 = (ulonglong)(uVar6 + 1);
          uVar6 = uVar10;
        }
        uVar10 = uVar6;
      } while (uVar10 != uVar12);
      if (((uint)uVar8 != uVar5) &&
         (puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + uVar8 * 0x18),
         (longlong *)*puVar9 == param_4)) {
        puVar9[2] = plVar17;
        goto LAB_18004aff8;
      }
    }
    uVar12 = *(uint *)(param_1 + 0x74);
    plVar15 = (longlong *)(param_1 + 0x68);
    if (uVar12 == uVar5) {
      uVar5 = 0x10;
      if (uVar12 != 0) {
        uVar5 = uVar12 << 1;
      }
      lVar14 = thunk_FUN_1800609d8((ulonglong)uVar5 * 0x18);
      if (lVar14 != 0) {
        uVar11 = 0;
        if (*(int *)(param_1 + 0x70) != 0) {
          do {
            uVar12 = (int)uVar11 + 1;
            puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + uVar11 * 0x18);
            puVar1 = (undefined8 *)(lVar14 + uVar11 * 0x18);
            uVar18 = *puVar9;
            puVar1[1] = puVar9[1];
            *puVar1 = uVar18;
            puVar1[2] = puVar9[2];
            uVar11 = (ulonglong)uVar12;
          } while (uVar12 < *(uint *)(param_1 + 0x70));
        }
        thunk_FUN_180060a18(*(LPVOID *)(param_1 + 0x60));
        *(longlong *)(param_1 + 0x60) = lVar14;
        *(longlong *)(param_1 + 0x68) = lVar14;
        *(uint *)(param_1 + 0x74) = uVar5;
      }
    }
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x70);
    if (*(uint *)(param_1 + 0x74) != *(uint *)(param_1 + 0x70)) {
      while ((uint)uVar8 < (uint)uVar11) {
        uVar16 = (ulonglong)((uint)uVar11 - 1);
        puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + uVar11 * 0x18);
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + uVar16 * 0x18);
        uVar18 = *puVar1;
        puVar9[1] = puVar1[1];
        *puVar9 = uVar18;
        puVar9[2] = puVar1[2];
        uVar11 = uVar16;
      }
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      *(longlong **)(*plVar15 + uVar8 * 0x18 + 8) = param_4;
      *(longlong **)(*plVar15 + uVar8 * 0x18 + 0x10) = plVar17;
      *(longlong **)(*plVar15 + uVar8 * 0x18) = param_4;
    }
  }
  else {
    uVar12 = 0;
    uVar10 = uVar5;
    do {
      uVar6 = uVar10 + uVar12 >> 1;
      uVar8 = (ulonglong)uVar6;
      plVar17 = *(longlong **)(*(longlong *)(param_1 + 0x68) + uVar8 * 0x18);
      if (plVar17 <= param_4) {
        if (param_4 <= plVar17) break;
        uVar12 = uVar6 + 1;
        uVar8 = (ulonglong)(uVar6 + 1);
        uVar6 = uVar10;
      }
      uVar10 = uVar6;
    } while (uVar10 != uVar12);
    if ((((uint)uVar8 == uVar5) ||
        (puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + uVar8 * 0x18),
        (longlong *)*puVar9 != param_4)) || (puVar9 = puVar9 + 2, puVar9 == (undefined8 *)0x0))
    goto LAB_18004ae6c;
    plVar17 = (longlong *)*puVar9;
    if (plVar17 == (longlong *)0x0) goto LAB_18004b190;
  }
LAB_18004aff8:
  uVar8 = (ulonglong)*(uint *)((longlong)plVar17 + 0x14);
  if (*(uint *)((longlong)plVar17 + 0x14) != 0xffffffff) {
    piVar2 = (int *)(*plVar17 + uVar8 * 0x18);
    if ((*piVar2 == -1) || (uVar5 = piVar2[4], uVar8 = (ulonglong)uVar5, uVar5 != 0xffffffff)) {
      lVar14 = uVar8 * 0x18;
      *(uint *)(*plVar17 + lVar14) = param_2;
      *(int *)(lVar14 + *plVar17 + 4) = param_3;
      *(ulonglong *)(lVar14 + *plVar17 + 8) = param_5;
      *(int *)((longlong)plVar17 + 0x14) = (int)uVar8;
      goto LAB_18004b190;
    }
  }
  iVar3 = (int)plVar17[1];
  iVar4 = *(int *)((longlong)plVar17 + 0xc);
  if (iVar3 == iVar4) {
    uVar5 = iVar4 << 1;
    if (iVar4 == 0) {
      uVar5 = 0x10;
    }
    SVar13 = CONCAT44(0,uVar5) * 0x18;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = CONCAT44(0,uVar5);
    if (SUB168(auVar7 * ZEXT816(0x18),8) != 0) {
      SVar13 = 0xffffffffffffffff;
    }
    puVar9 = (undefined8 *)thunk_FUN_1800609d8(SVar13);
    if (puVar9 == (undefined8 *)0x0) goto LAB_18004b190;
    thunk_FUN_180001218(puVar9,(undefined8 *)*plVar17,
                        (ulonglong)*(uint *)((longlong)plVar17 + 0xc) * 0x18);
    thunk_FUN_180060a18((LPVOID)*plVar17);
    *plVar17 = (longlong)puVar9;
    *(uint *)((longlong)plVar17 + 0xc) = uVar5;
  }
  puVar9 = (undefined8 *)(*plVar17 + (ulonglong)*(uint *)(plVar17 + 1) * 0x18);
  puVar9[1] = param_5;
  *puVar9 = CONCAT44(param_3,param_2);
  puVar9[2] = CONCAT44(uStack_5c,0xffffffff);
  *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
  if (*(uint *)((longlong)plVar17 + 0x14) != 0xffffffff) {
    *(int *)(*plVar17 + (ulonglong)*(uint *)((longlong)plVar17 + 0x14) * 0x18 + 0x10) = iVar3;
  }
  *(int *)((longlong)plVar17 + 0x14) = iVar3;
  if ((int)plVar17[2] == -1) {
    *(int *)(plVar17 + 2) = iVar3;
  }
LAB_18004b190:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}

