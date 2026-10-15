/*
 * FUN_1800de6c4 at 1800de6c4
 * undefined __fastcall FUN_1800de6c4(longlong param_1)
 * Address ranges: 1800de6c4-1800de73d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800de6c4(longlong param_1)

{
  HANDLE hThread;
  HMODULE hInstance;
  longlong lVar1;
  
  lVar1 = 0;
  do {
    hThread = *(HANDLE *)(param_1 + 0x318 + lVar1 * 0x60);
    if (hThread != (HANDLE)0x0) {
      TerminateThread(hThread,0);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 8);
  if (*(short *)(param_1 + 0xc) != 0) {
    hInstance = GetModuleHandleW((LPCWSTR)0x0);
    UnregisterClassW((LPCWSTR)(ulonglong)*(ushort *)(param_1 + 0xc),hInstance);
    if (*(HMODULE *)(param_1 + 0x10) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  return;
}

