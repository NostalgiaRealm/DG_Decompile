/*
 * FUN_18004b94c at 18004b94c
 * undefined __fastcall FUN_18004b94c(longlong param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 18004b94c-18004b997
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b94c(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_180049814(param_1);
  FUN_180049954(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004b991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1f0))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  return;
}

