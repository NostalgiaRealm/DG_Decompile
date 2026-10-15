/*
 * FUN_1003218f at 1003218f
 * undefined1 __fastcall FUN_1003218f(int param_1)
 * Address ranges: 1003218f-100321a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_1003218f(int param_1)

{
  if (((*(uint *)(param_1 + 0x6c) & 0x20010) != 0) && ((*(uint *)(param_1 + 0x68) & 0x1000) != 0)) {
    return 1;
  }
  return 0;
}

