/*
 * FUN_180034a00 at 180034a00
 * undefined __fastcall FUN_180034a00(longlong param_1)
 * Address ranges: 180034a00-180035057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180034a00(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  HMODULE hInstance;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint local_58 [16];
  
  lVar3 = *(longlong *)(param_1 + 0xf6d0);
  if (lVar3 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x620));
    *(longlong *)(lVar3 + 0x618) = param_1;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0xf718),0);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0xf710),0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0xf6d0) + 0x620));
    uVar5 = 0;
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0xf6d0) + 0x618);
    LOCK();
    if (param_1 == *plVar2) {
      *plVar2 = 0;
    }
    UNLOCK();
    (**(code **)(**(longlong **)(param_1 + 0xf7b0) + 0x10))();
    *(undefined8 *)(param_1 + 0xf7b0) = 0;
    (**(code **)(**(longlong **)(param_1 + 0xf7d8) + 0x10))();
    *(undefined8 *)(param_1 + 0xf7d8) = 0;
    (**(code **)(**(longlong **)(param_1 + 0xf7b8) + 0x10))();
    *(undefined8 *)(param_1 + 0xf7b8) = 0;
    (**(code **)(**(longlong **)(param_1 + 0xf7c0) + 0x10))();
    *(undefined8 *)(param_1 + 0xf7c0) = 0;
    (**(code **)(**(longlong **)(param_1 + 0xf7c8) + 0x10))();
    *(undefined8 *)(param_1 + 0xf7c8) = 0;
    uVar8 = uVar5;
    if (*(int *)(param_1 + 0xf75c) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xf750) + 0x18 + uVar8 * 0x20) + 0x10))
                  ();
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < *(uint *)(param_1 + 0xf75c));
    }
    *(undefined4 *)(param_1 + 0xf75c) = 0;
    FUN_18003f330(param_1 + 0xf780);
    FUN_18003dab8(param_1 + 0xf728);
    uVar8 = uVar5;
    do {
      plVar2 = *(longlong **)(param_1 + 0xfb20 + uVar8 * 8);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = *(longlong *)(param_1 + 0xf6d8);
        (**(code **)(*plVar2 + 0x38))(plVar2,local_58);
        lVar3 = FUN_1800dda84((longlong *)(lVar3 + 0x628),local_58);
        uVar4 = uVar5;
        if (lVar3 != 0) {
          do {
            if (*(longlong **)(lVar3 + 0x20 + uVar4 * 0x30) == plVar2) {
              *(undefined1 *)(lVar3 + 0x28 + uVar4 * 0x30) = 0;
              break;
            }
            uVar7 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar7;
          } while (uVar7 < 0x14);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x10);
    plVar2 = *(longlong **)(param_1 + 0xfc88);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_1 + 0xf6d8);
      (**(code **)(*plVar2 + 0x38))(plVar2,local_58);
      lVar3 = FUN_1800dda84((longlong *)(lVar3 + 0x628),local_58);
      uVar8 = uVar5;
      if (lVar3 != 0) {
        do {
          if (*(longlong **)(lVar3 + 0x20 + uVar8 * 0x30) == plVar2) {
            *(undefined1 *)(lVar3 + 0x28 + uVar8 * 0x30) = 0;
            break;
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < 0x14);
      }
    }
    plVar2 = *(longlong **)(param_1 + 0xfc90);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_1 + 0xf6d8);
      (**(code **)(*plVar2 + 0x38))(plVar2,local_58);
      lVar3 = FUN_1800dda84((longlong *)(lVar3 + 0x628),local_58);
      uVar8 = uVar5;
      if (lVar3 != 0) {
        do {
          if (*(longlong **)(lVar3 + 0x20 + uVar8 * 0x30) == plVar2) {
            *(undefined1 *)(lVar3 + 0x28 + uVar8 * 0x30) = 0;
            break;
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < 0x14);
      }
    }
    plVar2 = *(longlong **)(param_1 + 0xfc98);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_1 + 0xf6d8);
      (**(code **)(*plVar2 + 0x38))(plVar2,local_58);
      lVar3 = FUN_1800dda84((longlong *)(lVar3 + 0x628),local_58);
      uVar8 = uVar5;
      if (lVar3 != 0) {
        do {
          if (*(longlong **)(lVar3 + 0x20 + uVar8 * 0x30) == plVar2) {
            *(undefined1 *)(lVar3 + 0x28 + uVar8 * 0x30) = 0;
            break;
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < 0x14);
      }
    }
    plVar2 = *(longlong **)(param_1 + 0xfca0);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_1 + 0xf6d8);
      (**(code **)(*plVar2 + 0x38))(plVar2,local_58);
      lVar3 = FUN_1800dda84((longlong *)(lVar3 + 0x628),local_58);
      uVar8 = uVar5;
      if (lVar3 != 0) {
        do {
          if (*(longlong **)(lVar3 + 0x20 + uVar8 * 0x30) == plVar2) {
            *(undefined1 *)(lVar3 + 0x28 + uVar8 * 0x30) = 0;
            break;
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < 0x14);
      }
    }
    plVar2 = *(longlong **)(param_1 + 0xfca8);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_1 + 0xf6d8);
      (**(code **)(*plVar2 + 0x38))(plVar2,local_58);
      lVar3 = FUN_1800dda84((longlong *)(lVar3 + 0x628),local_58);
      if (lVar3 != 0) {
        do {
          if (*(longlong **)(lVar3 + 0x20 + uVar5 * 0x30) == plVar2) {
            *(undefined1 *)(lVar3 + 0x28 + uVar5 * 0x30) = 0;
            break;
          }
          uVar7 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar7;
        } while (uVar7 < 0x14);
      }
    }
    FUN_1800db90c(*(longlong *)(param_1 + 0xf6d0),*(uint *)(param_1 + 0x18),
                  *(longlong **)(param_1 + 0xf720));
    *(undefined8 *)(param_1 + 0xf720) = 0;
    (**(code **)(**(longlong **)(param_1 + 0xf700) + 0x10))();
    *(undefined8 *)(param_1 + 0xf700) = 0;
    (**(code **)(**(longlong **)(param_1 + 0xf6f8) + 0x10))();
    *(undefined8 *)(param_1 + 0xf6f8) = 0;
    (**(code **)(**(longlong **)(param_1 + 0xf708) + 0x10))();
    lVar3 = *(longlong *)(param_1 + 0xf6d0);
    plVar2 = *(longlong **)(param_1 + 0xf710);
    uVar7 = *(uint *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0xf708) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x620));
    lVar6 = (ulonglong)uVar7 * 0x18c0;
    if (plVar2 == *(longlong **)(lVar6 + 0xb70 + lVar3)) {
      *(undefined8 *)(lVar6 + 0xb70 + lVar3) = 0;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x620));
    lVar3 = *(longlong *)(param_1 + 0xf6d0);
    plVar2 = *(longlong **)(param_1 + 0xf718);
    uVar7 = *(uint *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0xf710) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x620));
    lVar6 = (ulonglong)uVar7 * 0x18c0;
    if (plVar2 == *(longlong **)(lVar6 + 0xa70 + lVar3)) {
      *(undefined8 *)(lVar6 + 0xa70 + lVar3) = 0;
    }
    if (plVar2 == *(longlong **)(lVar6 + 0xa78 + lVar3)) {
      *(undefined8 *)(lVar6 + 0xa78 + lVar3) = 0;
    }
    if (plVar2 == *(longlong **)(lVar6 + 0xa80 + lVar3)) {
      *(undefined8 *)(lVar6 + 0xa80 + lVar3) = 0;
    }
    if (plVar2 == *(longlong **)(lVar6 + 0xa88 + lVar3)) {
      *(undefined8 *)(lVar6 + 0xa88 + lVar3) = 0;
    }
    if (plVar2 == *(longlong **)(lVar6 + 0xa90 + lVar3)) {
      *(undefined8 *)(lVar6 + 0xa90 + lVar3) = 0;
    }
    if (plVar2 == *(longlong **)(lVar6 + 0xa98 + lVar3)) {
      *(undefined8 *)(lVar6 + 0xa98 + lVar3) = 0;
    }
    if (plVar2 == *(longlong **)(lVar6 + 0xaa0 + lVar3)) {
      *(undefined8 *)(lVar6 + 0xaa0 + lVar3) = 0;
    }
    if (plVar2 == *(longlong **)(lVar6 + 0xaa8 + lVar3)) {
      *(undefined8 *)(lVar6 + 0xaa8 + lVar3) = 0;
    }
    if (plVar2 == *(longlong **)(lVar6 + 0xab0 + lVar3)) {
      *(undefined8 *)(lVar6 + 0xab0 + lVar3) = 0;
    }
    if (plVar2 == *(longlong **)(lVar6 + 0xab8 + lVar3)) {
      *(undefined8 *)(lVar6 + 0xab8 + lVar3) = 0;
    }
    if (plVar2 == *(longlong **)(lVar6 + 0xac0 + lVar3)) {
      *(undefined8 *)(lVar6 + 0xac0 + lVar3) = 0;
    }
    if (plVar2 == *(longlong **)(lVar6 + 0xac8 + lVar3)) {
      *(undefined8 *)(lVar6 + 0xac8 + lVar3) = 0;
    }
    if (plVar2 == *(longlong **)(lVar6 + 0xad0 + lVar3)) {
      *(undefined8 *)(lVar6 + 0xad0 + lVar3) = 0;
    }
    if (plVar2 == *(longlong **)(lVar6 + 0xad8 + lVar3)) {
      *(undefined8 *)(lVar6 + 0xad8 + lVar3) = 0;
    }
    if (plVar2 == *(longlong **)(lVar6 + 0xae0 + lVar3)) {
      *(undefined8 *)(lVar6 + 0xae0 + lVar3) = 0;
    }
    if (plVar2 == *(longlong **)(lVar6 + 0xae8 + lVar3)) {
      *(undefined8 *)(lVar6 + 0xae8 + lVar3) = 0;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x620));
    *(undefined8 *)(param_1 + 0xf718) = 0;
    FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x20));
    plVar2 = *(longlong **)(param_1 + 0xf6d0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        if (*(short *)((longlong)plVar2 + 0xc) != 0) {
          hInstance = GetModuleHandleW((LPCWSTR)0x0);
          UnregisterClassW((LPCWSTR)(ulonglong)*(ushort *)((longlong)plVar2 + 0xc),hInstance);
          if ((HMODULE)plVar2[2] != (HMODULE)0x0) {
            FreeLibrary((HMODULE)plVar2[2]);
            plVar2[2] = 0;
          }
        }
        (**(code **)(*plVar2 + 0x88))(plVar2);
      }
    }
    *(undefined8 *)(param_1 + 0xf6d0) = 0;
  }
  return;
}

