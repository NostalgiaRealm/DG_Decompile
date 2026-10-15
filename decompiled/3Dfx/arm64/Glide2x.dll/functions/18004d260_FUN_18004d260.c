/*
 * FUN_18004d260 at 18004d260
 * undefined __cdecl FUN_18004d260(longlong param_1, undefined4 param_2, undefined8 param_3)
 * Address ranges: 18004d260-18004d267
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d260(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_18004a830(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x268))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  return;
}

