/*
 * FUN_180048c08 at 180048c08
 * undefined __fastcall FUN_180048c08(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 180048c08-180048c64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048c08(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  FUN_180047208(param_1);
  FUN_180047348(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x68))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6);
  FUN_1800472f8(param_1);
  return;
}

