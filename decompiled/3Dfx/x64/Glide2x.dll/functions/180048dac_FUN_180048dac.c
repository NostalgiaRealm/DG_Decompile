/*
 * FUN_180048dac at 180048dac
 * undefined __fastcall FUN_180048dac(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180048dac-180048de7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048dac(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_180047348(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180048de1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1a8))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

