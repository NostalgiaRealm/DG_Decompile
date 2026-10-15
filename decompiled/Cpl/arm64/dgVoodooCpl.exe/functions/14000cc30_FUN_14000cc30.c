/*
 * FUN_14000cc30 at 14000cc30
 * undefined __cdecl FUN_14000cc30(longlong param_1)
 * Address ranges: 14000cc30-14000cc33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000cc30(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(HWND *)(param_1 + 0x1b48) != (HWND)0x0) {
    SendMessageW(*(HWND *)(param_1 + 0x1b48),0x402,0,*(LPARAM *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 7000) = 0;
    *(undefined8 *)(param_1 + 0x1b48) = 0;
    *(undefined8 *)(param_1 + 0x1b50) = 0;
  }
  puVar1 = FUN_140011c60(1,0);
  if (*(char *)(puVar1 + 4) != '\0') {
    (**(code **)(*(longlong *)puVar1[2] + 0x50))();
  }
  puVar1 = FUN_140011c60(2,0);
  if (*(char *)(puVar1 + 4) != '\0') {
    (**(code **)(*(longlong *)puVar1[2] + 0x50))();
  }
  puVar1 = FUN_140011c60(3,0);
  if (*(char *)(puVar1 + 4) != '\0') {
    (**(code **)(*(longlong *)puVar1[2] + 0x50))();
  }
  puVar1 = FUN_140011c60(6,0);
  if (*(char *)(puVar1 + 4) != '\0') {
    (**(code **)(*(longlong *)puVar1[2] + 0x50))();
  }
  FUN_140024830(*(LPVOID *)(param_1 + 0x1e20));
  return;
}

