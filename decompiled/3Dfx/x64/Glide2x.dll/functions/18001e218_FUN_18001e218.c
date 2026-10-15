/*
 * FUN_18001e218 at 18001e218
 * undefined __fastcall FUN_18001e218(longlong param_1, char param_2)
 * Address ranges: 18001e218-18001e25b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e218(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
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

