/*
 * FUN_1800e8910 at 1800e8910
 * undefined FUN_1800e8910(void)
 * Address ranges: 1800e8910-1800e8bb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e8910(ulonglong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulonglong local_60 [2];
  
  uVar4 = *(ulonglong *)(param_1 + 0xb10);
  lVar5 = *(longlong *)(param_1 + 0xb18);
  uVar15 = *(ulonglong *)(param_1 + 0xb78);
  local_60[0] = param_2;
  (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar5 + 0x28);
  puVar8 = (ulonglong *)FUN_1800f24c0(lVar5 + 0x10,local_60);
  if (puVar8 == (ulonglong *)0x0) {
    uVar6 = *(uint *)(lVar5 + 0x20);
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar12 = 0;
      uVar11 = uVar6;
      do {
        uVar7 = uVar11 + uVar12 >> 1;
        uVar9 = (ulonglong)uVar7;
        uVar14 = *(ulonglong *)(*(longlong *)(lVar5 + 0x18) + uVar9 * 0x28);
        if (uVar14 <= param_2) {
          if (param_2 <= uVar14) break;
          uVar12 = uVar7 + 1;
          uVar9 = (ulonglong)(uVar7 + 1);
          uVar7 = uVar11;
        }
        uVar11 = uVar7;
      } while (uVar11 != uVar12);
      if (((uint)uVar9 != uVar6) &&
         (puVar8 = (ulonglong *)(*(longlong *)(lVar5 + 0x18) + uVar9 * 0x28), *puVar8 == param_2)) {
        puVar8[3] = param_1;
        puVar8[2] = uVar4;
        puVar8[4] = uVar15;
        goto LAB_1800e8b8c;
      }
    }
    uVar12 = *(uint *)(lVar5 + 0x24);
    plVar1 = (longlong *)(lVar5 + 0x18);
    if (uVar12 == uVar6) {
      uVar6 = 0x10;
      if (uVar12 != 0) {
        uVar6 = uVar12 << 1;
      }
      lVar10 = thunk_FUN_180102f80((ulonglong)uVar6 * 0x28);
      if (lVar10 != 0) {
        uVar14 = 0;
        if (*(int *)(lVar5 + 0x20) != 0) {
          do {
            uVar12 = (int)uVar14 + 1;
            puVar2 = (undefined8 *)(*(longlong *)(lVar5 + 0x18) + uVar14 * 0x28);
            puVar3 = (undefined8 *)(lVar10 + uVar14 * 0x28);
            uVar18 = *puVar2;
            uVar17 = puVar2[3];
            uVar16 = puVar2[2];
            puVar3[1] = puVar2[1];
            *puVar3 = uVar18;
            puVar3[3] = uVar17;
            puVar3[2] = uVar16;
            puVar3[4] = puVar2[4];
            uVar14 = (ulonglong)uVar12;
          } while (uVar12 < *(uint *)(lVar5 + 0x20));
        }
        thunk_FUN_180102fc0(*(undefined8 *)(lVar5 + 0x10));
        *(longlong *)(lVar5 + 0x10) = lVar10;
        *(longlong *)(lVar5 + 0x18) = lVar10;
        *(uint *)(lVar5 + 0x24) = uVar6;
      }
    }
    uVar14 = (ulonglong)*(uint *)(lVar5 + 0x20);
    if (*(uint *)(lVar5 + 0x24) != *(uint *)(lVar5 + 0x20)) {
      while ((uint)uVar9 < (uint)uVar14) {
        uVar13 = (ulonglong)((uint)uVar14 - 1);
        puVar2 = (undefined8 *)(*(longlong *)(lVar5 + 0x18) + uVar14 * 0x28);
        puVar3 = (undefined8 *)(*(longlong *)(lVar5 + 0x18) + uVar13 * 0x28);
        uVar18 = *puVar3;
        uVar17 = puVar3[3];
        uVar16 = puVar3[2];
        puVar2[1] = puVar3[1];
        *puVar2 = uVar18;
        puVar2[3] = uVar17;
        puVar2[2] = uVar16;
        puVar2[4] = puVar3[4];
        uVar14 = uVar13;
      }
      *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
      *(ulonglong *)(*plVar1 + uVar9 * 0x28 + 8) = param_2;
      lVar10 = *plVar1 + uVar9 * 0x28;
      *(ulonglong *)(lVar10 + 0x18) = param_1;
      *(ulonglong *)(lVar10 + 0x10) = uVar4;
      *(ulonglong *)(lVar10 + 0x20) = uVar15;
      *(ulonglong *)(*plVar1 + uVar9 * 0x28) = param_2;
    }
  }
  else {
    uVar9 = (**(code **)(**(longlong **)(*puVar8 + 0x18) + 0x40))();
    if (uVar9 < puVar8[2]) {
      uVar9 = puVar8[1];
      if (uVar4 == *puVar8) {
        if (param_1 != uVar9 && uVar9 != 0xffffffffffffffff) {
          FUN_1800e8548(uVar9 + 8,0);
        }
      }
      else {
        if (uVar9 != 0xffffffffffffffff) {
          FUN_1800e8548(uVar9 + 8,0);
        }
        if (param_1 != 0xffffffffffffffff) {
          FUN_1800e8548(param_1 + 8,0);
        }
        (**(code **)(**(longlong **)(uVar4 + 0x10) + 0x78))
                  (*(longlong **)(uVar4 + 0x10),*(undefined8 *)(*puVar8 + 0x18),puVar8[2]);
      }
    }
    *puVar8 = uVar4;
    puVar8[1] = param_1;
    puVar8[2] = uVar15;
  }
LAB_1800e8b8c:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar5 + 0x28);
  return;
}

