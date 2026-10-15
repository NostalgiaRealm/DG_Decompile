/*
 * FUN_180207078 at 180207078
 * undefined FUN_180207078(void)
 * Address ranges: 180207078-18020711b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180207078(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FUN_1802229a8(3000);
  if ((lVar1 != 0) &&
     (lVar1 = FUN_180206bf0(lVar1,param_1,param_2,param_3,param_4,param_5), lVar1 != 0)) {
    uVar2 = FUN_180207120();
    if ((uVar2 & 1) != 0) {
      return lVar1;
    }
    FUN_180206d90(lVar1);
    FUN_1802229d8(lVar1,3000);
  }
  return 0;
}

