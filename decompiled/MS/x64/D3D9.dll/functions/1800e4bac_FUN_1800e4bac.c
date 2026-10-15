/*
 * FUN_1800e4bac at 1800e4bac
 * undefined __fastcall FUN_1800e4bac(longlong param_1, undefined8 param_2)
 * Address ranges: 1800e4bac-1800e4be6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e4bac(longlong param_1,undefined8 param_2)

{
  FUN_1800e24c4(param_1);
  FUN_1800e2604(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800e4be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x260))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

