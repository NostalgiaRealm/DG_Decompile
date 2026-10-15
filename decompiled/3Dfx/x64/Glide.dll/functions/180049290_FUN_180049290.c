/*
 * FUN_180049290 at 180049290
 * undefined __fastcall FUN_180049290(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180049290-1800492cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049290(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800492c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1b0))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

