/*
 * FUN_180039d58 at 180039d58
 * undefined __cdecl FUN_180039d58(longlong * param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180039d58-180039dc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039d58(longlong *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0x2a0))();
  lVar1 = (longlong)param_2;
  *(undefined4 *)((longlong)param_1 + lVar1 * 0x180 + 0x2d24) = param_3;
  *(undefined4 *)(param_1 + lVar1 * 0x30 + 0x5a5) = param_4;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(undefined1 *)((longlong)param_1 + lVar1 + 0x3173) = 1;
  return;
}

