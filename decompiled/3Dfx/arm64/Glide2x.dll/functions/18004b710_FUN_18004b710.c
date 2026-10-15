/*
 * FUN_18004b710 at 18004b710
 * undefined __cdecl FUN_18004b710(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 18004b710-18004b717
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b710(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_18004a830(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x108))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

