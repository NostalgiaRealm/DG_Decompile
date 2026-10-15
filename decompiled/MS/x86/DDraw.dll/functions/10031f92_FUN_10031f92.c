/*
 * FUN_10031f92 at 10031f92
 * undefined4 __fastcall FUN_10031f92(int param_1)
 * Address ranges: 10031f92-10031fa8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10031f92(int param_1)

{
  if ((*(uint *)(param_1 + 0x154) & 0x20000) != 0) {
    return *(undefined4 *)(param_1 + 0x168);
  }
  return 1;
}

