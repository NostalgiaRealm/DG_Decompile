/*
 * FUN_100054be at 100054be
 * undefined1 __fastcall FUN_100054be(uint param_1)
 * Address ranges: 100054be-100054da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_100054be(uint param_1)

{
  if (param_1 == 0xff) {
    param_1 = 0x1b;
  }
  else if (0x1b < param_1) {
    return 0;
  }
  return (&DAT_100588f8)[param_1];
}

