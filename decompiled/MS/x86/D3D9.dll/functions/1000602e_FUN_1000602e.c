/*
 * FUN_1000602e at 1000602e
 * undefined __fastcall FUN_1000602e(int param_1)
 * Address ranges: 1000602e-1000604d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000602e(int param_1)

{
  if (*(HICON *)(param_1 + 0xde4) != (HICON)0x0) {
    DestroyIcon(*(HICON *)(param_1 + 0xde4));
    *(undefined4 *)(param_1 + 0xde4) = 0;
  }
  return;
}

