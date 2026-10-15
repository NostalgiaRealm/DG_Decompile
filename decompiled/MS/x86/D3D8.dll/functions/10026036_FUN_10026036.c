/*
 * FUN_10026036 at 10026036
 * undefined __fastcall FUN_10026036(int param_1)
 * Address ranges: 10026036-10026057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10026036(int param_1)

{
  if (*(int *)(param_1 + 0x44) != 0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}

