/*
 * FUN_180050230 at 180050230
 * undefined __cdecl FUN_180050230(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180050230-180050277
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050230(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1a8))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

