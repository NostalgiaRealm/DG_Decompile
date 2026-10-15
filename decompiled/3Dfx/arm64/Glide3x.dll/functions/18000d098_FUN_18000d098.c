/*
 * FUN_18000d098 at 18000d098
 * undefined __cdecl FUN_18000d098(longlong * param_1, int param_2, undefined4 param_3)
 * Address ranges: 18000d098-18000d0ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000d098(longlong *param_1,int param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined4 *)((longlong)param_1 + (longlong)param_2 * 0x1a0 + 0x2e0c) = param_3;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(undefined4 *)((longlong)param_1 + (longlong)param_2 * 4 + 0x2a5c) = param_3;
  return;
}

