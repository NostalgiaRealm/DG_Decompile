/*
 * FUN_18004ffc0 at 18004ffc0
 * undefined __cdecl FUN_18004ffc0(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 18004ffc0-18005002f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004ffc0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  FUN_18004e320(param_1);
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x60))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  FUN_18004e370(param_1);
  return;
}

