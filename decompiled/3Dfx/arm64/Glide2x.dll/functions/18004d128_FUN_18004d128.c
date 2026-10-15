/*
 * FUN_18004d128 at 18004d128
 * undefined __cdecl FUN_18004d128(longlong param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4)
 * Address ranges: 18004d128-18004d177
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d128(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_18004a790(param_1);
  FUN_18004a830(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x248))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

