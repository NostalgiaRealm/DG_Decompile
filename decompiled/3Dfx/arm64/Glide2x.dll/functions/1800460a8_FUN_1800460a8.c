/*
 * FUN_1800460a8 at 1800460a8
 * undefined __cdecl FUN_1800460a8(longlong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4, ulonglong param_5)
 * Address ranges: 1800460a8-18004634f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800460a8(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong local_60 [2];
  
  local_60[0] = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  puVar6 = FUN_180046848(param_1 + 0x10,local_60);
  if (puVar6 == (ulonglong *)0x0) {
    uVar4 = *(uint *)(param_1 + 0x20);
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar10 = 0;
      uVar9 = uVar4;
      do {
        uVar5 = uVar9 + uVar10 >> 1;
        uVar7 = (ulonglong)uVar5;
        uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar7 * 0x28);
        if (uVar12 <= param_2) {
          if (param_2 <= uVar12) break;
          uVar10 = uVar5 + 1;
          uVar7 = (ulonglong)(uVar5 + 1);
          uVar5 = uVar9;
        }
        uVar9 = uVar5;
      } while (uVar9 != uVar10);
      if (((uint)uVar7 != uVar4) &&
         (puVar6 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar7 * 0x28), *puVar6 == param_2))
      {
        puVar6[3] = param_4;
        puVar6[2] = param_3;
        puVar6[4] = param_5;
        goto LAB_180046324;
      }
    }
    uVar10 = *(uint *)(param_1 + 0x24);
    plVar1 = (longlong *)(param_1 + 0x18);
    if (uVar10 == uVar4) {
      uVar4 = 0x10;
      if (uVar10 != 0) {
        uVar4 = uVar10 << 1;
      }
      lVar8 = thunk_FUN_18005fb88((ulonglong)uVar4 * 0x28);
      if (lVar8 != 0) {
        uVar12 = 0;
        if (*(int *)(param_1 + 0x20) != 0) {
          do {
            uVar10 = (int)uVar12 + 1;
            puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar12 * 0x28);
            puVar3 = (undefined8 *)(lVar8 + uVar12 * 0x28);
            uVar15 = *puVar2;
            uVar14 = puVar2[3];
            uVar13 = puVar2[2];
            puVar3[1] = puVar2[1];
            *puVar3 = uVar15;
            puVar3[3] = uVar14;
            puVar3[2] = uVar13;
            puVar3[4] = puVar2[4];
            uVar12 = (ulonglong)uVar10;
          } while (uVar10 < *(uint *)(param_1 + 0x20));
        }
        thunk_FUN_18005fbc8(*(LPVOID *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x10) = lVar8;
        *(longlong *)(param_1 + 0x18) = lVar8;
        *(uint *)(param_1 + 0x24) = uVar4;
      }
    }
    uVar12 = (ulonglong)*(uint *)(param_1 + 0x20);
    if (*(uint *)(param_1 + 0x24) != *(uint *)(param_1 + 0x20)) {
      while ((uint)uVar7 < (uint)uVar12) {
        uVar11 = (ulonglong)((uint)uVar12 - 1);
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar12 * 0x28);
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar11 * 0x28);
        uVar15 = *puVar3;
        uVar14 = puVar3[3];
        uVar13 = puVar3[2];
        puVar2[1] = puVar3[1];
        *puVar2 = uVar15;
        puVar2[3] = uVar14;
        puVar2[2] = uVar13;
        puVar2[4] = puVar3[4];
        uVar12 = uVar11;
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      *(ulonglong *)(*plVar1 + uVar7 * 0x28 + 8) = param_2;
      lVar8 = *plVar1 + uVar7 * 0x28;
      *(ulonglong *)(lVar8 + 0x18) = param_4;
      *(ulonglong *)(lVar8 + 0x10) = param_3;
      *(ulonglong *)(lVar8 + 0x20) = param_5;
      *(ulonglong *)(*plVar1 + uVar7 * 0x28) = param_2;
    }
  }
  else {
    uVar7 = (**(code **)(**(longlong **)(*puVar6 + 0x18) + 0x40))();
    if (uVar7 < puVar6[2]) {
      uVar7 = puVar6[1];
      if (param_3 == *puVar6) {
        if (param_4 != uVar7 && uVar7 != 0xffffffffffffffff) {
          FUN_18004aca0(uVar7 + 8,0);
        }
      }
      else {
        if (uVar7 != 0xffffffffffffffff) {
          FUN_18004aca0(uVar7 + 8,0);
        }
        if (param_4 != 0xffffffffffffffff) {
          FUN_18004aca0(param_4 + 8,0);
        }
        (**(code **)(**(longlong **)(param_3 + 0x10) + 0x78))
                  (*(longlong **)(param_3 + 0x10),*(undefined8 *)(*puVar6 + 0x18),puVar6[2]);
      }
    }
    *puVar6 = param_3;
    puVar6[1] = param_4;
    puVar6[2] = param_5;
  }
LAB_180046324:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}

