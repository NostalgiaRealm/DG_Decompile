/*
 * FUN_100afc50 at 100afc50
 * undefined FUN_100afc50(void)
 * Address ranges: 100afc50-100afd07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100afc50(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_100af0a0();
    (*(code *)PTR_FUN_10134068)(DAT_1013d014);
    DAT_1013d014 = (undefined *)0x0;
  }
  else if (param_2 == 1) {
    DAT_1013d014 = &DAT_10138780;
    DAT_1013d010 = param_1;
    DAT_1013d284 = param_1;
    (*(code *)PTR_FUN_101340b8)(&DAT_10138780);
    DAT_10138798 = 0;
    DAT_1013879c = 0;
    DAT_101387a0 = 0;
    DAT_1013cf24 = &DAT_10138780;
    DAT_10137b50 = 0x100000001;
    DAT_10137b58 = 1;
    PTR_DAT_10137b5c = s__dgVoodoo__1012d000;
    DAT_10137b60 = 1;
  }
  return 1;
}

