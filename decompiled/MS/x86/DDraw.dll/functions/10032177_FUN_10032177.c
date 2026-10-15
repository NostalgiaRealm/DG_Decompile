/*
 * FUN_10032177 at 10032177
 * undefined1 __fastcall FUN_10032177(int param_1)
 * Address ranges: 10032177-1003218e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_10032177(int param_1)

{
  if (((*(uint *)(param_1 + 0x68) & 0x800) == 0) && ((*(uint *)(param_1 + 0x6c) & 0x20010) == 0)) {
    return 1;
  }
  return 0;
}

