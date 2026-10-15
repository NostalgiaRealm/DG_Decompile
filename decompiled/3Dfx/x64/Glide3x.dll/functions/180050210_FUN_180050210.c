/*
 * FUN_180050210 at 180050210
 * undefined __fastcall FUN_180050210(longlong param_1)
 * Address ranges: 180050210-18005035a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050210(longlong param_1)

{
  HANDLE pvVar1;
  HANDLE hObjectToSignal;
  longlong lVar2;
  longlong lVar3;
  
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
      lVar2 = lVar3 * 0x60;
      pvVar1 = *(HANDLE *)(param_1 + 0x318 + lVar2);
      if (pvVar1 != (HANDLE)0x0) {
        SetThreadPriority(pvVar1,1);
        pvVar1 = *(HANDLE *)(param_1 + 0x318 + lVar2);
        hObjectToSignal = *(HANDLE *)(param_1 + 0x330 + lVar2);
        *(undefined1 *)(lVar2 + 0x371 + param_1) = 1;
        SignalObjectAndWait(hObjectToSignal,pvVar1,0xffffffff,0);
        CloseHandle(*(HANDLE *)(param_1 + 0x330 + lVar2));
        *(undefined8 *)(param_1 + 0x330 + lVar2) = 0;
        DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x338 + lVar2));
        CloseHandle(*(HANDLE *)(param_1 + 0x318 + lVar2));
        *(undefined8 *)(param_1 + 0x318 + lVar2) = 0;
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
  return;
}

