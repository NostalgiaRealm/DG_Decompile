/*
 * FUN_18004bc58 at 18004bc58
 * undefined __fastcall FUN_18004bc58(longlong param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4)
 * Address ranges: 18004bc58-18004bc9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004bc58(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_180049814(param_1);
  FUN_180049954(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004bc95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x248))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

