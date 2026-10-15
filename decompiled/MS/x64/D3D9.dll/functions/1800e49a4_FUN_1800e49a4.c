/*
 * FUN_1800e49a4 at 1800e49a4
 * undefined __fastcall FUN_1800e49a4(longlong param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 1800e49a4-1800e49e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e49a4(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800e24c4(param_1);
  FUN_1800e2604(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800e49df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x220))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

