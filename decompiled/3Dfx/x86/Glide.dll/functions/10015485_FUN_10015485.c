/*
 * FUN_10015485 at 10015485
 * undefined __thiscall FUN_10015485(void * this, int param_1, undefined4 param_2)
 * Address ranges: 10015485-100154fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10015485(void *this,int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  switch(param_2) {
  case 0:
    uVar2 = 0;
    goto LAB_100154e4;
  default:
    uVar2 = 1;
LAB_100154e4:
    uVar1 = 0;
    uVar3 = uVar1;
    goto LAB_100154e6;
  case 2:
    uVar2 = 3;
    goto LAB_100154ab;
  case 3:
    uVar2 = 4;
    goto LAB_100154ab;
  case 4:
    uVar2 = 3;
    uVar3 = 1;
    break;
  case 5:
    uVar2 = 6;
LAB_100154ab:
    uVar3 = 8;
    break;
  case 6:
    uVar2 = 7;
    uVar3 = 0xc;
    break;
  case 7:
    uVar2 = 7;
    uVar3 = 4;
    break;
  case 8:
    uVar2 = 7;
    uVar3 = 0xd;
    break;
  case 9:
    uVar2 = 7;
    uVar3 = 5;
    break;
  case 10:
    uVar2 = 0;
    uVar3 = 0;
    uVar1 = 1;
    goto LAB_100154e6;
  }
  uVar1 = 0;
LAB_100154e6:
  FUN_10014ca8(this,param_1,uVar2,uVar3,uVar2,uVar3,uVar1,uVar1);
  return;
}

