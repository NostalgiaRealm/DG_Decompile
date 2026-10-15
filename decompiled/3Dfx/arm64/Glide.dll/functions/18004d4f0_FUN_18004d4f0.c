/*
 * FUN_18004d4f0 at 18004d4f0
 * undefined __cdecl FUN_18004d4f0(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 18004d4f0-18004d537
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d4f0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1a8))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

