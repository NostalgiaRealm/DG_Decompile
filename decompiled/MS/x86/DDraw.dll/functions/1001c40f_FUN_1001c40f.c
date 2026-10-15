/*
 * FUN_1001c40f at 1001c40f
 * undefined1 __fastcall FUN_1001c40f(int param_1, uint param_2, uint param_3)
 * Address ranges: 1001c40f-1001c443
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_1001c40f(int param_1,uint param_2,uint param_3)

{
  if ((param_2 != 0) && ((param_2 & 0x3f00) == 0)) {
    FUN_10056a5d(param_1 + 0xc,param_2);
  }
  if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
    FUN_10056a5d(param_1 + 0xc,param_3);
  }
  return 1;
}

