/*
 * FUN_1002d71a at 1002d71a
 * undefined __fastcall FUN_1002d71a(int param_1)
 * Address ranges: 1002d71a-1002d73b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002d71a(int param_1)

{
  if (*(int *)(param_1 + 0x44) != 0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}

