/*
 * FUN_180012cc4 at 180012cc4
 * undefined __fastcall FUN_180012cc4(longlong * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 180012cc4-180012d3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012cc4(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined4 *)((longlong)param_1 + 0x2d7c) = param_5;
  *(undefined4 *)(param_1 + 0x5b0) = param_6;
  *(undefined4 *)(param_1 + 0x5b1) = param_5;
  *(undefined4 *)(param_1 + 0x5ad) = param_5;
  *(undefined4 *)(param_1 + 0x5ae) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x2d74) = param_3;
  *(undefined4 *)(param_1 + 0x5af) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x2d84) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x2d64) = param_4;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

