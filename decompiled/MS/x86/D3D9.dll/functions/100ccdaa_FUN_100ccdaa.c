/*
 * FUN_100ccdaa at 100ccdaa
 * undefined __fastcall FUN_100ccdaa(int param_1)
 * Address ranges: 100ccdaa-100ccdc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100ccdaa(int param_1)

{
  if (*(HWND *)(param_1 + 0x330) != (HWND)0x0) {
    PostMessageW(*(HWND *)(param_1 + 0x330),0x408,0,0);
  }
  return;
}

