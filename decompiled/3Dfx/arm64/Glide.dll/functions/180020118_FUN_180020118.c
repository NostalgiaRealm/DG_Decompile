/*
 * FUN_180020118 at 180020118
 * undefined __cdecl FUN_180020118(longlong param_1, uint param_2)
 * Address ranges: 180020118-180020173
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020118(longlong param_1,uint param_2)

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

