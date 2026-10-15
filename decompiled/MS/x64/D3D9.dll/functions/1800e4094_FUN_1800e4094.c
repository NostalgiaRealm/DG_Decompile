/*
 * FUN_1800e4094 at 1800e4094
 * undefined __fastcall FUN_1800e4094(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 1800e4094-1800e40f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e4094(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  FUN_1800e24c4(param_1);
  FUN_1800e2604(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x68))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6);
  FUN_1800e25b4(param_1);
  return;
}

