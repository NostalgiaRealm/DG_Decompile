/*
 * FUN_18001895c at 18001895c
 * undefined8 __fastcall FUN_18001895c(longlong param_1)
 * Address ranges: 18001895c-1800189a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18001895c(longlong param_1)

{
  if ((*(int *)(param_1 + 0xa4) != 3) &&
     ((*(char *)(*(longlong *)(param_1 + 0x80) + 0x6819) == '\0' || (*(int *)(param_1 + 0xa4) != 0))
     )) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 1;
    }
    FUN_180008018(*(longlong *)(param_1 + 0x80),*(longlong *)(param_1 + 0x88));
  }
  *(undefined1 *)(param_1 + 0xbe) = 0;
  return 0;
}

