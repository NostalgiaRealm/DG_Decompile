/*
 * FUN_10021154 at 10021154
 * undefined4 __fastcall FUN_10021154(int param_1)
 * Address ranges: 10021154-10021163
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10021154(int param_1)

{
  if (param_1 < 4) {
    return *(undefined4 *)(&DAT_100627e4 + param_1 * 4);
  }
  return 0;
}

