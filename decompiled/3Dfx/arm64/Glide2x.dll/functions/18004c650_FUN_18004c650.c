/*
 * FUN_18004c650 at 18004c650
 * undefined __cdecl FUN_18004c650(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 18004c650-18004c697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c650(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_18004a830(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1a0))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

