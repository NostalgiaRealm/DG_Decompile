/*
 * FUN_18009e560 at 18009e560
 * undefined __fastcall FUN_18009e560(longlong param_1)
 * Address ranges: 18009e560-18009e5c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009e560(longlong param_1)

{
  if (*(char *)(param_1 + 400) != '\0') {
    FUN_18009ac8c(param_1 + 0x140,*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x34));
    FUN_18009ac8c(param_1 + 0x60,*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x34));
    FUN_18009ac8c(param_1 + 0xb0,*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x34));
    FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 400) = 0;
  }
  return;
}

