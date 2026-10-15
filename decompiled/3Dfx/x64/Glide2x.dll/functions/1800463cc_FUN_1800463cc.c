/*
 * FUN_1800463cc at 1800463cc
 * undefined __fastcall FUN_1800463cc(undefined8 * param_1)
 * Address ranges: 1800463cc-180046536
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800463cc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = *(uint *)(param_1 + 0xe);
  *param_1 = &PTR_FUN_180064270;
  uVar9 = uVar8;
  do {
    if (uVar9 == 0) {
      uVar8 = 0;
      if (*(int *)(param_1 + 0xb) != 0) {
        do {
          plVar3 = *(longlong **)(param_1[10] + (ulonglong)uVar8 * 0x10);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))();
          }
          FUN_18005d720(*(LPVOID *)(param_1[10] + 8 + (ulonglong)uVar8 * 0x10));
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_1 + 0xb));
      }
      FUN_18005d720((LPVOID)param_1[10]);
      param_1[10] = 0;
      param_1[0xb] = 0;
      *(undefined4 *)(param_1 + 4) = 0;
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
      FUN_18005d720((LPVOID)param_1[0xc]);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      FUN_18005d720((LPVOID)param_1[10]);
      return;
    }
    uVar1 = uVar9 - 1;
    if (uVar1 < uVar8) {
      puVar7 = (undefined8 *)(param_1[0xd] + (ulonglong)uVar1 * 0x18 + 0x10);
    }
    else {
      puVar7 = (undefined8 *)&DAT_00000008;
    }
    plVar3 = (longlong *)*puVar7;
    uVar8 = *(uint *)(plVar3 + 2);
    while (uVar6 = (ulonglong)uVar8, uVar8 != 0xffffffff) {
      uVar8 = *(uint *)(*plVar3 + uVar6 * 0x18);
      if (uVar8 == 0xffffffff) break;
      FUN_180046538((longlong)param_1,uVar8,*(int *)(*plVar3 + 4 + uVar6 * 0x18));
      uVar8 = *(uint *)(*plVar3 + 0x10 + uVar6 * 0x18);
    }
    FUN_18005d720((LPVOID)*plVar3);
    FUN_18005d720(plVar3);
    while( true ) {
      uVar8 = uVar9 + 1;
      if (*(uint *)(param_1 + 0xe) <= uVar8) break;
      lVar4 = param_1[0xd];
      puVar7 = (undefined8 *)(lVar4 + (ulonglong)uVar8 * 0x18);
      uVar5 = puVar7[1];
      puVar2 = (undefined8 *)(lVar4 + (ulonglong)uVar9 * 0x18);
      *puVar2 = *puVar7;
      puVar2[1] = uVar5;
      *(undefined8 *)(lVar4 + 0x10 + (ulonglong)uVar9 * 0x18) =
           *(undefined8 *)(lVar4 + 0x10 + (ulonglong)uVar8 * 0x18);
      uVar9 = uVar8;
    }
    uVar8 = *(uint *)(param_1 + 0xe) - 1;
    *(uint *)(param_1 + 0xe) = uVar8;
    uVar9 = uVar1;
  } while( true );
}

