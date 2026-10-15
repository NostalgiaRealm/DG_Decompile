/*
 * FUN_18002cfa4 at 18002cfa4
 * undefined4 * __fastcall FUN_18002cfa4(longlong param_1, undefined4 * param_2, longlong param_3)
 * Address ranges: 18002cfa4-18002cffa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_18002cfa4(longlong param_1,undefined4 *param_2,longlong param_3)

{
  FUN_1800fbea0((undefined1 *)param_2,0,0x40);
  param_2[0xf] = 0x3f800000;
  param_2[10] = 0x3f800000;
  param_2[5] = 0x3f800000;
  *param_2 = 0x3f800000;
  FUN_18002cffc(param_1,param_3,(longlong)param_2);
  return param_2;
}

