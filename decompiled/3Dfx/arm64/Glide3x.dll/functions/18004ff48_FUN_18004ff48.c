/*
 * FUN_18004ff48 at 18004ff48
 * undefined __cdecl FUN_18004ff48(undefined4 param_1, longlong param_2, undefined8 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined8 param_7)
 * Address ranges: 18004ff48-18004ffbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004ff48(undefined4 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  FUN_18004e320(param_2);
  FUN_18004e3c0(param_2);
  (**(code **)(**(longlong **)(param_2 + 0x688) + 0x178))
            (param_1,*(longlong **)(param_2 + 0x688),param_3,param_4,param_5,param_6,param_7);
  FUN_18004e370(param_2);
  return;
}

