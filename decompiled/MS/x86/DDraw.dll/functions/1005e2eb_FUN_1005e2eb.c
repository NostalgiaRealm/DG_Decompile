/*
 * FUN_1005e2eb at 1005e2eb
 * undefined __fastcall FUN_1005e2eb(int param_1)
 * Address ranges: 1005e2eb-1005e305
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1005e2eb(int param_1)

{
  if (*(HWND *)(param_1 + 0x330) != (HWND)0x0) {
    PostMessageW(*(HWND *)(param_1 + 0x330),0x408,0,0);
  }
  return;
}

