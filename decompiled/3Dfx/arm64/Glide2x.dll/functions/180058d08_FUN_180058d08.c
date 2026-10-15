/*
 * FUN_180058d08 at 180058d08
 * undefined __cdecl FUN_180058d08(longlong param_1, int param_2, undefined8 param_3, ulonglong param_4, longlong * param_5, ulonglong param_6)
 * Address ranges: 180058d08-1800590cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058d08(longlong param_1,int param_2,undefined8 param_3,ulonglong param_4,
                  longlong *param_5,ulonglong param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  SIZE_T SVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 uVar17;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if ((param_5 == (longlong *)0x0) ||
     (uVar7 = (**(code **)(*param_5 + 0x40))(param_5), param_6 <= uVar7)) {
    FUN_180058088(param_1,param_2,(int)param_3,param_4);
    goto LAB_1800590a0;
  }
  uVar4 = *(uint *)(param_1 + 0x80);
  if (uVar4 == 0) {
LAB_180058de4:
    plVar16 = (longlong *)FUN_18005fb88(0x18);
    if (plVar16 == (longlong *)0x0) goto LAB_1800590a0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[2] = -1;
    uVar4 = *(uint *)(param_1 + 0x80);
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar12 = 0;
      uVar10 = uVar4;
      do {
        uVar5 = uVar10 + uVar12 >> 1;
        uVar7 = (ulonglong)uVar5;
        plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x78) + uVar7 * 0x18);
        if (plVar14 <= param_5) {
          if (param_5 <= plVar14) break;
          uVar12 = uVar5 + 1;
          uVar7 = (ulonglong)(uVar5 + 1);
          uVar5 = uVar10;
        }
        uVar10 = uVar5;
      } while (uVar10 != uVar12);
      if (((uint)uVar7 != uVar4) &&
         (puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + uVar7 * 0x18),
         (longlong *)*puVar9 == param_5)) {
        puVar9[2] = plVar16;
        goto LAB_180058f7c;
      }
    }
    uVar12 = *(uint *)(param_1 + 0x84);
    plVar14 = (longlong *)(param_1 + 0x78);
    if (uVar12 == uVar4) {
      uVar4 = 0x10;
      if (uVar12 != 0) {
        uVar4 = uVar12 << 1;
      }
      lVar8 = thunk_FUN_18005fb88((ulonglong)uVar4 * 0x18);
      if (lVar8 != 0) {
        uVar11 = 0;
        if (*(int *)(param_1 + 0x80) != 0) {
          do {
            uVar12 = (int)uVar11 + 1;
            puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + uVar11 * 0x18);
            puVar1 = (undefined8 *)(lVar8 + uVar11 * 0x18);
            uVar17 = *puVar9;
            puVar1[1] = puVar9[1];
            *puVar1 = uVar17;
            puVar1[2] = puVar9[2];
            uVar11 = (ulonglong)uVar12;
          } while (uVar12 < *(uint *)(param_1 + 0x80));
        }
        thunk_FUN_18005fbc8(*(LPVOID *)(param_1 + 0x70));
        *(longlong *)(param_1 + 0x70) = lVar8;
        *(longlong *)(param_1 + 0x78) = lVar8;
        *(uint *)(param_1 + 0x84) = uVar4;
      }
    }
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x80);
    if (*(uint *)(param_1 + 0x84) != *(uint *)(param_1 + 0x80)) {
      while ((uint)uVar7 < (uint)uVar11) {
        uVar15 = (ulonglong)((uint)uVar11 - 1);
        puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + uVar11 * 0x18);
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + uVar15 * 0x18);
        uVar17 = *puVar1;
        puVar9[1] = puVar1[1];
        *puVar9 = uVar17;
        puVar9[2] = puVar1[2];
        uVar11 = uVar15;
      }
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      *(longlong **)(*plVar14 + uVar7 * 0x18 + 8) = param_5;
      *(longlong **)(*plVar14 + uVar7 * 0x18 + 0x10) = plVar16;
      *(longlong **)(*plVar14 + uVar7 * 0x18) = param_5;
    }
  }
  else {
    uVar12 = 0;
    uVar10 = uVar4;
    do {
      uVar5 = uVar10 + uVar12 >> 1;
      uVar7 = (ulonglong)uVar5;
      plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x78) + uVar7 * 0x18);
      if (plVar16 <= param_5) {
        if (param_5 <= plVar16) break;
        uVar12 = uVar5 + 1;
        uVar7 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar10;
      }
      uVar10 = uVar5;
    } while (uVar10 != uVar12);
    if ((((uint)uVar7 == uVar4) ||
        (puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + uVar7 * 0x18),
        (longlong *)*puVar9 != param_5)) || (puVar9 = puVar9 + 2, puVar9 == (undefined8 *)0x0))
    goto LAB_180058de4;
    plVar16 = (longlong *)*puVar9;
    if (plVar16 == (longlong *)0x0) goto LAB_1800590a0;
  }
LAB_180058f7c:
  uVar7 = (ulonglong)*(uint *)((longlong)plVar16 + 0x14);
  if (*(uint *)((longlong)plVar16 + 0x14) != 0xffffffff) {
    lVar8 = *plVar16 + uVar7 * 0x20;
    if ((*(int *)(lVar8 + 0x18) == 0) ||
       (uVar4 = *(uint *)(lVar8 + 0x1c), uVar7 = (ulonglong)uVar4, uVar4 != 0xffffffff)) {
      lVar8 = uVar7 * 0x20;
      *(int *)(lVar8 + *plVar16 + 0x18) = param_2;
      *(undefined8 *)(*plVar16 + lVar8) = param_3;
      *(ulonglong *)(lVar8 + *plVar16 + 8) = param_4;
      *(ulonglong *)(lVar8 + *plVar16 + 0x10) = param_6;
      *(int *)((longlong)plVar16 + 0x14) = (int)uVar7;
      goto LAB_1800590a0;
    }
  }
  iVar2 = (int)plVar16[1];
  iVar3 = *(int *)((longlong)plVar16 + 0xc);
  if (iVar2 == iVar3) {
    uVar4 = iVar3 << 1;
    if (iVar3 == 0) {
      uVar4 = 0x10;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    SVar13 = CONCAT44(0,uVar4) << 5;
    if (SUB168(auVar6 * ZEXT816(0x20),8) != 0) {
      SVar13 = 0xffffffffffffffff;
    }
    puVar9 = (undefined8 *)thunk_FUN_18005fb88(SVar13);
    if (puVar9 == (undefined8 *)0x0) goto LAB_1800590a0;
    thunk_FUN_180001218(puVar9,(undefined8 *)*plVar16,
                        (ulonglong)*(uint *)((longlong)plVar16 + 0xc) << 5);
    thunk_FUN_18005fbc8((LPVOID)*plVar16);
    *plVar16 = (longlong)puVar9;
    *(uint *)((longlong)plVar16 + 0xc) = uVar4;
  }
  puVar9 = (undefined8 *)(*plVar16 + (ulonglong)*(uint *)(plVar16 + 1) * 0x20);
  *puVar9 = param_3;
  puVar9[1] = param_4;
  puVar9[2] = param_6;
  *(int *)(puVar9 + 3) = param_2;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = 0xffffffff;
  *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
  if (*(uint *)((longlong)plVar16 + 0x14) != 0xffffffff) {
    *(int *)(*plVar16 + (ulonglong)*(uint *)((longlong)plVar16 + 0x14) * 0x20 + 0x1c) = iVar2;
  }
  *(int *)((longlong)plVar16 + 0x14) = iVar2;
  if ((int)plVar16[2] == -1) {
    *(int *)(plVar16 + 2) = iVar2;
  }
LAB_1800590a0:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}

