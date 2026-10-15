/*
 * FUN_180049a6c at 180049a6c
 * undefined __fastcall FUN_180049a6c(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180049a6c-180049aaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049a6c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180049aa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x238))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

