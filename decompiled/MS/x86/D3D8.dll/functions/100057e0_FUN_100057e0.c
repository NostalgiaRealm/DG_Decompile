/*
 * FUN_100057e0 at 100057e0
 * undefined __fastcall FUN_100057e0(int param_1)
 * Address ranges: 100057e0-100057ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100057e0(int param_1)

{
  if (*(HICON *)(param_1 + 0xb20) != (HICON)0x0) {
    DestroyIcon(*(HICON *)(param_1 + 0xb20));
    *(undefined4 *)(param_1 + 0xb20) = 0;
  }
  return;
}

