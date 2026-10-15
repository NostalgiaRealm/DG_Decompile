/*
 * FUN_18004b7cc at 18004b7cc
 * undefined __cdecl FUN_18004b7cc(longlong param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4, undefined4 param_5)
 * Address ranges: 18004b7cc-18004b81f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b7cc(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  FUN_18004a830(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x118))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  return;
}

