/*
 * FUN_1008e318 at 1008e318
 * undefined4 __fastcall FUN_1008e318(int param_1)
 * Address ranges: 1008e318-1008e327
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1008e318(int param_1)

{
  if (param_1 < 4) {
    return *(undefined4 *)(&DAT_100d2634 + param_1 * 4);
  }
  return 0;
}

