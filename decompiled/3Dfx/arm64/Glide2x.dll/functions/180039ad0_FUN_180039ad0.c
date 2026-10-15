/*
 * FUN_180039ad0 at 180039ad0
 * undefined __cdecl FUN_180039ad0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, longlong * param_5)
 * Address ranges: 180039ad0-180039b33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

