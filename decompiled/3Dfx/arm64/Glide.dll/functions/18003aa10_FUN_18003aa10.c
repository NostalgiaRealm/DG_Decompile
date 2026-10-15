/*
 * FUN_18003aa10 at 18003aa10
 * undefined __cdecl FUN_18003aa10(longlong * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 18003aa10-18003aa83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003aa10(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)(param_1 + 0x59d) = param_5;
  *(undefined4 *)(param_1 + 0x59a) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x2cd4) = param_3;
  *(undefined4 *)(param_1 + 0x59b) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x2cdc) = param_5;
  *(undefined4 *)(param_1 + 0x59c) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x2ce4) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x2cc4) = param_4;
  *(undefined4 *)(param_1 + 0x599) = param_5;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

