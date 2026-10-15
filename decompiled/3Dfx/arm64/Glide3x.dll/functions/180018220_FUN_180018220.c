/*
 * FUN_180018220 at 180018220
 * undefined __cdecl FUN_180018220(longlong * param_1, undefined4 param_2)
 * Address ranges: 180018220-180018273
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018220(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  (**(code **)(*(longlong *)param_1[0x660] + 0x50))((longlong *)param_1[0x660],0,0);
  *(undefined4 *)((longlong)param_1 + 0x29fc) = param_2;
  *(undefined2 *)((longlong)param_1 + 0x2c7c) = 0x101;
  return;
}

