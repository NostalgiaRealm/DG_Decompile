/*
 * FUN_18009d878 at 18009d878
 * undefined FUN_18009d878(void)
 * Address ranges: 18009d878-18009d9cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009d878(undefined8 param_1,uint *param_2,int param_3,ulonglong param_4,undefined1 param_5
                  ,ulonglong param_6,undefined4 param_7)

{
  ulonglong uVar1;
  undefined8 in_stack_ffffffffffffff68;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  uVar1 = param_4 & 0xffffffff;
  if (param_3 == 0) {
    uVar3 = 0;
    FUN_1800f5730(param_2 + 4,param_1,0x2d,param_4,param_5,param_6,0xe4,param_7,0xe4,0);
  }
  else {
    uVar4 = 0;
    uVar2 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff68 >> 0x20),0xe4);
    FUN_1800f5730(param_2 + 4,param_1,0x8000002d,
                  *(undefined4 *)(&DAT_180231408 + (ulonglong)(param_3 - 1) * 4),uVar1,param_5,
                  param_6 & 0xffffffff,0xe4,param_7,uVar2,0);
    uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((*param_2 & 0xf) == 4) {
    FUN_1800f5730(param_2 + 4,param_1,0x32,uVar1,param_5,uVar1,0xe4,param_2[0x19],0xe4,
                  CONCAT44(uVar3,0x437f0000),CONCAT44(uVar4,0x437f0000),0x437f0000,0x437f0000,
                  param_2[0x19],0xe4,0x3a83126f,0x3a83126f,0x3a83126f,0x3a83126f,0);
    FUN_1800f5730(param_2 + 4,param_1,0x40,uVar1,param_5,uVar1,0xe4,0);
    FUN_1800f5730(param_2 + 4,param_1,0x1c,uVar1,param_5,uVar1,0xe4,0);
  }
  return;
}

