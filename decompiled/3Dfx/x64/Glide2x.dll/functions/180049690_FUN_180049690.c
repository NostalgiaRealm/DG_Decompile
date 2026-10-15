/*
 * FUN_180049690 at 180049690
 * undefined __fastcall FUN_180049690(longlong param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4)
 * Address ranges: 180049690-1800496d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049690(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_180047208(param_1);
  FUN_180047348(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800496cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x250))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

