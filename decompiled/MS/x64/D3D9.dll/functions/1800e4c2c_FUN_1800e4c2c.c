/*
 * FUN_1800e4c2c at 1800e4c2c
 * undefined __fastcall FUN_1800e4c2c(longlong param_1, undefined8 param_2)
 * Address ranges: 1800e4c2c-1800e4c5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e4c2c(longlong param_1,undefined8 param_2)

{
  FUN_1800e2604(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800e4c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x270))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

