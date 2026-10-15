/*
 * FUN_1800489f8 at 1800489f8
 * undefined __fastcall FUN_1800489f8(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6)
 * Address ranges: 1800489f8-180048a5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800489f8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_180047208(param_1);
  FUN_180047348(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x78))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6);
  FUN_1800472f8(param_1);
  return;
}

