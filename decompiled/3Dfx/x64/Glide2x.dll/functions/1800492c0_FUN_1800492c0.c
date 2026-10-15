/*
 * FUN_1800492c0 at 1800492c0
 * undefined __fastcall FUN_1800492c0(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 1800492c0-18004933d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800492c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_180047208(param_1);
  FUN_180047348(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1e8))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7,param_8
            );
  FUN_1800472f8(param_1);
  return;
}

