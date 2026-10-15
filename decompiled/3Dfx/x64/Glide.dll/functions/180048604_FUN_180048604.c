/*
 * FUN_180048604 at 180048604
 * undefined __fastcall FUN_180048604(longlong param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4)
 * Address ranges: 180048604-18004863d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048604(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180048637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x118))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

