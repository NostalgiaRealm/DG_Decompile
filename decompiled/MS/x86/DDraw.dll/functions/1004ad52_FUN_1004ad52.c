/*
 * FUN_1004ad52 at 1004ad52
 * undefined __fastcall FUN_1004ad52(int param_1)
 * Address ranges: 1004ad52-1004adfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004ad52(int param_1)

{
  HANDLE pvVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    uVar3 = 0;
    do {
      iVar2 = uVar3 * 0x38;
      pvVar1 = *(HANDLE *)(param_1 + 0x2dc + iVar2);
      if (pvVar1 != (HANDLE)0x0) {
        SetThreadPriority(pvVar1,1);
        pvVar1 = *(HANDLE *)(param_1 + 0x2dc + iVar2);
        *(undefined1 *)(iVar2 + 0x311 + param_1) = 1;
        SignalObjectAndWait(*(HANDLE *)(param_1 + 0x2ec + iVar2),pvVar1,0xffffffff,0);
        CloseHandle(*(HANDLE *)(param_1 + 0x2ec + iVar2));
        *(undefined4 *)(param_1 + 0x2ec + iVar2) = 0;
        DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f0 + iVar2));
        CloseHandle(*(HANDLE *)(param_1 + 0x2dc + iVar2));
        *(undefined4 *)(param_1 + 0x2dc + iVar2) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 8);
    FreeLibrary(*(HMODULE *)(param_1 + 0x2a4));
    *(undefined4 *)(param_1 + 0x2a4) = 0;
  }
  return;
}

