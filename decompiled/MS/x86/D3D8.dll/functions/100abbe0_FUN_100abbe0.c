/*
 * FUN_100abbe0 at 100abbe0
 * undefined4 * __fastcall FUN_100abbe0(undefined4 * param_1)
 * Address ranges: 100abbe0-100abc63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_100abbe0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 1;
  *(undefined1 *)((int)param_1 + 0x12d) = 0;
  *(undefined1 *)((int)param_1 + 0x12e) = 0;
  *(undefined1 *)((int)param_1 + 0x12f) = 0;
  FUN_100ada8e(param_1 + 0x19,0,0xa0);
  return param_1;
}

