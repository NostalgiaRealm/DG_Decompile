/*
 * FUN_180049720 at 180049720
 * undefined __fastcall FUN_180049720(longlong param_1, undefined8 param_2)
 * Address ranges: 180049720-18004975a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049720(longlong param_1,undefined8 param_2)

{
  FUN_180047208(param_1);
  FUN_180047348(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180049754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x260))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

