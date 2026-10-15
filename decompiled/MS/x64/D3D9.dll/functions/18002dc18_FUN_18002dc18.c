/*
 * FUN_18002dc18 at 18002dc18
 * undefined __fastcall FUN_18002dc18(void)
 * Address ranges: 18002dc18-18002dc44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002dc18(void)

{
  if (*(HWND *)(DAT_180111f20 + 0x3b0) != (HWND)0x0) {
    PostMessageW(*(HWND *)(DAT_180111f20 + 0x3b0),0x408,0,0);
  }
  return;
}

