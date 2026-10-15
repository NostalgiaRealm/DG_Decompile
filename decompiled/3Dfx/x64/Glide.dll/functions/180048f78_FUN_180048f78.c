/*
 * FUN_180048f78 at 180048f78
 * undefined __fastcall FUN_180048f78(longlong param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5)
 * Address ranges: 180048f78-180048fd0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048f78(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x180))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  FUN_1800477a0(param_1);
  return;
}

