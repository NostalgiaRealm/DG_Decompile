/*
 * FUN_18004a768 at 18004a768
 * undefined __fastcall FUN_18004a768(longlong param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4)
 * Address ranges: 18004a768-18004a7a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a768(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_180049954(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004a79b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x118))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

