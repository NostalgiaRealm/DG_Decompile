/*
 * FUN_180003808 at 180003808
 * undefined8 __fastcall FUN_180003808(undefined8 param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180003808-180003833
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180003808(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  if ((int)param_2 == 0) {
    FUN_180005b88(param_1,param_2,param_3,param_4);
  }
  else if ((int)param_2 == 1) {
    DAT_18006c870 = param_1;
    DAT_18006c878 = param_1;
  }
  return 1;
}

