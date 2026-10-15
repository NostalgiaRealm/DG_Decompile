/*
 * FUN_180049768 at 180049768
 * undefined __fastcall FUN_180049768(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 180049768-1800497e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049768(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1e8))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7,param_8
            );
  FUN_1800477a0(param_1);
  return;
}

