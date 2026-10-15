/*
 * FUN_18004998c at 18004998c
 * undefined __fastcall FUN_18004998c(longlong param_1, undefined8 param_2)
 * Address ranges: 18004998c-1800499be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004998c(longlong param_1,undefined8 param_2)

{
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800499b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x218))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

