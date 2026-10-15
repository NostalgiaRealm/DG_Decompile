/*
 * _guColorCombineFunction@4_native at 100047a0
 * undefined _guColorCombineFunction@4_native(void)
 * Address ranges: 100047a0-10004907
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
    uVar1 = FUN_1001beb0();
    uVar5 = 2;
    uVar3 = 0;
    uVar2 = 0;
    break;
  case 1:
    uVar1 = FUN_1001beb0();
    uVar5 = 2;
    uVar3 = 0;
    uVar2 = 1;
    break;
  case 3:
    uVar7 = 1;
  case 2:
    uVar1 = FUN_1001beb0();
    uVar7 = uVar7 & 0xffffffff;
    uVar6 = 0;
    uVar5 = 2;
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 1;
    goto LAB_100048f8;
  case 4:
    uVar1 = FUN_1001beb0();
    uVar3 = 8;
    goto LAB_10004820;
  case 5:
    uVar1 = FUN_1001beb0();
    uVar3 = 1;
    goto LAB_10004820;
  case 7:
    uVar7 = 1;
  case 6:
    uVar1 = FUN_1001beb0();
    uVar7 = uVar7 & 0xffffffff;
    uVar6 = 0;
    uVar5 = 1;
    uVar4 = 0;
    uVar3 = 1;
    uVar2 = 3;
    goto LAB_100048f8;
  case 8:
  case 0xf:
    uVar1 = FUN_1001beb0();
    uVar6 = 0;
    uVar5 = 1;
    uVar4 = 0;
    uVar3 = 1;
    uVar2 = 5;
    goto LAB_100048f4;
  case 9:
    uVar1 = FUN_1001beb0();
    uVar3 = 3;
LAB_10004820:
    uVar5 = 1;
    uVar2 = 3;
    break;
  case 10:
  case 0xe:
    uVar1 = FUN_1001beb0();
    uVar3 = 3;
    goto LAB_1000488c;
  case 0xb:
    uVar1 = FUN_1001beb0();
    uVar3 = 8;
LAB_1000488c:
    uVar4 = 0;
    uVar5 = 1;
    uVar6 = 0;
    uVar2 = 4;
    goto LAB_100048f4;
  case 0xc:
    uVar1 = FUN_1001beb0();
    uVar6 = 0;
    uVar5 = 1;
    uVar4 = 0;
    uVar3 = 8;
    uVar2 = 6;
    goto LAB_100048f4;
  case 0xd:
    uVar1 = FUN_1001beb0();
    uVar5 = 0;
    uVar3 = 4;
    uVar2 = 7;
    break;
  case 0x10:
    uVar1 = FUN_1001beb0();
    uVar6 = 1;
    uVar5 = 2;
    uVar3 = 0;
    uVar2 = 0;
    goto LAB_100048f0;
  default:
    goto switchD_100047c4_default;
  }
  uVar6 = 0;
LAB_100048f0:
  uVar4 = 1;
LAB_100048f4:
  uVar7 = 0;
LAB_100048f8:
  FUN_1001dff8(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
switchD_100047c4_default:
  return;
}

