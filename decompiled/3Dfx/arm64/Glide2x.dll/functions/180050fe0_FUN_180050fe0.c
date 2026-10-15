/*
 * FUN_180050fe0 at 180050fe0
 * undefined __cdecl FUN_180050fe0(longlong param_1)
 * Address ranges: 180050fe0-18005120b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050fe0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  HMODULE hInstance;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x310) != '\0') {
    if (*(longlong **)(param_1 + 0x2e8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x10))();
      *(undefined8 *)(param_1 + 0x2e8) = 0;
    }
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + 0x18 + lVar3 * 0x28);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        lVar1 = param_1 + lVar3 * 0x28;
        *(undefined8 *)(param_1 + 0x18 + lVar3 * 0x28) = 0;
        *(undefined4 *)(lVar1 + 0x28) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined1 *)(lVar1 + 0x2c) = 0;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x10);
    if (*(longlong **)(param_1 + 0x688) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x688) + 0x10))();
      *(undefined8 *)(param_1 + 0x688) = 0;
    }
    thunk_FUN_18005fbc8(*(LPVOID *)(param_1 + 0x690));
    *(undefined8 *)(param_1 + 0x690) = 0;
    *(undefined8 *)(param_1 + 0x698) = 0;
    if (*(short *)(param_1 + 0xc) != 0) {
      hInstance = GetModuleHandleW((LPCWSTR)0x0);
      UnregisterClassW((LPCWSTR)(ulonglong)*(ushort *)(param_1 + 0xc),hInstance);
      if (*(HMODULE *)(param_1 + 0x10) != (HMODULE)0x0) {
        FreeLibrary(*(HMODULE *)(param_1 + 0x10));
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
    }
    if (*(char *)(param_1 + 0x314) != '\0') {
      (**(code **)(param_1 + 0x308))(1);
    }
    if (*(HMODULE *)(param_1 + 0x2f8) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x2f8));
      *(undefined8 *)(param_1 + 0x2f8) = 0;
    }
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      lVar3 = 0;
      do {
        lVar4 = lVar3 * 0x60;
        lVar1 = param_1 + lVar4;
        if (*(HANDLE *)(lVar1 + 0x318) != (HANDLE)0x0) {
          SetThreadPriority(*(HANDLE *)(lVar1 + 0x318),1);
          *(undefined1 *)(lVar4 + param_1 + 0x371) = 1;
          SignalObjectAndWait(*(HANDLE *)(lVar1 + 0x330),*(HANDLE *)(lVar1 + 0x318),0xffffffff,0);
          CloseHandle(*(HANDLE *)(lVar1 + 0x330));
          *(undefined8 *)(lVar1 + 0x330) = 0;
          DeleteCriticalSection((LPCRITICAL_SECTION)(lVar4 + param_1 + 0x338));
          CloseHandle(*(HANDLE *)(lVar1 + 0x318));
          *(undefined8 *)(lVar1 + 0x318) = 0;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != 8);
      FreeLibrary(*(HMODULE *)(param_1 + 0x2b0));
      *(undefined8 *)(param_1 + 0x2b0) = 0;
    }
    if (*(HMODULE *)(param_1 + 0x2d8) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x2d8));
      *(undefined8 *)(param_1 + 0x2d8) = 0;
    }
    if (*(HMODULE *)(param_1 + 0x2a0) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x2a0));
      *(undefined8 *)(param_1 + 0x2a0) = 0;
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
    *(undefined1 *)(param_1 + 0x310) = 0;
  }
  return;
}

