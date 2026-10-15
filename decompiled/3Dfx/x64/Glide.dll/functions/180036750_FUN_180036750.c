/*
 * FUN_180036750 at 180036750
 * undefined __fastcall FUN_180036750(longlong * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 180036750-1800367c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180036750(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)(param_1 + 0x58a) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x2c54) = param_3;
  *(undefined4 *)(param_1 + 0x58b) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x2c5c) = param_5;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

