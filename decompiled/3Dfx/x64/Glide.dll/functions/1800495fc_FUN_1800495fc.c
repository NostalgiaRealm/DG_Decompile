/*
 * FUN_1800495fc at 1800495fc
 * undefined __fastcall FUN_1800495fc(longlong param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4)
 * Address ranges: 1800495fc-18004963d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800495fc(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180049637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1c8))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

