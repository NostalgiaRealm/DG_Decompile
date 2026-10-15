/*
 * FUN_180036830 at 180036830
 * undefined __fastcall FUN_180036830(longlong * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 180036830-1800368a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180036830(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)((longlong)param_1 + 0x2cdc) = param_5;
  *(undefined4 *)(param_1 + 0x59c) = param_6;
  *(undefined4 *)(param_1 + 0x59d) = param_5;
  *(undefined4 *)(param_1 + 0x599) = param_5;
  *(undefined4 *)(param_1 + 0x59a) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x2cd4) = param_3;
  *(undefined4 *)(param_1 + 0x59b) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x2ce4) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x2cc4) = param_4;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

