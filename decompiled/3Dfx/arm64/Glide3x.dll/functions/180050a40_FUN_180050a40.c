/*
 * FUN_180050a40 at 180050a40
 * undefined __cdecl FUN_180050a40(longlong param_1, undefined4 param_2)
 * Address ranges: 180050a40-180050a43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050a40(longlong param_1,undefined4 param_2)

{
  FUN_18004e320(param_1);
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x208))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

