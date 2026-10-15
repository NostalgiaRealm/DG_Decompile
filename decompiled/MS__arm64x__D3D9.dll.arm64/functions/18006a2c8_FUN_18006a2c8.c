/*
 * FUN_18006a2c8 at 18006a2c8
 * undefined FUN_18006a2c8(void)
 * Address ranges: 18006a2c8-18006a54b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006a2c8(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  uVar1 = FUN_1800f42d0(param_3 + 0x20,3,1);
  auVar4 = FUN_1800f42d0(param_3 + 0x20,1,1);
  uVar3 = auVar4._0_8_ & 0xffffffff;
  uVar2 = FUN_1800f42d0(param_3 + 0x20,auVar4._8_8_,1);
  if (*(char *)(param_3 + 0x53e) == '\0') {
    FUN_1800f5730(param_3 + 0x20,param_2,0);
  }
  FUN_1800f5730(param_3 + 0x20,param_2,0,uVar1,7,param_7,0x1a4,param_8,CONCAT44(uVar5,0x1a4),0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x10,uVar3,1,param_4,0xa4,uVar1,0xa4,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x10,uVar2,1,param_4,0xa4,param_4,0xa4,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x38,param_4,7,param_4,0x1a4,uVar3,0,0);
  uVar5 = 0;
  uVar6 = 0;
  FUN_1800f5730(param_3 + 0x20,param_2,0xe,param_4,7,param_4,0x1a4,uVar2,0,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar1,7,uVar1,0x1a4,*(undefined4 *)(param_3 + 0x49c),
                CONCAT44(uVar5,0xe4),CONCAT44(uVar6,0x3f000000),0x3f000000,0x3f000000,0x3f000000,
                param_4 | 0x80000000,0x1a4,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x10,uVar3,1,uVar1,0xa4,uVar1,0xa4,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x44,uVar3,1,uVar3,0,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x38,param_4,7,uVar1,0x1a4,uVar3,0,0);
  FUN_1800f4370(param_3 + 0x20,uVar1);
  FUN_1800f4370(param_3 + 0x20,uVar3);
  FUN_1800f4370(param_3 + 0x20,uVar2);
  return;
}

