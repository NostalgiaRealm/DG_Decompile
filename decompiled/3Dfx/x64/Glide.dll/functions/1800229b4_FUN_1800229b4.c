/*
 * FUN_1800229b4 at 1800229b4
 * undefined __fastcall FUN_1800229b4(longlong * param_1, int param_2)
 * Address ranges: 1800229b4-180022a03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800229b4(longlong *param_1,int param_2)

{
  FUN_1800214d4((longlong *)param_1[0x630]);
  (**(code **)(*param_1 + 0x2a0))(param_1);
  *(int *)((longlong)param_1 + 0x2b74) = param_2;
  *(undefined4 *)(param_1 + 0x54d) = *(undefined4 *)(&DAT_180060e58 + (longlong)param_2 * 4);
  *(undefined1 *)(param_1 + 0x57c) = 1;
  return;
}

