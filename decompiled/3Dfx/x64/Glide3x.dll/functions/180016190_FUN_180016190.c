/*
 * FUN_180016190 at 180016190
 * undefined __fastcall FUN_180016190(longlong * param_1, int param_2)
 * Address ranges: 180016190-1800161df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180016190(longlong *param_1,int param_2)

{
  FUN_1800144d0((longlong *)param_1[0x660]);
  (**(code **)(*param_1 + 0x2e0))(param_1);
  *(int *)((longlong)param_1 + 0x2c0c) = param_2;
  *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(&DAT_180062b70 + (longlong)param_2 * 4);
  *(undefined1 *)(param_1 + 0x58f) = 1;
  return;
}

