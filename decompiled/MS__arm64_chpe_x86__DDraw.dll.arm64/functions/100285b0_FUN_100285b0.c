/*
 * FUN_100285b0 at 100285b0
 * undefined FUN_100285b0(void)
 * Address ranges: 100285b0-100285ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100285b0(undefined4 param_1,undefined8 param_2,ulonglong param_3,byte param_4)

{
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong extraout_x9;
  undefined1 auVar4 [16];
  
  uVar3 = (ulonglong)param_4;
  auVar4 = FUN_10025fc8(param_1,param_2,param_3,uVar3);
  uVar2 = auVar4._8_8_ & 0xffffffff;
  if ((auVar4._0_8_ & 1) == 0) {
    uVar1 = FUN_10022150(extraout_x9 & 0xffffffff,uVar2,param_3 & 0xffffffff,uVar3 & 0xffffffff);
  }
  else {
    uVar1 = FUN_100276f8(extraout_x9 & 0xffffffff,uVar2,param_3 & 0xffffffff,uVar3 & 0xffffffff);
  }
  return uVar1;
}

