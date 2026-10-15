/*
 * FUN_18004c6f8 at 18004c6f8
 * undefined __cdecl FUN_18004c6f8(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined8 param_6, undefined8 param_7)
 * Address ranges: 18004c6f8-18004c75f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c6f8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_18004a830(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1b0))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

