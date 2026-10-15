/*
 * FUN_180048fd4 at 180048fd4
 * undefined __fastcall FUN_180048fd4(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined1 param_5, undefined4 param_6, undefined8 param_7)
 * Address ranges: 180048fd4-180049059
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048fd4(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x178))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_1800477a0(param_1);
  return;
}

