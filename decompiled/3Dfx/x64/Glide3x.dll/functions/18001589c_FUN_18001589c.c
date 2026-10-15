/*
 * FUN_18001589c at 18001589c
 * undefined __fastcall FUN_18001589c(longlong * param_1, undefined4 param_2)
 * Address ranges: 18001589c-1800158dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001589c(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  (**(code **)(*(longlong *)param_1[0x660] + 0x50))((longlong *)param_1[0x660],0,0);
  *(undefined1 *)((longlong)param_1 + 0x2c7c) = 1;
  *(undefined4 *)(param_1 + 0x540) = param_2;
  return;
}

