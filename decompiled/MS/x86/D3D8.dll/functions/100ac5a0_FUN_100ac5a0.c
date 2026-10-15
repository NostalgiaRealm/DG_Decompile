/*
 * FUN_100ac5a0 at 100ac5a0
 * undefined __fastcall FUN_100ac5a0(int param_1)
 * Address ranges: 100ac5a0-100ac67c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100ac5a0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x12f) != '\0') {
    *(undefined1 *)(param_1 + 0x12e) = 1;
    SignalObjectAndWait(*(HANDLE *)(param_1 + 0x60),*(HANDLE *)(param_1 + 0x5c),0xffffffff,0);
    CloseHandle(*(HANDLE *)(param_1 + 0x5c));
    CloseHandle(*(HANDLE *)(param_1 + 0x60));
    uVar2 = 0;
    do {
      iVar1 = param_1 + uVar2 * 0x14;
      CloseHandle(*(HANDLE *)(param_1 + 0x74 + uVar2 * 0x14));
      thunk_FUN_100ad48c(*(LPVOID *)(iVar1 + 0x70));
      uVar2 = uVar2 + 1;
      *(undefined4 *)(iVar1 + 100) = 0;
      *(undefined4 *)(iVar1 + 0x68) = 0;
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      *(undefined4 *)(iVar1 + 0x70) = 0;
      *(undefined4 *)(iVar1 + 0x74) = 0;
    } while (uVar2 < 8);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    FreeLibrary(*(HMODULE *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    FreeLibrary(*(HMODULE *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    thunk_FUN_100ad48c(*(LPVOID *)(param_1 + 0x110));
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined1 *)(param_1 + 0x12f) = 0;
  }
  return;
}

