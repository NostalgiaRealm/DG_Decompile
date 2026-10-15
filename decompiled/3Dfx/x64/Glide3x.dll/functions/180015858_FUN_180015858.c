/*
 * FUN_180015858 at 180015858
 * undefined __fastcall FUN_180015858(longlong * param_1, undefined4 param_2)
 * Address ranges: 180015858-18001589b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180015858(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  (**(code **)(*(longlong *)param_1[0x660] + 0x50))((longlong *)param_1[0x660],0,0);
  *(undefined2 *)((longlong)param_1 + 0x2c7c) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x29fc) = param_2;
  return;
}

