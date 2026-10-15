/*
 * FUN_18006b858 at 18006b858
 * undefined FUN_18006b858(void)
 * Address ranges: 18006b858-18006ba6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18006b858(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uVar1 = FUN_1800f42d0(param_3 + 0x20,3,1);
  FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar1,7,*(undefined4 *)(param_3 + 0x4b0),1,
                *(undefined4 *)(param_3 + 0x4b0),CONCAT44(uVar2,0xa6),0);
  if (param_4 == 0) {
    param_4 = FUN_1800f42d0(param_3 + 0x20,4,1);
  }
  uVar2 = 0;
  uVar3 = 0;
  FUN_1800f5730(param_3 + 0x20,param_2,0x38,param_4,7,*(undefined4 *)(param_3 + 0x518),0x1a4,uVar1,0
                ,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,param_4,7,*(undefined4 *)(param_3 + 0x51c),0x1a4,uVar1,
                CONCAT44(uVar2,0x55),CONCAT44(uVar3,param_4),0x1a4,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,param_4,7,*(undefined4 *)(param_3 + 0x514),0x1a4,uVar1,
                0xaa,param_4,0x1a4,0);
  uVar2 = 0;
  FUN_1800f5730(param_3 + 0x20,param_2,0,param_4,7,param_4,0x1a4,param_4,0x1a4,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,param_4,7,*(undefined4 *)(param_3 + 0x50c),0x1a4,
                *(undefined4 *)(param_3 + 0x4b4),0x55,CONCAT44(uVar2,param_4),0x1a4,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,param_4,7,*(undefined4 *)(param_3 + 0x510),0x1a4,
                *(undefined4 *)(param_3 + 0x4b4),0xaa,param_4,0x1a4,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,param_4,7,*(undefined4 *)(param_3 + 0x508),0x1a4,
                *(undefined4 *)(param_3 + 0x4b4),0,param_4,0x1a4,0);
  FUN_1800f4370(param_3 + 0x20,uVar1);
  return param_4;
}

