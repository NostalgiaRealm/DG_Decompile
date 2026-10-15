/*
 * FUN_180003428 at 180003428
 * undefined8 __fastcall FUN_180003428(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180003428-180003453
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180003428(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  if ((int)param_2 == 0) {
    FUN_180032ea0(param_1,param_2,param_3,param_4);
  }
  else if ((int)param_2 == 1) {
    DAT_18006d9d0 = param_1;
    DAT_18006d9d8 = param_1;
  }
  return 1;
}

