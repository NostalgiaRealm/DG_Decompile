/*
 * FUN_1800a4770 at 1800a4770
 * undefined1 __fastcall FUN_1800a4770(longlong param_1, uint param_2, uint param_3)
 * Address ranges: 1800a4770-1800a47af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800a4770(longlong param_1,uint param_2,uint param_3)

{
  if ((param_2 != 0) && ((param_2 & 0x3f00) == 0)) {
    FUN_1800ec960(param_1 + 0x10,param_2);
  }
  if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
    FUN_1800ec960(param_1 + 0x10,param_3);
  }
  return 1;
}

