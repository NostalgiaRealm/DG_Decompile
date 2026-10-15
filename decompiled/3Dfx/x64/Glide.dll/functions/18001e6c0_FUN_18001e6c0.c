/*
 * FUN_18001e6c0 at 18001e6c0
 * undefined __fastcall FUN_18001e6c0(longlong param_1, char param_2)
 * Address ranges: 18001e6c0-18001e703
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e6c0(longlong param_1,char param_2)

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

