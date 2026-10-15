/*
 * FUN_180018e28 at 180018e28
 * undefined __cdecl FUN_180018e28(longlong * param_1, int param_2)
 * Address ranges: 180018e28-180018e7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018e28(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_180016b90((longlong *)param_1[0x660]);
  (**(code **)(*param_1 + 0x2e0))(param_1);
  uVar1 = *(undefined4 *)(&DAT_180065ad0 + (longlong)param_2 * 4);
  *(int *)((longlong)param_1 + 0x2c0c) = param_2;
  *(undefined4 *)(param_1 + 0x560) = uVar1;
  *(undefined1 *)(param_1 + 0x58f) = 1;
  return;
}

