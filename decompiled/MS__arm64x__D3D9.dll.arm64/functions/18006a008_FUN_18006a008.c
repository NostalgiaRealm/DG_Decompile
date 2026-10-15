/*
 * FUN_18006a008 at 18006a008
 * undefined FUN_18006a008(void)
 * Address ranges: 18006a008-18006a2bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006a008(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,
                  undefined4 param_5,uint param_6,uint param_7,undefined4 param_8,undefined4 param_9
                  ,undefined4 param_10)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar3;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar5;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar7;
  undefined8 uVar6;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  auVar2 = FUN_1800f42d0(param_3 + 0x20,1,1);
  uVar1 = FUN_1800f42d0(param_3 + 0x20,auVar2._8_8_,1);
  if (param_4 == 0) {
    param_4 = param_6;
  }
  uVar6 = CONCAT44(uVar7,param_8);
  uVar4 = CONCAT44(uVar5,0x40000000);
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,param_5,7,param_7,0x1a4,*(undefined4 *)(param_3 + 0x49c)
                ,0xe4,CONCAT44(uVar3,0x40000000),0x40000000,uVar4,0x40000000,uVar6,0x1a4,0);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  FUN_1800f5730(param_3 + 0x20,param_2,0,param_4,7,param_8,0x1a4,param_7 | 0x80000000,0x1a4,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x10,auVar2._0_8_ & 0xffffffff,1,param_4,0xa4,param_9,0xa4,0)
  ;
  uVar3 = 0;
  FUN_1800f5730(param_3 + 0x20,param_2,0x10,uVar1,1,param_4 | 0x80000000,0xa4,param_10,0xa4,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,param_6,7,param_8,0x1a4,*(undefined4 *)(param_3 + 0x49c)
                ,0xe4,CONCAT44(uVar3,0x40000000),0x40000000,CONCAT44(uVar5,0x40000000),0x40000000,
                CONCAT44(uVar7,param_7),0x1a4,0);
  uVar3 = 0;
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,param_5,7,auVar2._0_4_ | 0x80000000,0,param_9,0x1a4,
                param_5,0x1a4,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x38,param_5,7,param_5,0x1a4,*(undefined4 *)(param_3 + 0x49c)
                ,0xe4,0x3eaaaaab,0x3eaaaaab,CONCAT44(uVar3,0x3eaaaaab),0x3eaaaaab,0);
  uVar3 = 0;
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,param_6,7,uVar1 | 0x80000000,0,param_10,0x1a4,param_6,
                0x1a4,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x38,param_6,7,param_6,0x1a4,*(undefined4 *)(param_3 + 0x49c)
                ,0xe4,0x3eaaaaab,0x3eaaaaab,CONCAT44(uVar3,0x3eaaaaab),0x3eaaaaab,0);
  FUN_1800f4370(param_3 + 0x20,auVar2._0_8_ & 0xffffffff);
  FUN_1800f4370(param_3 + 0x20,uVar1);
  return;
}

