/*
 * FUN_18003a920 at 18003a920
 * undefined __cdecl FUN_18003a920(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, longlong * param_5)
 * Address ranges: 18003a920-18003a983
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003a920(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5)

{
  (**(code **)(*param_5 + 0x2a0))();
  *(undefined4 *)(param_5 + 0x58a) = param_1;
  *(undefined4 *)((longlong)param_5 + 0x2c54) = param_2;
  *(undefined4 *)(param_5 + 0x58b) = param_3;
  *(undefined4 *)((longlong)param_5 + 0x2c5c) = param_4;
  *(undefined1 *)(param_5 + 0x62e) = 1;
  return;
}

