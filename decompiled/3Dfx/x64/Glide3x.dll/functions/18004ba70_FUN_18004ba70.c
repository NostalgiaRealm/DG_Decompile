/*
 * FUN_18004ba70 at 18004ba70
 * undefined __fastcall FUN_18004ba70(longlong param_1, undefined4 param_2)
 * Address ranges: 18004ba70-18004baa8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004ba70(longlong param_1,undefined4 param_2)

{
  FUN_180049814(param_1);
  FUN_180049954(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004baa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x208))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

