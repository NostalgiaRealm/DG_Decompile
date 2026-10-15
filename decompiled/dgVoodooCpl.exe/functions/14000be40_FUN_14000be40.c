/*
 * FUN_14000be40 at 14000be40
 * undefined __fastcall FUN_14000be40(longlong param_1)
 * Address ranges: 14000be40-14000bf05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000be40(longlong param_1)

{
  undefined *puVar1;
  
  if (*(HWND *)(param_1 + 0x1b48) != (HWND)0x0) {
    SendMessageW(*(HWND *)(param_1 + 0x1b48),0x402,0,*(LPARAM *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x1b50) = 0;
    *(undefined8 *)(param_1 + 7000) = 0;
    *(undefined8 *)(param_1 + 0x1b48) = 0;
  }
  puVar1 = FUN_140010000(1,0);
  if (puVar1[0x20] != '\0') {
    (**(code **)(**(longlong **)(puVar1 + 0x10) + 0x50))();
  }
  puVar1 = FUN_140010000(2,0);
  if (puVar1[0x20] != '\0') {
    (**(code **)(**(longlong **)(puVar1 + 0x10) + 0x50))();
  }
  puVar1 = FUN_140010000(3,0);
  if (puVar1[0x20] != '\0') {
    (**(code **)(**(longlong **)(puVar1 + 0x10) + 0x50))();
  }
  puVar1 = FUN_140010000(6,0);
  if (puVar1[0x20] != '\0') {
    (**(code **)(**(longlong **)(puVar1 + 0x10) + 0x50))();
  }
  FUN_140024260(*(LPVOID *)(param_1 + 0x1e20));
  return;
}

