/*
 * FUN_1000a038 at 1000a038
 * undefined1 __fastcall FUN_1000a038(int param_1)
 * Address ranges: 1000a038-1000a048
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_1000a038(int param_1)

{
  if ((*(char *)(param_1 + 0x10) != '\0') && (*(char *)(param_1 + 0x10) != '\x0f')) {
    return 0;
  }
  return 1;
}

