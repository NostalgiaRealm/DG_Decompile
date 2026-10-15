/*
 * FUN_180023f38 at 180023f38
 * undefined __cdecl FUN_180023f38(longlong * param_1, int param_2)
 * Address ranges: 180023f38-180023f8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023f38(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_1800228b0((longlong *)param_1[0x630]);
  (**(code **)(*param_1 + 0x2a0))(param_1);
  uVar1 = *(undefined4 *)(&DAT_180061e00 + (longlong)param_2 * 4);
  *(int *)((longlong)param_1 + 0x2b74) = param_2;
  *(undefined4 *)(param_1 + 0x54d) = uVar1;
  *(undefined1 *)(param_1 + 0x57c) = 1;
  return;
}

