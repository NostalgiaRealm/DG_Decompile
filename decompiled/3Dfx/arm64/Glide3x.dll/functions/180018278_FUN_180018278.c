/*
 * FUN_180018278 at 180018278
 * undefined __cdecl FUN_180018278(longlong * param_1, undefined4 param_2)
 * Address ranges: 180018278-1800182cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018278(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  (**(code **)(*(longlong *)param_1[0x660] + 0x50))((longlong *)param_1[0x660],0,0);
  *(undefined4 *)(param_1 + 0x540) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x2c7c) = 1;
  return;
}

