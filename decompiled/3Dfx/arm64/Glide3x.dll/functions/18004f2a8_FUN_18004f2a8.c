/*
 * FUN_18004f2a8 at 18004f2a8
 * undefined __cdecl FUN_18004f2a8(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 18004f2a8-18004f2ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f2a8(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x108))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

