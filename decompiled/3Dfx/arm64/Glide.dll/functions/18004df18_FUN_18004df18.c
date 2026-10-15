/*
 * FUN_18004df18 at 18004df18
 * undefined __cdecl FUN_18004df18(longlong param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4)
 * Address ranges: 18004df18-18004df1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004df18(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_18004b5e0(param_1);
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x240))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

