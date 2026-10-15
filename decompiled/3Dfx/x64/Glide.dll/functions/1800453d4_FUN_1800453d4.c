/*
 * FUN_1800453d4 at 1800453d4
 * undefined __fastcall FUN_1800453d4(longlong param_1, uint param_2)
 * Address ranges: 1800453d4-180045927
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800453d4(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  LPVOID pvVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar6;
  
  uVar8 = (ulonglong)param_2;
  piVar1 = (int *)(param_1 + 0x28 + uVar8 * 0x28);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    lVar9 = (ulonglong)param_2 * 0x1ac0;
    lVar10 = (ulonglong)param_2 * 0x20;
    FUN_18005e3f0(param_1 + 0x1bc0 + lVar9);
    FUN_180047cd4(*(longlong *)(lVar9 + 0x1e08 + param_1) + 8,'\0');
    FUN_180047cd4(*(longlong *)(lVar9 + 0x1e18 + param_1) + 8,'\0');
    uVar7 = 0;
    uVar6 = uVar7;
    if (*(int *)(param_1 + 0x6c8) != 0) {
      do {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + uVar6 * 8);
        (**(code **)(*plVar2 + 0x18))(plVar2,uVar8);
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0x6c8));
    }
    if (*(int *)(lVar9 + 0x2354 + param_1) != 0) {
      do {
        FUN_180041314(lVar9 + param_1 + 0x2348,
                      *(LPVOID *)(*(longlong *)(lVar9 + param_1 + 0x2348) + 0x40 + uVar7 * 0x48));
        uVar5 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar9 + 0x2354 + param_1));
    }
    *(undefined4 *)(lVar9 + 0x2354 + param_1) = 0;
    FUN_180044db8(param_1,param_2);
    FUN_1800567f4(param_1 + 0x1e20 + lVar9);
    FUN_1800567f4(param_1 + 0x1eb0 + lVar9);
    FUN_1800567f4(param_1 + 8000 + lVar9);
    FUN_1800567f4(param_1 + 0x1fd0 + lVar9);
    FUN_1800567f4(param_1 + 0x2060 + lVar9);
    FUN_1800532a4((LPCRITICAL_SECTION)(param_1 + 0x20f0 + lVar9));
    FUN_18005d058((longlong *)(param_1 + 0x2140 + lVar9));
    FUN_18005d058((longlong *)(param_1 + 0x21b8 + lVar9));
    plVar2 = *(longlong **)(param_1 + 0x1b500);
    lVar3 = *(longlong *)(lVar9 + 0x1e08 + param_1);
    EnterCriticalSection((LPCRITICAL_SECTION)(plVar2 + 5));
    FUN_1800431ec(plVar2,0,lVar3);
    LeaveCriticalSection((LPCRITICAL_SECTION)(plVar2 + 5));
    plVar2 = *(longlong **)(param_1 + 0x1b500);
    lVar3 = *(longlong *)(lVar9 + 0x1e18 + param_1);
    EnterCriticalSection((LPCRITICAL_SECTION)(plVar2 + 5));
    FUN_1800431ec(plVar2,0,lVar3);
    LeaveCriticalSection((LPCRITICAL_SECTION)(plVar2 + 5));
    plVar2 = *(longlong **)(param_1 + 0x1b500);
    lVar3 = *(longlong *)(lVar9 + 0x1e00 + param_1);
    EnterCriticalSection((LPCRITICAL_SECTION)(plVar2 + 5));
    FUN_1800431ec(plVar2,lVar3,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(plVar2 + 5));
    plVar2 = *(longlong **)(param_1 + 0x1b500);
    lVar3 = *(longlong *)(lVar9 + 0x1e10 + param_1);
    EnterCriticalSection((LPCRITICAL_SECTION)(plVar2 + 5));
    FUN_1800431ec(plVar2,lVar3,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(plVar2 + 5));
    pvVar4 = *(LPVOID *)(lVar9 + 0x1ba8 + param_1);
    FUN_18005dbc0(pvVar4);
    *(undefined8 *)(lVar9 + 0x1bb0 + param_1) = 0;
    *(undefined8 *)(lVar9 + 0x1ba8 + param_1) = 0;
    FUN_180045fa0(pvVar4,0x2b,param_1 + 0x1a40 + lVar9);
    FUN_180045fa0(pvVar4,2,param_1 + 0x1b98 + lVar9);
    FUN_180045fa0(pvVar4,4,param_1 + 0x1a20 + lVar9);
    FUN_180041d0c((longlong *)(lVar9 + param_1 + 0x22d8),*(longlong *)(lVar9 + 0x918 + param_1));
    lVar3 = *(longlong *)(lVar9 + 0x9b8 + param_1);
    uVar6 = (ulonglong)*(uint *)(lVar9 + 0x2314 + param_1);
    while ((int)uVar6 != 0) {
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar5;
      if (*(longlong *)(*(longlong *)(lVar9 + param_1 + 0x2308) + 8 + uVar6 * 0x28) == lVar3) {
        FUN_180042108((longlong *)(lVar9 + param_1 + 0x2308),uVar5);
      }
    }
    uVar6 = *(ulonglong *)(lVar9 + 0x918 + param_1);
    uVar7 = 0;
    if (uVar6 != 0) {
      FUN_180043394(*(longlong *)(param_1 + 0x1b500),uVar6,(undefined *)0x0,'\x01');
    }
    uVar6 = *(ulonglong *)(lVar9 + 0x9b8 + param_1);
    if (uVar6 != 0) {
      FUN_180043394(*(longlong *)(param_1 + 0x1b500),uVar6,(undefined *)0x0,'\x01');
    }
    uVar6 = uVar7;
    if (*(int *)(lVar9 + 0x226c + param_1) != 0) {
      do {
        pvVar4 = *(LPVOID *)(*(longlong *)(lVar9 + 0x2260 + param_1) + 0x40 + uVar6 * 0x48);
        FUN_180041fb8(*(longlong **)(lVar9 + 0x2270 + param_1),(longlong)pvVar4);
        FUN_18005dbc0(pvVar4);
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar9 + 0x226c + param_1));
    }
    *(undefined4 *)(lVar9 + 0x226c + param_1) = 0;
    uVar6 = uVar7;
    if (*(int *)(lVar9 + 0x2284 + param_1) != 0) {
      do {
        pvVar4 = *(LPVOID *)(*(longlong *)(lVar9 + 0x2278 + param_1) + 0x150 + uVar6 * 0x158);
        FUN_180041e70(*(longlong **)(lVar9 + 0x2288 + param_1),(longlong)pvVar4);
        FUN_18005dbc0(pvVar4);
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar9 + 0x2284 + param_1));
    }
    *(undefined4 *)(lVar9 + 0x2284 + param_1) = 0;
    uVar6 = uVar7;
    if (*(int *)(lVar9 + 0x229c + param_1) != 0) {
      do {
        pvVar4 = *(LPVOID *)(*(longlong *)(lVar9 + 0x2290 + param_1) + 0x150 + uVar6 * 0x158);
        FUN_180041e70(*(longlong **)(lVar9 + 0x22a0 + param_1),(longlong)pvVar4);
        FUN_18005dbc0(pvVar4);
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar9 + 0x229c + param_1));
    }
    *(undefined4 *)(lVar9 + 0x229c + param_1) = 0;
    uVar6 = uVar7;
    if (*(int *)(lVar9 + 0x22b4 + param_1) != 0) {
      do {
        pvVar4 = *(LPVOID *)(*(longlong *)(lVar9 + 0x22a8 + param_1) + 0x38 + uVar6 * 0x40);
        FUN_180041f14(*(longlong **)(lVar9 + 0x22b8 + param_1),(longlong)pvVar4);
        FUN_18005dbc0(pvVar4);
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar9 + 0x22b4 + param_1));
    }
    *(undefined4 *)(lVar9 + 0x22b4 + param_1) = 0;
    if (*(int *)(lVar9 + 0x22cc + param_1) != 0) {
      do {
        FUN_1800410c0(lVar9 + param_1 + 0x22c0,
                      *(longlong **)(*(longlong *)(lVar9 + param_1 + 0x22c0) + 0x10 + uVar7 * 0x18))
        ;
        uVar5 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar9 + 0x22cc + param_1));
    }
    *(undefined4 *)(lVar9 + 0x22cc + param_1) = 0;
    FUN_180041c54((longlong *)(lVar9 + param_1 + 0x22d8));
    (**(code **)(**(longlong **)(lVar9 + 0x9b8 + param_1) + 0x10))();
    *(undefined8 *)(lVar9 + 0x9b8 + param_1) = 0;
    (**(code **)(**(longlong **)(lVar9 + 0x918 + param_1) + 0x10))();
    *(undefined8 *)(lVar9 + 0x918 + param_1) = 0;
    *(undefined8 *)(lVar9 + 0x2270 + param_1) = 0;
    *(undefined8 *)(lVar9 + 0x2288 + param_1) = 0;
    *(undefined8 *)(lVar9 + 0x22a0 + param_1) = 0;
    *(undefined8 *)(lVar9 + 0x22b8 + param_1) = 0;
    *(undefined8 *)(lVar9 + 0x22d0 + param_1) = 0;
    FUN_180044ed4(param_1,uVar8);
    if (*(longlong *)(lVar10 + 0x6d0 + param_1) != 0) {
      (**(code **)(**(longlong **)(lVar10 + 0x6d8 + param_1) + 0x10))();
      *(undefined8 *)(lVar10 + 0x6d8 + param_1) = 0;
      (**(code **)(**(longlong **)(lVar10 + 0x6d0 + param_1) + 0x10))();
      *(undefined8 *)(lVar10 + 0x6d0 + param_1) = 0;
    }
  }
  return;
}

