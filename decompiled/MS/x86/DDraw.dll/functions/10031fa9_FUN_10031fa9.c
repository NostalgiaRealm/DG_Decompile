/*
 * FUN_10031fa9 at 10031fa9
 * undefined1 __fastcall FUN_10031fa9(int param_1)
 * Address ranges: 10031fa9-10031fc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_10031fa9(int param_1)

{
  if (((*(uint *)(param_1 + 0x1b8) & 0x20000) == 0) && ((*(byte *)(param_1 + 0x19c) & 4) == 0)) {
    return 1;
  }
  return 0;
}

