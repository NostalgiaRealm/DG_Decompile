/*
 * FUN_18004de70 at 18004de70
 * undefined __cdecl FUN_18004de70(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18004de70-18004de77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004de70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x230))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

