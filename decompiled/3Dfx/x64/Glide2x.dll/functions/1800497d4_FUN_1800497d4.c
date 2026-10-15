/*
 * FUN_1800497d4 at 1800497d4
 * undefined __fastcall FUN_1800497d4(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1800497d4-180049815
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800497d4(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_180047208(param_1);
  FUN_180047348(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004980f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x278))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

