/*
 * FUN_180023638 at 180023638
 * undefined __cdecl FUN_180023638(longlong * param_1, undefined4 param_2)
 * Address ranges: 180023638-18002368b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023638(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  (**(code **)(*(longlong *)param_1[0x630] + 0x50))((longlong *)param_1[0x630],0,0);
  *(undefined4 *)((longlong)param_1 + 0x2984) = param_2;
  *(undefined2 *)((longlong)param_1 + 0x2be4) = 0x101;
  return;
}

