/*
 * FUN_180049078 at 180049078
 * undefined __fastcall FUN_180049078(longlong param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 180049078-1800490c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049078(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180047208(param_1);
  FUN_180047348(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x198))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  FUN_1800472f8(param_1);
  return;
}

