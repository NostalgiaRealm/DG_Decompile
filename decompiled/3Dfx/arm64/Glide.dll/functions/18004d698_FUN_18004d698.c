/*
 * FUN_18004d698 at 18004d698
 * undefined __cdecl FUN_18004d698(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined4 param_7)
 * Address ranges: 18004d698-18004d70f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d698(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  FUN_18004b5e0(param_1);
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x90))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_18004b630(param_1);
  return;
}

