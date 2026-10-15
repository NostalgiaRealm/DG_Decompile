/*
 * FUN_180050278 at 180050278
 * undefined __cdecl FUN_180050278(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined8 param_6, undefined8 param_7)
 * Address ranges: 180050278-180050287
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050278(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1b0))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

