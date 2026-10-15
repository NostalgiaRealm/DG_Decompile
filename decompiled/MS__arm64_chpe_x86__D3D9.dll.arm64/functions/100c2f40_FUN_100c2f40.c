/*
 * FUN_100c2f40 at 100c2f40
 * undefined FUN_100c2f40(void)
 * Address ranges: 100c2f40-100c2f8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100c2f40(undefined4 param_1,undefined8 param_2,ulonglong param_3,byte param_4)

{
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong extraout_x9;
  undefined1 auVar4 [16];
  
  uVar3 = (ulonglong)param_4;
  auVar4 = FUN_100c0938(param_1,param_2,param_3,uVar3);
  uVar2 = auVar4._8_8_ & 0xffffffff;
  if ((auVar4._0_8_ & 1) == 0) {
    uVar1 = FUN_100bcac0(extraout_x9 & 0xffffffff,uVar2,param_3 & 0xffffffff,uVar3 & 0xffffffff);
  }
  else {
    uVar1 = FUN_100c2088(extraout_x9 & 0xffffffff,uVar2,param_3 & 0xffffffff,uVar3 & 0xffffffff);
  }
  return uVar1;
}

