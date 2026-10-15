/*
 * FUN_180051a08 at 180051a08
 * BOOL __cdecl FUN_180051a08(longlong param_1)
 * Address ranges: 180051a08-180051b5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

BOOL FUN_180051a08(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  BOOL BVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x314) != '\0') {
    (**(code **)(param_1 + 0x308))(1);
  }
  if (*(HMODULE *)(param_1 + 0x2f8) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x2f8));
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    lVar1 = param_1 + 0x318;
    lVar5 = 0;
    lVar2 = param_1 + 0x330;
    do {
      lVar4 = lVar5 * 0x60;
      if (*(HANDLE *)(lVar1 + lVar4) != (HANDLE)0x0) {
        SetThreadPriority(*(HANDLE *)(lVar1 + lVar4),1);
        *(undefined1 *)(lVar4 + param_1 + 0x371) = 1;
        SignalObjectAndWait(*(HANDLE *)(lVar2 + lVar4),*(HANDLE *)(lVar1 + lVar4),0xffffffff,0);
        CloseHandle(*(HANDLE *)(lVar2 + lVar4));
        *(undefined8 *)(lVar2 + lVar4) = 0;
        DeleteCriticalSection((LPCRITICAL_SECTION)(lVar4 + param_1 + 0x338));
        CloseHandle(*(HANDLE *)(lVar1 + lVar4));
        *(undefined8 *)(lVar1 + lVar4) = 0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 8);
    FreeLibrary(*(HMODULE *)(param_1 + 0x2b0));
    *(undefined8 *)(param_1 + 0x2b0) = 0;
  }
  if (*(HMODULE *)(param_1 + 0x2d8) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x2d8));
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  BVar3 = 0;
  if (*(HMODULE *)(param_1 + 0x2a0) != (HMODULE)0x0) {
    BVar3 = FreeLibrary(*(HMODULE *)(param_1 + 0x2a0));
    *(undefined8 *)(param_1 + 0x2a0) = 0;
  }
  return BVar3;
}

