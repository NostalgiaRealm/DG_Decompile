/*
 * FUN_180049110 at 180049110
 * undefined __fastcall FUN_180049110(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180049110-180049155
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049110(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x70))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  FUN_1800477a0(param_1);
  return;
}

