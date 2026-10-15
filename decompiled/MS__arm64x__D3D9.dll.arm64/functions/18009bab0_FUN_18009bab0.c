/*
 * FUN_18009bab0 at 18009bab0
 * undefined FUN_18009bab0(void)
 * Address ranges: 18009bab0-18009bd83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18009bab0(undefined8 param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar6;
  undefined8 uVar5;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  if (param_4 != 2) {
    FUN_18009b2f0();
    param_4 = 2;
  }
  uVar1 = *(uint *)(param_2 + 0x50);
  if (*(uint *)(param_2 + 0x10) < 0x50) {
    uVar6 = 0;
    FUN_1800f5730(param_2 + 0x10,param_1,0x55,param_3,1,param_3,0,uVar1 | 0x10000000,0,0x10,0);
    uVar2 = CONCAT44(uVar6,1);
    FUN_1800f5730(param_2 + 0x10,param_1,0x55,param_3,2,param_3,0x55,
                  *(uint *)(param_2 + 0x50) | 0x10000000,uVar2,0x10,0);
    uVar2 = CONCAT44((int)((ulonglong)uVar2 >> 0x20),2);
    FUN_1800f5730(param_2 + 0x10,param_1,0x55,param_3,4,param_3,0xaa,
                  *(uint *)(param_2 + 0x50) | 0x10000000,uVar2,0x10,0);
    uVar6 = (undefined4)((ulonglong)uVar2 >> 0x20);
    uVar2 = 8;
    uVar3 = 0xff;
    uVar1 = *(uint *)(param_2 + 0x50) | 0x10000000;
    uVar4 = 3;
  }
  else {
    uVar2 = 0xf;
    uVar3 = 0xe4;
    uVar4 = 0xe4;
  }
  uVar5 = CONCAT44(uVar6,uVar4);
  FUN_1800f5730(param_2 + 0x10,param_1,0x55,param_3,uVar2,param_3,uVar3,uVar1,uVar5,0x10,0);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar1 = *(uint *)(param_2 + 0x50);
  if (*(uint *)(param_2 + 0x10) < 0x50) {
    uVar6 = 0;
    FUN_1800f5730(param_2 + 0x10,param_1,0x29,param_3,1,param_3,0,uVar1 | 0x10000000,0,0x20,0);
    uVar2 = CONCAT44(uVar6,1);
    FUN_1800f5730(param_2 + 0x10,param_1,0x29,param_3,2,param_3,0x55,
                  *(uint *)(param_2 + 0x50) | 0x10000000,uVar2,0x20,0);
    uVar2 = CONCAT44((int)((ulonglong)uVar2 >> 0x20),2);
    FUN_1800f5730(param_2 + 0x10,param_1,0x29,param_3,4,param_3,0xaa,
                  *(uint *)(param_2 + 0x50) | 0x10000000,uVar2,0x20,0);
    uVar6 = (undefined4)((ulonglong)uVar2 >> 0x20);
    uVar2 = 8;
    uVar3 = 0xff;
    uVar1 = *(uint *)(param_2 + 0x50) | 0x10000000;
    uVar4 = 3;
  }
  else {
    uVar2 = 0xf;
    uVar3 = 0xe4;
    uVar4 = 0xe4;
  }
  FUN_1800f5730(param_2 + 0x10,param_1,0x29,param_3,uVar2,param_3,uVar3,uVar1,CONCAT44(uVar6,uVar4),
                0x20,0);
  FUN_1800f5730(param_2 + 0x10,param_1,0x3c,param_3,3,param_3,0x44,param_3,0xee,0);
  FUN_1800f5730(param_2 + 0x10,param_1,0x3c,param_3,1,param_3,0,param_3,0x55,0);
  if (param_5 == 0) {
    param_5 = param_3;
  }
  FUN_1800f5730(param_2 + 0x10,param_1,1,param_5,1,param_3,0,*(undefined4 *)(param_2 + 0x5c),0,0x40,
                0);
  return param_4;
}

