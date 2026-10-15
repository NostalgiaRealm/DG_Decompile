/*
 * FUN_18004a6b4 at 18004a6b4
 * undefined __fastcall FUN_18004a6b4(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 18004a6b4-18004a6ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a6b4(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_180049954(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004a6e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x110))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

