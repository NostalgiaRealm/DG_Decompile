/*
 * FUN_18004c338 at 18004c338
 * undefined __cdecl FUN_18004c338(longlong param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5)
 * Address ranges: 18004c338-18004c3a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c338(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  FUN_18004a790(param_1);
  FUN_18004a830(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x180))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  FUN_18004a7e0(param_1);
  return;
}

