/*
 * FUN_180038f08 at 180038f08
 * undefined __cdecl FUN_180038f08(longlong * param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180038f08-180038f73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038f08(longlong *param_1,int param_2,undefined4 param_3,undefined4 param_4)

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

