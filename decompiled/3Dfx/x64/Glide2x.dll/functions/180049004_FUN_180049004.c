/*
 * FUN_180049004 at 180049004
 * undefined __fastcall FUN_180049004(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined8 param_7)
 * Address ranges: 180049004-180049074
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049004(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  FUN_180047208(param_1);
  FUN_180047348(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 400))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_1800472f8(param_1);
  return;
}

