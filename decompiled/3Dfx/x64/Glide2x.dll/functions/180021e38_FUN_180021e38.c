/*
 * FUN_180021e38 at 180021e38
 * undefined __fastcall FUN_180021e38(longlong * param_1, undefined4 param_2)
 * Address ranges: 180021e38-180021e7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021e38(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  (**(code **)(*(longlong *)param_1[0x630] + 0x50))((longlong *)param_1[0x630],0,0);
  *(undefined2 *)((longlong)param_1 + 0x2be4) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x2984) = param_2;
  return;
}

