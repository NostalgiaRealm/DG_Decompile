/*
 * FUN_18004d208 at 18004d208
 * undefined __cdecl FUN_18004d208(undefined4 param_1, longlong param_2, undefined8 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined8 param_7)
 * Address ranges: 18004d208-18004d27f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d208(undefined4 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  FUN_18004b5e0(param_2);
  FUN_18004b680(param_2);
  (**(code **)(**(longlong **)(param_2 + 0x688) + 0x178))
            (param_1,*(longlong **)(param_2 + 0x688),param_3,param_4,param_5,param_6,param_7);
  FUN_18004b630(param_2);
  return;
}

