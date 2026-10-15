/*
 * FUN_10089625 at 10089625
 * undefined1 __fastcall FUN_10089625(int param_1, uint param_2, uint param_3)
 * Address ranges: 10089625-10089659
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_10089625(int param_1,uint param_2,uint param_3)

{
  if ((param_2 != 0) && ((param_2 & 0x3f00) == 0)) {
    FUN_100c2ed2(param_1 + 0xc,param_2);
  }
  if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
    FUN_100c2ed2(param_1 + 0xc,param_3);
  }
  return 1;
}

