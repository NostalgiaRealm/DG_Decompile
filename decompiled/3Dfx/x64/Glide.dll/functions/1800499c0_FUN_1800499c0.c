/*
 * FUN_1800499c0 at 1800499c0
 * undefined __fastcall FUN_1800499c0(longlong param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 1800499c0-180049a01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800499c0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800499fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x220))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

