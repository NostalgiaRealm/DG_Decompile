/*
 * FUN_18004d368 at 18004d368
 * undefined __cdecl FUN_18004d368(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 18004d368-18004d3c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d368(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_18004b5e0(param_1);
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x70))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  FUN_18004b630(param_1);
  return;
}

