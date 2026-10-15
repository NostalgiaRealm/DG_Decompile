/*
 * FUN_180048b18 at 180048b18
 * undefined __cdecl FUN_180048b18(longlong param_1, uint param_2)
 * Address ranges: 180048b18-18004952b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048b18(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  LPVOID pvVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar11 = (ulonglong)param_2;
  lVar2 = param_1 + uVar11 * 0x28;
  iVar4 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar4;
  if (iVar4 == 0) {
    lVar2 = param_1 + uVar11 * 0x20;
    lVar8 = param_1 + uVar11 * 0x1ac0;
    if (*(char *)(lVar8 + 0x1dc7) != '\0') {
      *(undefined1 *)(lVar8 + 0x1dc6) = 1;
      SignalObjectAndWait(*(HANDLE *)(lVar8 + 0x1c40),*(HANDLE *)(lVar8 + 0x1c38),0xffffffff,0);
      CloseHandle(*(HANDLE *)(lVar8 + 0x1c38));
      CloseHandle(*(HANDLE *)(lVar8 + 0x1c40));
      lVar9 = 0;
      do {
        CloseHandle(*(HANDLE *)(lVar8 + 0x1c68 + lVar9 * 0x28));
        thunk_FUN_180060a18(*(LPVOID *)(lVar8 + 0x1c60 + lVar9 * 0x28));
        puVar12 = (undefined8 *)(lVar8 + 0x1c48 + lVar9 * 0x28);
        lVar9 = lVar9 + 1;
        puVar12[1] = 0;
        *puVar12 = 0;
        puVar12[3] = 0;
        puVar12[2] = 0;
        puVar12[4] = 0;
      } while (lVar9 != 8);
      *(undefined8 *)(lVar8 + 0x1c38) = 0;
      *(undefined8 *)(lVar8 + 0x1c40) = 0;
      FreeLibrary(*(HMODULE *)(lVar8 + 0x1c00));
      *(undefined8 *)(lVar8 + 0x1c10) = 0;
      *(undefined8 *)(lVar8 + 0x1c18) = 0;
      FreeLibrary(*(HMODULE *)(lVar8 + 0x1c08));
      *(undefined8 *)(lVar8 + 0x1c20) = 0;
      *(undefined8 *)(lVar8 + 0x1c00) = 0;
      *(undefined8 *)(lVar8 + 0x1c08) = 0;
      thunk_FUN_180060a18(*(LPVOID *)(lVar8 + 0x1da0));
      *(undefined8 *)(lVar8 + 0x1d90) = 0;
      *(undefined8 *)(lVar8 + 0x1d88) = 0;
      *(undefined8 *)(lVar8 + 0x1da0) = 0;
      *(undefined8 *)(lVar8 + 0x1d98) = 0;
      *(undefined8 *)(lVar8 + 0x1da8) = 0;
      *(undefined1 *)(lVar8 + 0x1dc7) = 0;
    }
    FUN_18004baf0(*(longlong *)(lVar8 + 0x1e08) + 8,0);
    FUN_18004baf0(*(longlong *)(lVar8 + 0x1e18) + 8,0);
    uVar10 = 0;
    if (*(int *)(param_1 + 0x6c8) != 0) {
      do {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + uVar10 * 8);
        (**(code **)(*plVar5 + 0x18))(plVar5,uVar11);
        uVar1 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x6c8));
    }
    uVar10 = 0;
    if (*(int *)(lVar8 + 0x2354) != 0) {
      do {
        FUN_180045010(lVar8 + 0x2348,
                      *(LPVOID *)(*(longlong *)(lVar8 + 0x2348) + uVar10 * 0x48 + 0x40));
        uVar1 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar8 + 0x2354));
    }
    *(undefined4 *)(lVar8 + 0x2354) = 0;
    FUN_180048468(param_1,uVar11);
    FUN_180058c78(lVar8 + 0x1e20);
    FUN_180058c78(lVar8 + 0x1eb0);
    FUN_180058c78(lVar8 + 8000);
    FUN_180058c78(lVar8 + 0x1fd0);
    FUN_180058c78(lVar8 + 0x2060);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x20f0));
    uVar11 = 0;
    if (*(int *)(lVar8 + 0x2138) != 0) {
      if (*(int *)(lVar8 + 0x2138) == 0) {
        puVar12 = (undefined8 *)&DAT_00000008;
        puVar16 = (undefined8 *)&DAT_00000018;
        puVar15 = (undefined8 *)&DAT_00000020;
        goto LAB_180048dac;
      }
      do {
        lVar9 = *(longlong *)(lVar8 + 0x2130);
        uVar10 = uVar11 << 6;
        puVar12 = (undefined8 *)((uVar10 | 0x10) + lVar9);
        puVar16 = (undefined8 *)((uVar10 | 0x20) + lVar9);
        puVar15 = (undefined8 *)((uVar10 | 0x28) + lVar9);
LAB_180048dac:
        thunk_FUN_180060a18((LPVOID)*puVar12);
        thunk_FUN_180060a18((LPVOID)*puVar16);
        thunk_FUN_180060a18((LPVOID)*puVar15);
        uVar1 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar8 + 0x2138));
    }
    thunk_FUN_180060a18(*(LPVOID *)(lVar8 + 0x2128));
    *(undefined8 *)(lVar8 + 0x2128) = 0;
    *(undefined8 *)(lVar8 + 0x2130) = 0;
    *(undefined4 *)(lVar8 + 0x2138) = 0;
    *(undefined4 *)(lVar8 + 0x213c) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x20f0));
    DeleteCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x20f0));
    uVar11 = 0;
    if (*(int *)(lVar8 + 0x2198) != 0) {
      if (*(int *)(lVar8 + 0x2198) == 0) {
        puVar12 = (undefined8 *)&DAT_00000008;
        goto LAB_180048e40;
      }
      do {
        puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0x2190) + uVar11 * 0x18 + 0x10);
LAB_180048e40:
        plVar5 = (longlong *)*puVar12;
        if ((int)plVar5[1] != 0) {
          uVar10 = 0;
          do {
            (**(code **)(*(longlong *)(lVar8 + 0x2140) + 8))
                      (lVar8 + 0x2140,*(undefined8 *)(*plVar5 + uVar10 * 0x10));
            plVar5 = (longlong *)*puVar12;
            uVar1 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar1;
          } while (uVar1 < *(uint *)(plVar5 + 1));
        }
        if (plVar5 != (longlong *)0x0) {
          thunk_FUN_180060a18((LPVOID)*plVar5);
          FUN_180060a18(plVar5);
        }
        uVar1 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar8 + 0x2198));
    }
    thunk_FUN_180060a18(*(LPVOID *)(lVar8 + 0x2188));
    *(undefined8 *)(lVar8 + 0x2188) = 0;
    *(undefined8 *)(lVar8 + 0x2190) = 0;
    *(undefined4 *)(lVar8 + 0x2198) = 0;
    *(undefined4 *)(lVar8 + 0x219c) = 0;
    thunk_FUN_180060a18(*(LPVOID *)(lVar8 + 0x21a0));
    *(undefined8 *)(lVar8 + 0x21a0) = 0;
    *(undefined8 *)(lVar8 + 0x21a8) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x2158));
    uVar11 = 0;
    if (*(int *)(lVar8 + 0x2210) != 0) {
      if (*(int *)(lVar8 + 0x2210) == 0) {
        puVar12 = (undefined8 *)&DAT_00000008;
        goto LAB_180048f18;
      }
      do {
        puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0x2208) + uVar11 * 0x18 + 0x10);
LAB_180048f18:
        plVar5 = (longlong *)*puVar12;
        if ((int)plVar5[1] != 0) {
          uVar10 = 0;
          do {
            (**(code **)(*(longlong *)(lVar8 + 0x21b8) + 8))
                      (lVar8 + 0x21b8,*(undefined8 *)(*plVar5 + uVar10 * 0x10));
            plVar5 = (longlong *)*puVar12;
            uVar1 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar1;
          } while (uVar1 < *(uint *)(plVar5 + 1));
        }
        if (plVar5 != (longlong *)0x0) {
          thunk_FUN_180060a18((LPVOID)*plVar5);
          FUN_180060a18(plVar5);
        }
        uVar1 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar8 + 0x2210));
    }
    thunk_FUN_180060a18(*(LPVOID *)(lVar8 + 0x2200));
    *(undefined8 *)(lVar8 + 0x2200) = 0;
    *(undefined8 *)(lVar8 + 0x2208) = 0;
    *(undefined4 *)(lVar8 + 0x2210) = 0;
    *(undefined4 *)(lVar8 + 0x2214) = 0;
    thunk_FUN_180060a18(*(LPVOID *)(lVar8 + 0x2218));
    *(undefined8 *)(lVar8 + 0x2218) = 0;
    *(undefined8 *)(lVar8 + 0x2220) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x21d0));
    plVar5 = *(longlong **)(param_1 + 0x1b500);
    lVar9 = *(longlong *)(lVar8 + 0x1e08);
    EnterCriticalSection((LPCRITICAL_SECTION)(plVar5 + 5));
    FUN_180046850(plVar5,0,lVar9);
    LeaveCriticalSection((LPCRITICAL_SECTION)(plVar5 + 5));
    plVar5 = *(longlong **)(param_1 + 0x1b500);
    lVar9 = *(longlong *)(lVar8 + 0x1e18);
    EnterCriticalSection((LPCRITICAL_SECTION)(plVar5 + 5));
    FUN_180046850(plVar5,0,lVar9);
    LeaveCriticalSection((LPCRITICAL_SECTION)(plVar5 + 5));
    plVar5 = *(longlong **)(param_1 + 0x1b500);
    lVar9 = *(longlong *)(lVar8 + 0x1e00);
    EnterCriticalSection((LPCRITICAL_SECTION)(plVar5 + 5));
    FUN_180046850(plVar5,lVar9,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(plVar5 + 5));
    plVar5 = *(longlong **)(param_1 + 0x1b500);
    lVar9 = *(longlong *)(lVar8 + 0x1e10);
    EnterCriticalSection((LPCRITICAL_SECTION)(plVar5 + 5));
    FUN_180046850(plVar5,lVar9,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(plVar5 + 5));
    uVar6 = FUN_180060a18(*(LPVOID *)(lVar8 + 0x1ba8));
    *(undefined8 *)(lVar8 + 0x1ba8) = 0;
    *(undefined8 *)(lVar8 + 0x1bb0) = 0;
    uVar6 = FUN_180049d80(uVar6,0x2b,lVar8 + 0x1a40);
    uVar6 = FUN_180049d80(uVar6,2,lVar8 + 0x1b98);
    FUN_180049d80(uVar6,4,lVar8 + 0x1a20);
    if (*(uint *)(lVar8 + 0x22fc) != 0) {
      lVar9 = *(longlong *)(lVar8 + 0x918);
      uVar11 = (ulonglong)*(uint *)(lVar8 + 0x22fc);
      do {
        uVar1 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar1;
        lVar3 = *(longlong *)(lVar8 + 0x22f0) + uVar11 * 0x18;
        plVar5 = *(longlong **)(lVar3 + 0x10);
        if (*(uint *)(plVar5 + 1) != 0) {
          uVar10 = (ulonglong)*(uint *)(plVar5 + 1);
          do {
            uVar13 = (int)uVar10 - 1;
            uVar10 = (ulonglong)uVar13;
            plVar7 = (longlong *)(*plVar5 + uVar10 * 0xa8);
            if (*plVar7 == lVar9) {
              FUN_180046a78(*(longlong *)(lVar8 + 0x22d8),plVar7[0x14],&LAB_180045af0,1);
              FUN_180045cc8(plVar5,uVar13);
              *(int *)(lVar8 + 0x2300) = *(int *)(lVar8 + 0x2300) + -1;
            }
          } while (uVar13 != 0);
        }
        if ((int)plVar5[1] == 0) {
          FUN_180045b00((longlong *)(lVar8 + 0x22f0),(ulonglong *)(lVar3 + 8));
        }
      } while (uVar1 != 0);
    }
    lVar9 = *(longlong *)(lVar8 + 0x9b8);
    uVar1 = *(uint *)(lVar8 + 0x2314);
    uVar11 = (ulonglong)uVar1;
    while (uVar10 = uVar11, uVar1 != 0) {
      uVar1 = (int)uVar10 - 1;
      uVar11 = (ulonglong)uVar1;
      lVar3 = *(longlong *)(lVar8 + 0x2308) + uVar11 * 0x28;
      if (*(longlong *)(lVar3 + 8) == lVar9) {
        plVar5 = *(longlong **)(lVar3 + 0x20);
        FUN_180046a78(*(longlong *)(lVar8 + 0x2318),(ulonglong)plVar5,(undefined *)0x0,1);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        while( true ) {
          uVar13 = (uint)uVar10;
          if (*(uint *)(lVar8 + 0x2314) <= uVar13) break;
          puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0x2308) + (ulonglong)(uVar13 - 1) * 0x28);
          puVar16 = (undefined8 *)(*(longlong *)(lVar8 + 0x2308) + uVar10 * 0x28);
          uVar18 = *puVar16;
          uVar17 = puVar16[3];
          uVar6 = puVar16[2];
          puVar12[1] = puVar16[1];
          *puVar12 = uVar18;
          puVar12[3] = uVar17;
          puVar12[2] = uVar6;
          puVar12[4] = puVar16[4];
          uVar10 = (ulonglong)(uVar13 + 1);
        }
        *(uint *)(lVar8 + 0x2314) = *(uint *)(lVar8 + 0x2314) - 1;
      }
    }
    if (*(ulonglong *)(lVar8 + 0x918) != 0) {
      FUN_180046a78(*(longlong *)(param_1 + 0x1b500),*(ulonglong *)(lVar8 + 0x918),(undefined *)0x0,
                    1);
    }
    if (*(ulonglong *)(lVar8 + 0x9b8) != 0) {
      FUN_180046a78(*(longlong *)(param_1 + 0x1b500),*(ulonglong *)(lVar8 + 0x9b8),(undefined *)0x0,
                    1);
    }
    uVar11 = 0;
    if (*(int *)(lVar8 + 0x226c) != 0) {
      do {
        pvVar14 = *(LPVOID *)(*(longlong *)(lVar8 + 0x2260) + uVar11 * 0x48 + 0x40);
        FUN_180045960(*(longlong **)(lVar8 + 0x2270),(longlong)pvVar14);
        FUN_180060a18(pvVar14);
        uVar1 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar8 + 0x226c));
    }
    *(undefined4 *)(lVar8 + 0x226c) = 0;
    uVar11 = 0;
    if (*(int *)(lVar8 + 0x2284) != 0) {
      do {
        pvVar14 = *(LPVOID *)(*(longlong *)(lVar8 + 0x2278) + uVar11 * 0x158 + 0x150);
        FUN_1800457d0(*(longlong **)(lVar8 + 0x2288),(longlong)pvVar14);
        FUN_180060a18(pvVar14);
        uVar1 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar8 + 0x2284));
    }
    *(undefined4 *)(lVar8 + 0x2284) = 0;
    uVar11 = 0;
    if (*(int *)(lVar8 + 0x229c) != 0) {
      do {
        pvVar14 = *(LPVOID *)(*(longlong *)(lVar8 + 0x2290) + uVar11 * 0x158 + 0x150);
        FUN_1800457d0(*(longlong **)(lVar8 + 0x22a0),(longlong)pvVar14);
        FUN_180060a18(pvVar14);
        uVar1 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar8 + 0x229c));
    }
    *(undefined4 *)(lVar8 + 0x229c) = 0;
    uVar11 = 0;
    if (*(int *)(lVar8 + 0x22b4) != 0) {
      do {
        pvVar14 = *(LPVOID *)(*(longlong *)(lVar8 + 0x22a8) + uVar11 * 0x40 + 0x38);
        FUN_180045898(*(longlong **)(lVar8 + 0x22b8),(longlong)pvVar14);
        FUN_180060a18(pvVar14);
        uVar1 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar8 + 0x22b4));
    }
    *(undefined4 *)(lVar8 + 0x22b4) = 0;
    uVar11 = 0;
    if (*(int *)(lVar8 + 0x22cc) != 0) {
      do {
        FUN_180044c50(lVar8 + 0x22c0,
                      *(longlong **)(*(longlong *)(lVar8 + 0x22c0) + uVar11 * 0x18 + 0x10));
        uVar1 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar8 + 0x22cc));
    }
    *(undefined4 *)(lVar8 + 0x22cc) = 0;
    uVar11 = 0;
    if (*(int *)(lVar8 + 0x22fc) != 0) {
      do {
        uVar10 = 0;
        plVar5 = *(longlong **)(*(longlong *)(lVar8 + 0x22f0) + uVar11 * 0x18 + 0x10);
        if ((int)plVar5[1] != 0) {
          do {
            FUN_180046a78(*(longlong *)(lVar8 + 0x22d8),
                          *(ulonglong *)(*plVar5 + uVar10 * 0xa8 + 0xa0),(undefined *)0x0,1);
            (**(code **)(**(longlong **)(*plVar5 + uVar10 * 0xa8 + 0xa0) + 0x10))();
            uVar1 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar1;
          } while (uVar1 < *(uint *)(plVar5 + 1));
        }
        uVar1 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar8 + 0x22fc));
      uVar11 = 0;
      if (*(uint *)(lVar8 + 0x22fc) != 0) {
        do {
          puVar12 = *(undefined8 **)(*(longlong *)(lVar8 + 0x22f0) + uVar11 * 0x18 + 0x10);
          if (puVar12 != (undefined8 *)0x0) {
            thunk_FUN_180060a18((LPVOID)*puVar12);
            FUN_180060a18(puVar12);
          }
          uVar1 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(lVar8 + 0x22fc));
      }
    }
    *(undefined8 *)(lVar8 + 0x22fc) = 0;
    (**(code **)(**(longlong **)(lVar8 + 0x9b8) + 0x10))();
    *(undefined8 *)(lVar8 + 0x9b8) = 0;
    (**(code **)(**(longlong **)(lVar8 + 0x918) + 0x10))();
    *(undefined8 *)(lVar8 + 0x918) = 0;
    *(undefined8 *)(lVar8 + 0x2270) = 0;
    *(undefined8 *)(lVar8 + 0x2288) = 0;
    *(undefined8 *)(lVar8 + 0x22a0) = 0;
    *(undefined8 *)(lVar8 + 0x22b8) = 0;
    *(undefined8 *)(lVar8 + 0x22d0) = 0;
    FUN_180048668(param_1,(ulonglong)param_2);
    if (*(longlong *)(lVar2 + 0x6d0) != 0) {
      (**(code **)(**(longlong **)(lVar2 + 0x6d8) + 0x10))();
      *(undefined8 *)(lVar2 + 0x6d8) = 0;
      (**(code **)(**(longlong **)(lVar2 + 0x6d0) + 0x10))();
      *(undefined8 *)(lVar2 + 0x6d0) = 0;
    }
  }
  return;
}

