/*
 * FUN_1800495b8 at 1800495b8
 * undefined __fastcall FUN_1800495b8(longlong param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4)
 * Address ranges: 1800495b8-1800495f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800495b8(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800495f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1c0))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

