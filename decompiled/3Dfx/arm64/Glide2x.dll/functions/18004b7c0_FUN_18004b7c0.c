/*
 * FUN_18004b7c0 at 18004b7c0
 * undefined __cdecl FUN_18004b7c0(longlong param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4, undefined4 param_5)
 * Address ranges: 18004b7c0-18004b7cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b7c0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  FUN_18004a830(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x118))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  return;
}

