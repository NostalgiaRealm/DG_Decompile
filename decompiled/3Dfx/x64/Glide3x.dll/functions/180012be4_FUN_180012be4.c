/*
 * FUN_180012be4 at 180012be4
 * undefined __fastcall FUN_180012be4(longlong * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 180012be4-180012c56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012be4(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined4 *)(param_1 + 0x59e) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x2cf4) = param_3;
  *(undefined4 *)(param_1 + 0x59f) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x2cfc) = param_5;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

