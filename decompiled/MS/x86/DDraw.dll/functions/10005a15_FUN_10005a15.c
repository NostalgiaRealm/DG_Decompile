/*
 * FUN_10005a15 at 10005a15
 * undefined __fastcall FUN_10005a15(int param_1)
 * Address ranges: 10005a15-10005a36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10005a15(int param_1)

{
  if (*(int *)(param_1 + 0x44) != 0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}

