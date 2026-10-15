/*
 * FUN_1800494e4 at 1800494e4
 * undefined __fastcall FUN_1800494e4(longlong param_1, undefined8 param_2)
 * Address ranges: 1800494e4-180049516
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800494e4(longlong param_1,undefined8 param_2)

{
  FUN_180047348(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180049510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x218))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

