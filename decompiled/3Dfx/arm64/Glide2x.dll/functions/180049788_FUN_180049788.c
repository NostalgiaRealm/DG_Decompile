/*
 * FUN_180049788 at 180049788
 * undefined __cdecl FUN_180049788(undefined8 * param_1)
 * Address ranges: 180049788-180049987
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049788(undefined8 *param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  
  *param_1 = &PTR_FUN_180065280;
  uVar5 = *(uint *)(param_1 + 0xe);
  uVar8 = uVar5;
  do {
    if (uVar8 == 0) {
      uVar9 = 0;
      if (*(int *)(param_1 + 0xb) != 0) {
        do {
          plVar12 = *(longlong **)(param_1[10] + uVar9 * 0x10);
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x10))();
          }
          FUN_18005fbc8(*(LPVOID *)(uVar9 * 0x10 + param_1[10] + 8));
          uVar5 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(param_1 + 0xb));
      }
      thunk_FUN_18005fbc8((LPVOID)param_1[10]);
      param_1[10] = 0;
      param_1[0xb] = 0;
      *(undefined4 *)(param_1 + 4) = 0;
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
      thunk_FUN_18005fbc8((LPVOID)param_1[0xc]);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      thunk_FUN_18005fbc8((LPVOID)param_1[10]);
      return;
    }
    uVar7 = uVar8 - 1;
    if (uVar7 < uVar5) {
      puVar10 = (undefined8 *)(param_1[0xd] + (ulonglong)uVar7 * 0x18 + 0x10);
    }
    else {
      puVar10 = (undefined8 *)&DAT_00000008;
    }
    plVar12 = (longlong *)*puVar10;
    for (uVar5 = *(uint *)(plVar12 + 2); uVar5 != 0xffffffff;
        uVar5 = *(uint *)(*plVar12 + (ulonglong)uVar5 * 0x18 + 0x10)) {
      puVar2 = (uint *)(*plVar12 + (ulonglong)uVar5 * 0x18);
      uVar6 = *puVar2;
      if (uVar6 == 0xffffffff) break;
      uVar4 = uVar6 & 0xffff;
      uVar1 = puVar2[1] + uVar4;
      if (uVar4 < uVar1) {
        lVar11 = *(longlong *)(param_1[10] + (ulonglong)(uVar6 >> 0x10) * 0x10 + 8);
        do {
          uVar9 = -1L << ((ulonglong)uVar4 & 0x3f);
          uVar6 = (uVar4 & 0xffffffc0) + 0x40;
          if (uVar1 < uVar6) {
            uVar9 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar1 & 0x3f) & uVar9;
          }
          *(ulonglong *)(lVar11 + (ulonglong)(uVar4 >> 6) * 8) =
               *(ulonglong *)(lVar11 + (ulonglong)(uVar4 >> 6) * 8) & (uVar9 ^ 0xffffffffffffffff);
          uVar4 = uVar6;
        } while (uVar6 < uVar1);
      }
    }
    thunk_FUN_18005fbc8((LPVOID)*plVar12);
    FUN_18005fbc8(plVar12);
    while( true ) {
      uVar5 = uVar8 + 1;
      if (*(uint *)(param_1 + 0xe) <= uVar5) break;
      puVar10 = (undefined8 *)(param_1[0xd] + (ulonglong)uVar8 * 0x18);
      puVar3 = (undefined8 *)(param_1[0xd] + (ulonglong)uVar5 * 0x18);
      uVar13 = *puVar3;
      puVar10[1] = puVar3[1];
      *puVar10 = uVar13;
      puVar10[2] = puVar3[2];
      uVar8 = uVar5;
    }
    uVar5 = *(uint *)(param_1 + 0xe) - 1;
    *(uint *)(param_1 + 0xe) = uVar5;
    uVar8 = uVar7;
  } while( true );
}

