/*
 * FUN_1800e8140 at 1800e8140
 * undefined FUN_1800e8140(void)
 * Address ranges: 1800e8140-1800e81e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800e8140(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FUN_180102f80(3000);
  if ((lVar1 != 0) &&
     (lVar1 = FUN_1800e7d28(lVar1,param_1,param_2,param_3,param_4,param_5), lVar1 != 0)) {
    uVar2 = FUN_1800e81e8();
    if ((uVar2 & 1) != 0) {
      return lVar1;
    }
    FUN_1800e7eb0(lVar1);
    FUN_180102fc0(lVar1,3000);
  }
  return 0;
}

