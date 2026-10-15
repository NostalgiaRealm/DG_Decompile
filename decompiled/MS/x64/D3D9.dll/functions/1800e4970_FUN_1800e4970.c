/*
 * FUN_1800e4970 at 1800e4970
 * undefined __fastcall FUN_1800e4970(longlong param_1, undefined8 param_2)
 * Address ranges: 1800e4970-1800e49a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e4970(longlong param_1,undefined8 param_2)

{
  FUN_1800e2604(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800e499c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x218))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

