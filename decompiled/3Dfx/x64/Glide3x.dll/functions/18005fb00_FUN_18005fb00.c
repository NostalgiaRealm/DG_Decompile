/*
 * FUN_18005fb00 at 18005fb00
 * undefined __fastcall FUN_18005fb00(longlong param_1)
 * Address ranges: 18005fb00-18005fc19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005fb00(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x207) != '\0') {
    *(undefined1 *)(param_1 + 0x206) = 1;
    SignalObjectAndWait(*(HANDLE *)(param_1 + 0x80),*(HANDLE *)(param_1 + 0x78),0xffffffff,0);
    CloseHandle(*(HANDLE *)(param_1 + 0x78));
    CloseHandle(*(HANDLE *)(param_1 + 0x80));
    lVar2 = 0;
    do {
      CloseHandle(*(HANDLE *)(param_1 + 0xa8 + lVar2 * 0x28));
      FUN_180060ac0(*(LPVOID *)(param_1 + 0xa0 + lVar2 * 0x28));
      puVar1 = (undefined8 *)(param_1 + 0x88 + lVar2 * 0x28);
      *puVar1 = 0;
      puVar1[1] = 0;
      lVar3 = lVar2 + 1;
      puVar1 = (undefined8 *)(param_1 + 0x98 + lVar2 * 0x28);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(param_1 + 0xa8 + lVar2 * 0x28) = 0;
      lVar2 = lVar3;
    } while (lVar3 != 8);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    FreeLibrary(*(HMODULE *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    FreeLibrary(*(HMODULE *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    FUN_180060ac0(*(LPVOID *)(param_1 + 0x1e0));
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined1 *)(param_1 + 0x207) = 0;
  }
  return;
}

