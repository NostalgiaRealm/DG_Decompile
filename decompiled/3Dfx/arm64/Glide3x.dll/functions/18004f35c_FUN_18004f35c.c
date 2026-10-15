/*
 * FUN_18004f35c at 18004f35c
 * undefined __cdecl FUN_18004f35c(longlong param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4, undefined4 param_5)
 * Address ranges: 18004f35c-18004f3af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f35c(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x118))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  return;
}

