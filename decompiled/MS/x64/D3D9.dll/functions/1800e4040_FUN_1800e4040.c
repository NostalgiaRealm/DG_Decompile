/*
 * FUN_1800e4040 at 1800e4040
 * undefined __fastcall FUN_1800e4040(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1800e4040-1800e4091
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e4040(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  FUN_1800e24c4(param_1);
  FUN_1800e2604(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x60))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  FUN_1800e25b4(param_1);
  return;
}

