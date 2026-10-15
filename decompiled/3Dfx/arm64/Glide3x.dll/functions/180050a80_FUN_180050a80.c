/*
 * FUN_180050a80 at 180050a80
 * undefined __cdecl FUN_180050a80(longlong param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180050a80-180050a87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050a80(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18004e320(param_1);
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x210))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

