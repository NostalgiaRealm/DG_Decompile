/*
 * FUN_18004fd70 at 18004fd70
 * undefined __cdecl FUN_18004fd70(longlong param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 18004fd70-18004fdc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004fd70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_18004e320(param_1);
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x88))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  FUN_18004e370(param_1);
  return;
}

