/*
 * FUN_1800c5670 at 1800c5670
 * undefined FUN_1800c5670(void)
 * Address ranges: 1800c5670-1800c570b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800c5670(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined1 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FUN_1800a3108(*(undefined8 *)(param_1 + 0x170),0,0,param_1 + -8,param_2,0,0,param_4,
                        param_5,0,0,*(undefined8 *)(param_1 + 0x80),0,0);
  if (lVar1 != 0) {
    uVar2 = FUN_18000b708(lVar1,param_3);
    if ((uVar2 & 1) == 0) {
      FUN_1800c4370(lVar1);
      FUN_180102fc0(lVar1,0xd8);
      lVar1 = 0;
    }
    else {
      FUN_1800015a0(lVar1 + 0xac);
    }
  }
  return lVar1;
}

