/*
 * FUN_180049c48 at 180049c48
 * undefined __fastcall FUN_180049c48(longlong param_1, undefined8 param_2)
 * Address ranges: 180049c48-180049c7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049c48(longlong param_1,undefined8 param_2)

{
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180049c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x270))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

