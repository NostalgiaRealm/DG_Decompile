/*
 * FUN_1800485c8 at 1800485c8
 * undefined __fastcall FUN_1800485c8(longlong param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4)
 * Address ranges: 1800485c8-180048601
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800485c8(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800485fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x120))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

