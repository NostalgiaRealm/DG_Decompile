/*
 * FUN_1800495c4 at 1800495c4
 * undefined __fastcall FUN_1800495c4(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 1800495c4-180049607
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800495c4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180047208(param_1);
  FUN_180047348(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180049601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x238))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

