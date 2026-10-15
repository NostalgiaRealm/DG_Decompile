/*
 * FUN_18004c4a0 at 18004c4a0
 * undefined __cdecl FUN_18004c4a0(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 18004c4a0-18004c517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c4a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  FUN_18004a790(param_1);
  FUN_18004a830(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x68))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6);
  FUN_18004a7e0(param_1);
  return;
}

