/*
 * FUN_180049bc8 at 180049bc8
 * undefined __fastcall FUN_180049bc8(longlong param_1, undefined8 param_2)
 * Address ranges: 180049bc8-180049c02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049bc8(longlong param_1,undefined8 param_2)

{
  FUN_1800476b0(param_1);
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180049bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x260))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

