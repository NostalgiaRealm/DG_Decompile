/*
 * FUN_18004b3b8 at 18004b3b8
 * undefined __fastcall FUN_18004b3b8(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 18004b3b8-18004b3f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b3b8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_180049954(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004b3ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1a8))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

