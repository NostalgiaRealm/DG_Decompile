/*
 * FUN_180050e70 at 180050e70
 * undefined __cdecl FUN_180050e70(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180050e70-180050e77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050e70(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_18004e320(param_1);
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x278))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

