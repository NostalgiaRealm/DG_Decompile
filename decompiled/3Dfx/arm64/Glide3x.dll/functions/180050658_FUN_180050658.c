/*
 * FUN_180050658 at 180050658
 * undefined __cdecl FUN_180050658(longlong param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4)
 * Address ranges: 180050658-18005065f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050658(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_18004e320(param_1);
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1c0))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

