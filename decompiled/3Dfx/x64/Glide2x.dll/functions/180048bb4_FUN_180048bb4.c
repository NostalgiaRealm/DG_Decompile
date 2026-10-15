/*
 * FUN_180048bb4 at 180048bb4
 * undefined __fastcall FUN_180048bb4(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 180048bb4-180048c05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048bb4(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  FUN_180047208(param_1);
  FUN_180047348(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x60))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  FUN_1800472f8(param_1);
  return;
}

