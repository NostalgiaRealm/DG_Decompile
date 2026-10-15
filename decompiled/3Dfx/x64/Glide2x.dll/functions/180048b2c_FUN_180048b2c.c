/*
 * FUN_180048b2c at 180048b2c
 * undefined __fastcall FUN_180048b2c(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined1 param_5, undefined4 param_6, undefined8 param_7)
 * Address ranges: 180048b2c-180048bb1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048b2c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  FUN_180047208(param_1);
  FUN_180047348(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x178))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_1800472f8(param_1);
  return;
}

