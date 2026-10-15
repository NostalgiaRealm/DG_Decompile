/*
 * FUN_180057e28 at 180057e28
 * undefined __cdecl FUN_180057e28(longlong param_1)
 * Address ranges: 180057e28-180058013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057e28(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  FUN_180058398(param_1,-1,0,(longlong *)0x0);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  uVar2 = *(uint *)(param_1 + 0x80);
  uVar4 = uVar2;
  do {
    if (uVar4 == 0) {
      if (*(int *)(param_1 + 0x68) != 0) {
        uVar6 = 0;
        if (*(int *)(param_1 + 0x68) == 0) {
          puVar5 = (undefined8 *)&DAT_00000018;
          puVar7 = (ulonglong *)&DAT_00000008;
          puVar10 = (undefined8 *)&DAT_00000020;
          puVar9 = (undefined8 *)&DAT_00000028;
          goto LAB_180057f80;
        }
        do {
          lVar1 = *(longlong *)(param_1 + 0x60) + uVar6 * 0x48;
          puVar5 = (undefined8 *)(lVar1 + 0x20);
          puVar7 = (ulonglong *)(lVar1 + 0x10);
          puVar10 = (undefined8 *)(lVar1 + 0x28);
          puVar9 = (undefined8 *)(lVar1 + 0x30);
LAB_180057f80:
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - (int)*puVar5;
          FUN_180045e18(*(longlong **)(param_1 + 0x38),*puVar7,1);
          (**(code **)(*(longlong *)*puVar7 + 0x10))();
          thunk_FUN_18005fbc8((LPVOID)*puVar10);
          thunk_FUN_18005fbc8((LPVOID)*puVar9);
          uVar2 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar2;
        } while (uVar2 < *(uint *)(param_1 + 0x68));
      }
      thunk_FUN_18005fbc8(*(LPVOID *)(param_1 + 0x58));
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      return;
    }
    uVar3 = uVar4 - 1;
    if (uVar3 < uVar2) {
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar3 * 0x18 + 0x10);
    }
    else {
      puVar5 = (undefined8 *)&DAT_00000008;
    }
    plVar8 = (longlong *)*puVar5;
    for (uVar2 = *(uint *)(plVar8 + 2); uVar2 != 0xffffffff;
        uVar2 = *(uint *)(*plVar8 + (ulonglong)uVar2 * 0x20 + 0x1c)) {
      puVar5 = (undefined8 *)(*plVar8 + (ulonglong)uVar2 * 0x20);
      if (*(int *)(puVar5 + 3) == 0) break;
      FUN_180058088(param_1,*(int *)(puVar5 + 3),(int)*puVar5,puVar5[1]);
    }
    thunk_FUN_18005fbc8((LPVOID)*plVar8);
    FUN_18005fbc8(plVar8);
    while( true ) {
      uVar2 = uVar4 + 1;
      if (*(uint *)(param_1 + 0x80) <= uVar2) break;
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar4 * 0x18);
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar2 * 0x18);
      uVar11 = *puVar10;
      puVar5[1] = puVar10[1];
      *puVar5 = uVar11;
      puVar5[2] = puVar10[2];
      uVar4 = uVar2;
    }
    uVar2 = *(uint *)(param_1 + 0x80) - 1;
    *(uint *)(param_1 + 0x80) = uVar2;
    uVar4 = uVar3;
  } while( true );
}

