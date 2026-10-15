/*
 * _guColorCombineFunction@4_native at 10004660
 * undefined _guColorCombineFunction@4_native(void)
 * Address ranges: 10004660-100047c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guColorCombineFunction_4_native(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  switch(param_1) {
  case 0:
    uVar1 = FUN_1001ba50();
    uVar5 = 2;
    uVar3 = 0;
    uVar2 = 0;
    break;
  case 1:
    uVar1 = FUN_1001ba50();
    uVar5 = 2;
    uVar3 = 0;
    uVar2 = 1;
    break;
  case 3:
    uVar7 = 1;
  case 2:
    uVar1 = FUN_1001ba50();
    uVar7 = uVar7 & 0xffffffff;
    uVar6 = 0;
    uVar5 = 2;
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 1;
    goto LAB_100047b8;
  case 4:
    uVar1 = FUN_1001ba50();
    uVar3 = 8;
    goto LAB_100046e0;
  case 5:
    uVar1 = FUN_1001ba50();
    uVar3 = 1;
    goto LAB_100046e0;
  case 7:
    uVar7 = 1;
  case 6:
    uVar1 = FUN_1001ba50();
    uVar7 = uVar7 & 0xffffffff;
    uVar6 = 0;
    uVar5 = 1;
    uVar4 = 0;
    uVar3 = 1;
    uVar2 = 3;
    goto LAB_100047b8;
  case 8:
  case 0xf:
    uVar1 = FUN_1001ba50();
    uVar6 = 0;
    uVar5 = 1;
    uVar4 = 0;
    uVar3 = 1;
    uVar2 = 5;
    goto LAB_100047b4;
  case 9:
    uVar1 = FUN_1001ba50();
    uVar3 = 3;
LAB_100046e0:
    uVar5 = 1;
    uVar2 = 3;
    break;
  case 10:
  case 0xe:
    uVar1 = FUN_1001ba50();
    uVar3 = 3;
    goto LAB_1000474c;
  case 0xb:
    uVar1 = FUN_1001ba50();
    uVar3 = 8;
LAB_1000474c:
    uVar4 = 0;
    uVar5 = 1;
    uVar6 = 0;
    uVar2 = 4;
    goto LAB_100047b4;
  case 0xc:
    uVar1 = FUN_1001ba50();
    uVar6 = 0;
    uVar5 = 1;
    uVar4 = 0;
    uVar3 = 8;
    uVar2 = 6;
    goto LAB_100047b4;
  case 0xd:
    uVar1 = FUN_1001ba50();
    uVar5 = 0;
    uVar3 = 4;
    uVar2 = 7;
    break;
  case 0x10:
    uVar1 = FUN_1001ba50();
    uVar6 = 1;
    uVar5 = 2;
    uVar3 = 0;
    uVar2 = 0;
    goto LAB_100047b0;
  default:
    goto switchD_10004684_default;
  }
  uVar6 = 0;
LAB_100047b0:
  uVar4 = 1;
LAB_100047b4:
  uVar7 = 0;
LAB_100047b8:
  FUN_1001db78(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
switchD_10004684_default:
  return;
}

