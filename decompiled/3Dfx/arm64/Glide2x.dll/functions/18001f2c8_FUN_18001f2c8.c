/*
 * FUN_18001f2c8 at 18001f2c8
 * undefined __cdecl FUN_18001f2c8(longlong param_1, uint param_2)
 * Address ranges: 18001f2c8-18001f323
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001f2c8(longlong param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0xee) == '\0') {
      ShowCursor(1);
      *(undefined1 *)(param_1 + 0xee) = 1;
    }
  }
  else if (*(char *)(param_1 + 0xee) != '\0') {
    ShowCursor(0);
    *(undefined1 *)(param_1 + 0xee) = 0;
  }
  return;
}

