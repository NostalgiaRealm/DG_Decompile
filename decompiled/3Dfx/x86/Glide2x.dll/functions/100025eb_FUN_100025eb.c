/*
 * FUN_100025eb at 100025eb
 * undefined4 __stdcall FUN_100025eb(undefined4 param_1, int param_2)
 * Address ranges: 100025eb-1000261c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100025eb(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = FUN_10012760();
    FUN_100133fe(puVar1);
  }
  else if (param_2 == 1) {
    DAT_1005974c = param_1;
    DAT_10059754 = param_1;
  }
  return 1;
}

