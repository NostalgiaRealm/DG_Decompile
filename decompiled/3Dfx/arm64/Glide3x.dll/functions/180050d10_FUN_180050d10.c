/*
 * FUN_180050d10 at 180050d10
 * undefined __cdecl FUN_180050d10(longlong param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4)
 * Address ranges: 180050d10-180050d5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050d10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_18004e320(param_1);
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x250))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

