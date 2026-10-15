/*
 * FUN_180048ad0 at 180048ad0
 * undefined __fastcall FUN_180048ad0(longlong param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5)
 * Address ranges: 180048ad0-180048b28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048ad0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  FUN_180047208(param_1);
  FUN_180047348(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x180))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  FUN_1800472f8(param_1);
  return;
}

