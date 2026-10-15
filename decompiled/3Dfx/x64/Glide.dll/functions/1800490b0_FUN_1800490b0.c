/*
 * FUN_1800490b0 at 1800490b0
 * undefined __fastcall FUN_1800490b0(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 1800490b0-18004910c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800490b0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x68))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6);
  FUN_1800477a0(param_1);
  return;
}

