/*
 * FUN_18004d030 at 18004d030
 * undefined __cdecl FUN_18004d030(longlong param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 18004d030-18004d087
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d030(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_18004b5e0(param_1);
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x88))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  FUN_18004b630(param_1);
  return;
}

