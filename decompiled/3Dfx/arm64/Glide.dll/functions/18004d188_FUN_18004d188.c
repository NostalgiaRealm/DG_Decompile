/*
 * FUN_18004d188 at 18004d188
 * undefined __cdecl FUN_18004d188(longlong param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5)
 * Address ranges: 18004d188-18004d1f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d188(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  FUN_18004b5e0(param_1);
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x180))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  FUN_18004b630(param_1);
  return;
}

