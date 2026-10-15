/*
 * FUN_10008170 at 10008170
 * undefined FUN_10008170(void)
 * Address ranges: 10008170-10008243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10008170(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong extraout_x11;
  undefined1 auVar4 [12];
  
  auVar4 = FUN_1001ba50(param_1,param_2);
  switch(auVar4._8_4_) {
  case 0:
    uVar1 = 0;
    goto LAB_10008214;
  default:
    uVar1 = 1;
LAB_10008214:
    uVar3 = 0;
LAB_10008218:
    uVar2 = 0;
    goto LAB_1000821c;
  case 2:
    uVar1 = 3;
    goto LAB_100081b8;
  case 3:
    uVar1 = 4;
    goto LAB_100081b8;
  case 4:
    uVar1 = 3;
    uVar2 = 1;
    break;
  case 5:
    uVar1 = 6;
LAB_100081b8:
    uVar2 = 8;
    break;
  case 6:
    uVar1 = 7;
    uVar2 = 0xc;
    break;
  case 7:
    uVar1 = 7;
    uVar2 = 4;
    break;
  case 8:
    uVar1 = 7;
    uVar2 = 0xd;
    break;
  case 9:
    uVar1 = 7;
    uVar2 = 5;
    break;
  case 10:
    uVar1 = 0;
    uVar3 = 1;
    goto LAB_10008218;
  }
  uVar3 = 0;
LAB_1000821c:
  FUN_1001ebf8(auVar4._0_8_ & 0xffffffff,extraout_x11 & 0xffffffff,uVar1,uVar2,uVar1,uVar2,uVar3,
               uVar3);
  return;
}

