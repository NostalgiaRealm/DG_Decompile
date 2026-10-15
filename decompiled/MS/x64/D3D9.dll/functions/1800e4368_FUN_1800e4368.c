/*
 * FUN_1800e4368 at 1800e4368
 * undefined __fastcall FUN_1800e4368(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined4 param_7)
 * Address ranges: 1800e4368-1800e43d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e4368(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  FUN_1800e24c4(param_1);
  FUN_1800e2604(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x90))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_1800e25b4(param_1);
  return;
}

