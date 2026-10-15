/*
 * FUN_18000c6e8 at 18000c6e8
 * undefined __fastcall FUN_18000c6e8(longlong param_1, int param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5)
 * Address ranges: 18000c6e8-18000c72f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000c6e8(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  *(undefined8 *)(param_1 + 0x33b8) = param_5;
  *(undefined8 *)(param_1 + 0x3400) = param_3;
  *(undefined8 *)(param_1 + 0x33b0) = param_4;
  *(undefined1 *)(param_1 + 0x345a) = 1;
  *(undefined4 *)(param_1 + 0x340c) = *(undefined4 *)(&DAT_180063a28 + (longlong)param_2 * 4);
  FUN_18004a678(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),param_2);
  return;
}

