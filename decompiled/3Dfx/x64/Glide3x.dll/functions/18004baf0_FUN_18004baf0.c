/*
 * FUN_18004baf0 at 18004baf0
 * undefined __fastcall FUN_18004baf0(longlong param_1, undefined8 param_2)
 * Address ranges: 18004baf0-18004bb22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004baf0(longlong param_1,undefined8 param_2)

{
  FUN_180049954(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004bb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x218))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

