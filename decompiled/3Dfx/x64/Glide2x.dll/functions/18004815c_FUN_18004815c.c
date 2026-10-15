/*
 * FUN_18004815c at 18004815c
 * undefined __fastcall FUN_18004815c(longlong param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4)
 * Address ranges: 18004815c-180048195
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004815c(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_180047348(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004818f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x118))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

