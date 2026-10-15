/*
 * FUN_100aa4db at 100aa4db
 * undefined __fastcall FUN_100aa4db(int param_1)
 * Address ranges: 100aa4db-100aa4f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100aa4db(int param_1)

{
  if (*(HWND *)(param_1 + 0x330) != (HWND)0x0) {
    PostMessageW(*(HWND *)(param_1 + 0x330),0x408,0,0);
  }
  return;
}

