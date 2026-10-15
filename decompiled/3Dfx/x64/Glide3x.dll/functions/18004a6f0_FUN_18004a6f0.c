/*
 * FUN_18004a6f0 at 18004a6f0
 * undefined __fastcall FUN_18004a6f0(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 18004a6f0-18004a729
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a6f0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_180049954(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004a723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x108))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

