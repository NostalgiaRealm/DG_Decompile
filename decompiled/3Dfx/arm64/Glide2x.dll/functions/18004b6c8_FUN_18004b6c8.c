/*
 * FUN_18004b6c8 at 18004b6c8
 * undefined __cdecl FUN_18004b6c8(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 18004b6c8-18004b70f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b6c8(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_18004a830(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x110))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

