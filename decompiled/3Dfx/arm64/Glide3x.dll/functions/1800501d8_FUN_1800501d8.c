/*
 * FUN_1800501d8 at 1800501d8
 * undefined __cdecl FUN_1800501d8(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1800501d8-1800501df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800501d8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1a0))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

