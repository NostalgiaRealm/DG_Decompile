/*
 * FUN_18004d028 at 18004d028
 * undefined __cdecl FUN_18004d028(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18004d028-18004d06f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d028(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18004a830(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x230))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

