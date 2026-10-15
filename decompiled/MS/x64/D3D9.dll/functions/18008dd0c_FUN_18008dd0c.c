/*
 * FUN_18008dd0c at 18008dd0c
 * undefined __fastcall FUN_18008dd0c(longlong param_1, longlong * param_2, longlong * param_3)
 * Address ranges: 18008dd0c-18008dd5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008dd0c(longlong param_1,longlong *param_2,longlong *param_3)

{
  FUN_18008dca8(param_1,1,1);
  *(longlong **)(param_1 + 0x18) = param_2;
  **(undefined8 **)(param_1 + 0x30) = param_3;
  (**(code **)(*param_3 + 8))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00018008dd5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2);
  return;
}

