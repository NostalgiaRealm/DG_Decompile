/*
 * FUN_180050608 at 180050608
 * undefined __cdecl FUN_180050608(longlong param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4)
 * Address ranges: 180050608-180050657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050608(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_18004e320(param_1);
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1b8))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

