/*
 * FUN_10084912 at 10084912
 * undefined __fastcall FUN_10084912(int param_1)
 * Address ranges: 10084912-10084966
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10084912(int param_1)

{
  if (*(char *)(param_1 + 300) != '\0') {
    FUN_10081bba((void *)(param_1 + 0xf0),*(int *)(param_1 + 0x20),*(int *)(param_1 + 0x24));
    FUN_10081bba((void *)(param_1 + 0x48),*(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x24));
    FUN_10081bba((void *)(param_1 + 0x84),*(int *)(param_1 + 0x20),*(int *)(param_1 + 0x24));
    thunk_FUN_100cfd6c(*(LPVOID *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 300) = 0;
  }
  return;
}

