/*
 * FUN_18004c5bc at 18004c5bc
 * undefined __cdecl FUN_18004c5bc(longlong param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4, undefined4 param_5)
 * Address ranges: 18004c5bc-18004c60f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c5bc(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x120))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  return;
}

