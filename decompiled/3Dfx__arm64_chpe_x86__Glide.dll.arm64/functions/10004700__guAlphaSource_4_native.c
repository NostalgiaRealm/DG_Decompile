/*
 * _guAlphaSource@4_native at 10004700
 * undefined _guAlphaSource@4_native(void)
 * Address ranges: 10004700-1000478f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guAlphaSource_4_native(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  switch(param_1) {
  case 0:
    uVar1 = FUN_1001beb0();
    uVar5 = 2;
    uVar4 = 1;
    uVar3 = 0;
    uVar2 = 2;
    break;
  case 1:
    uVar1 = FUN_1001beb0();
    uVar5 = 2;
    uVar3 = 0;
    uVar2 = 2;
    goto LAB_10004778;
  case 2:
    uVar1 = FUN_1001beb0();
    uVar5 = 1;
    uVar4 = 1;
    uVar3 = 8;
    uVar2 = 3;
    break;
  case 3:
    uVar1 = FUN_1001beb0();
    uVar5 = 1;
    uVar3 = 1;
    uVar2 = 3;
LAB_10004778:
    uVar4 = 0;
    break;
  default:
    goto switchD_10004720_default;
  }
  FUN_1001e198(uVar1,uVar2,uVar3,uVar4,uVar5,0);
switchD_10004720_default:
  return;
}

