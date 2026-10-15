/*
 * FUN_18000ad64 at 18000ad64
 * undefined __fastcall FUN_18000ad64(longlong param_1, char param_2)
 * Address ranges: 18000ad64-18000ada7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000ad64(longlong param_1,char param_2)

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

