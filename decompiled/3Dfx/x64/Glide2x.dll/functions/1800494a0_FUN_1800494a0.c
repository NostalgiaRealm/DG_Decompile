/*
 * FUN_1800494a0 at 1800494a0
 * undefined __fastcall FUN_1800494a0(longlong param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 1800494a0-1800494e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800494a0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180047208(param_1);
  FUN_180047348(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800494db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x210))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

