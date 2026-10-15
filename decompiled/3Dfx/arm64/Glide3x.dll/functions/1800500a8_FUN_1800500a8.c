/*
 * FUN_1800500a8 at 1800500a8
 * undefined __cdecl FUN_1800500a8(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1800500a8-180050107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800500a8(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_18004e320(param_1);
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x70))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  FUN_18004e370(param_1);
  return;
}

