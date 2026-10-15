/*
 * FUN_1002a835 at 1002a835
 * undefined __stdcall FUN_1002a835(void)
 * Address ranges: 1002a835-1002a869
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002a835(void)

{
  if (DAT_100dea88 == '\0') {
    thunk_FUN_100cfd6c(DAT_100df2d8);
    DAT_100df2d8 = (LPVOID)0x0;
    DAT_100df2dc = 0;
    DAT_100df2e0 = 0;
    thunk_FUN_100cfd6c((LPVOID)0x0);
    DAT_100dea88 = '\x01';
  }
  return;
}

