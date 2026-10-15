/*
 * FUN_1800e474c at 1800e474c
 * undefined __fastcall FUN_1800e474c(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 1800e474c-1800e47c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e474c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_1800e24c4(param_1);
  FUN_1800e2604(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1e8))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7,param_8
            );
  FUN_1800e25b4(param_1);
  return;
}

