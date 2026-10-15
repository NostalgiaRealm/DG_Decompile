/*
 * FUN_180048d70 at 180048d70
 * undefined __fastcall FUN_180048d70(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180048d70-180048dab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048d70(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_180047348(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180048da5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1a0))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

