/*
 * FUN_180050b10 at 180050b10
 * undefined __cdecl FUN_180050b10(longlong param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined4 param_5)
 * Address ranges: 180050b10-180050b1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050b10(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  FUN_18004e320(param_1);
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x220))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  return;
}

