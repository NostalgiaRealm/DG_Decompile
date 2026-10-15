/*
 * FUN_10078140 at 10078140
 * undefined4 __fastcall FUN_10078140(int param_1)
 * Address ranges: 10078140-1007814f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10078140(int param_1)

{
  if (param_1 < 4) {
    return *(undefined4 *)(&DAT_100b04b4 + param_1 * 4);
  }
  return 0;
}

