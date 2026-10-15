/*
 * FUN_180048de8 at 180048de8
 * undefined __fastcall FUN_180048de8(longlong param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 180048de8-180048e49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048de8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x98))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6);
  FUN_1800477a0(param_1);
  return;
}

