/*
 * FUN_1800497e8 at 1800497e8
 * undefined __fastcall FUN_1800497e8(longlong param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1800497e8-180049833
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800497e8(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004982d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1f0))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  return;
}

