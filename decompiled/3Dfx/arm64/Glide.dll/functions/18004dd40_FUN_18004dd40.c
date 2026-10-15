/*
 * FUN_18004dd40 at 18004dd40
 * undefined __cdecl FUN_18004dd40(longlong param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18004dd40-18004dd47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004dd40(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18004b5e0(param_1);
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x210))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

