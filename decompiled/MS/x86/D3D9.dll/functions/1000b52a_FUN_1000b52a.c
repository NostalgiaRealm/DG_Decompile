/*
 * FUN_1000b52a at 1000b52a
 * undefined1 __fastcall FUN_1000b52a(int param_1)
 * Address ranges: 1000b52a-1000b540
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_1000b52a(int param_1)

{
  if (((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x10) == '\x0f')) &&
     (*(char *)(param_1 + 0x13) == -0x3d)) {
    return 1;
  }
  return 0;
}

