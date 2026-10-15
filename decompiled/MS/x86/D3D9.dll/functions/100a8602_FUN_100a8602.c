/*
 * FUN_100a8602 at 100a8602
 * undefined4 * __fastcall FUN_100a8602(undefined4 * param_1)
 * Address ranges: 100a8602-100a8690
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_100a8602(undefined4 *param_1)

{
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[0x3e] = 0xffffffff;
  *param_1 = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 3;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 2;
  param_1[0x3b] = 7;
  param_1[0x3c] = 0x100;
  param_1[0x3d] = 0;
  param_1[0x3f] = 0x10100;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((int)param_1 + 0x102) = 0;
  FUN_100cfed0(param_1 + 5,0,0xc0);
  return param_1;
}

