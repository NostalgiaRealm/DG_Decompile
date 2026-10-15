/*
 * FUN_180072118 at 180072118
 * undefined FUN_180072118(void)
 * Address ranges: 180072118-1800722c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180072118(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar6;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar2 = FUN_1800f42d0(param_3 + 0x20,1,0);
  if (param_6 == 0) {
    param_6 = param_4;
  }
  lVar1 = param_3 + 0x20;
  if (param_7 == 0) {
    uVar3 = CONCAT44(uVar4,param_4);
    FUN_1800f5730(lVar1,param_2,0x10,uVar2,1,param_4,0xe4,0xffffffff,uVar3,CONCAT44(uVar5,0xe4),
                  CONCAT44(uVar6,0xffffffff),0);
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    FUN_1800f5730(param_3 + 0x20,param_2,0x44,uVar2,1,uVar2,0,0);
  }
  else if (*(int *)(param_3 + 0x20) == 0x10040) {
    uVar3 = CONCAT44(uVar4,param_7);
    FUN_1800f5730(lVar1,param_2,0xe,uVar2,1,*(undefined4 *)(param_3 + 0xb8),0xe4,0x3f800000,uVar3,0,
                  CONCAT44(uVar6,0xffffffff),0);
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  else {
    uVar4 = 0;
    FUN_1800f5730(lVar1,param_2,0x81,uVar2,1);
  }
  uVar5 = 0;
  FUN_1800f5730(param_3 + 0x20,param_2,0x38,param_6,7,param_4,0x1e4,0xffffffff,CONCAT44(uVar4,uVar2)
                ,0,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x27,uVar2,1,uVar2,0,*(undefined4 *)(param_3 + 0xb8),0xe4,
                CONCAT44(uVar5,0x7f800000),0);
  FUN_1800f5730(param_3 + 0x20,param_2,1,param_6,7,param_6,0x1e4,uVar2,0,0);
  FUN_1800f4370(param_3 + 0x20,uVar2);
  return;
}

