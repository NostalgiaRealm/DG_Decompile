/*
 * FUN_180049254 at 180049254
 * undefined __fastcall FUN_180049254(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180049254-18004928f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049254(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180049289. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1a8))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

