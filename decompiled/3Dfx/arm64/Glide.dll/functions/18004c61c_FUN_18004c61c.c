/*
 * FUN_18004c61c at 18004c61c
 * undefined __cdecl FUN_18004c61c(longlong param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4, undefined4 param_5)
 * Address ranges: 18004c61c-18004c66f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c61c(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x118))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  return;
}

