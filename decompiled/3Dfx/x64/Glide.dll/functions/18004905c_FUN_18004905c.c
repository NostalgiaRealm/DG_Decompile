/*
 * FUN_18004905c at 18004905c
 * undefined __fastcall FUN_18004905c(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 18004905c-1800490ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004905c(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x60))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  FUN_1800477a0(param_1);
  return;
}

