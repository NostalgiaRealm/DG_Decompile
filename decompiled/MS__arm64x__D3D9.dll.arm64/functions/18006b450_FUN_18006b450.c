/*
 * FUN_18006b450 at 18006b450
 * undefined FUN_18006b450(void)
 * Address ranges: 18006b450-18006b853
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18006b450(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffff70;
  undefined8 uVar8;
  undefined4 uVar9;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  if (param_4 == 0) {
    param_4 = FUN_1800f42d0(param_3 + 0x20,4,1);
  }
  uVar1 = FUN_1800f42d0(param_3 + 0x20,2,1);
  FUN_1800f5730(param_3 + 0x20,param_2,0x38,param_4,0xf,*(undefined4 *)(param_3 + 0x4b0),0x52,
                *(undefined4 *)(param_3 + 0x4b4),CONCAT44(uVar2,0x25),0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar1,3,*(undefined4 *)(param_3 + 0x4b0),0x1a8,
                *(undefined4 *)(param_3 + 0x4b4),0x102,0);
  auVar5 = FUN_1800f42d0(param_3 + 0x20,3,1);
  uVar3 = auVar5._0_8_;
  uVar2 = FUN_1800f42d0(param_3 + 0x20,auVar5._8_8_,1);
  uVar6 = 0;
  uVar7 = 0;
  FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar3 & 0xffffffff,7,*(undefined4 *)(param_3 + 0x4f8),
                0x1a4,param_4,0,0);
  uVar8 = CONCAT44(uVar4,0x1a4);
  uVar4 = auVar5._0_4_;
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar3 & 0xffffffff,7,*(undefined4 *)(param_3 + 0x500),
                0x1a4,param_4,CONCAT44(uVar6,0x55),CONCAT44(uVar7,uVar4),uVar8,0);
  uVar8 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),0x1a4);
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar3 & 0xffffffff,7,*(undefined4 *)(param_3 + 0x4f4),
                0x1a4,param_4,0xaa,uVar4,uVar8,0);
  uVar8 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),0x1a4);
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar3 & 0xffffffff,7,*(undefined4 *)(param_3 + 0x4fc),
                0x1a4,param_4,0xff,uVar4,uVar8,0);
  uVar8 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),0x1a4);
  uVar6 = 0;
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar3 & 0xffffffff,7,*(undefined4 *)(param_3 + 0x4ec),
                0x1a4,uVar1,0,uVar4,uVar8,0);
  uVar9 = 0;
  uVar8 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),0x1a4);
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar3 & 0xffffffff,7,*(undefined4 *)(param_3 + 0x4f0),
                0x1a4,uVar1,CONCAT44(uVar6,0x55),uVar4,uVar8,0);
  uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uVar6 = 0;
  FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar2,7,*(undefined4 *)(param_3 + 0x4e4),0x1a4,
                *(undefined4 *)(param_3 + 0x4b8),0x55,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar3 & 0xffffffff,7,*(undefined4 *)(param_3 + 0x49c),
                0xe4,0x40400000,0x40400000,CONCAT44(uVar6,0x40400000),CONCAT44(uVar7,0x40400000),
                CONCAT44(uVar9,uVar4),0x1a4,uVar2,0x1a4,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar3 & 0xffffffff,7,*(undefined4 *)(param_3 + 0x4e8),
                0x1a4,*(undefined4 *)(param_3 + 0x4b8),0xaa,uVar4,0x1a4,0);
  uVar6 = 0;
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar3 & 0xffffffff,7,*(undefined4 *)(param_3 + 0x4e0),
                0x1a4,*(undefined4 *)(param_3 + 0x4b8),0,uVar4,0x1a4,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar2,1,*(undefined4 *)(param_3 + 0x4b0),0,
                *(undefined4 *)(param_3 + 0x4b0),CONCAT44(uVar6,0x55),0);
  uVar6 = 0;
  FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar2,1,uVar2,0,*(undefined4 *)(param_3 + 0x4b0),0xaa,0)
  ;
  uVar7 = 0;
  FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar2,1,uVar2,0,*(undefined4 *)(param_3 + 0x498),0xe4,
                CONCAT44(uVar6,0x40c00000),0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,param_4,7,*(undefined4 *)(param_3 + 0x504),0x1a4,uVar2,0
                ,uVar4,CONCAT44(uVar7,0x1a4),0);
  FUN_1800f4370(param_3 + 0x20,uVar3 & 0xffffffff);
  FUN_1800f4370(param_3 + 0x20,uVar2);
  FUN_1800f4370(param_3 + 0x20,uVar1);
  return param_4;
}

