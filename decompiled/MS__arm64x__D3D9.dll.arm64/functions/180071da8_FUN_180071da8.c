/*
 * FUN_180071da8 at 180071da8
 * undefined FUN_180071da8(void)
 * Address ranges: 180071da8-180071f73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180071da8(longlong *param_1,undefined8 param_2,longlong param_3,uint param_4,
                  ulonglong param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar2 = param_4;
  if ((param_5 & 1) != 0) {
    if ((*(uint *)(param_3 + 0x1ac) & 0x20004) != 0) {
      uVar2 = FUN_1800f42d0(param_3 + 0x20,4,1);
    }
    uVar1 = *(uint *)(param_3 + 0x1ac) & 0x20000;
    if ((*(uint *)(param_3 + 0x1ac) >> 2 & 1) == 0) {
      if (uVar1 == 0) {
        return uVar2;
      }
      uVar3 = (**(code **)*param_1)(param_1,param_2,param_3,0x10,0xf);
      FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar2,0xf,*(undefined4 *)(param_3 + 0xdc),0xe4,0x5f8
                    ,uVar3,CONCAT44(uVar4,0xe4),0);
    }
    else {
      if (uVar1 == 0) {
        FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar2,0xf,*(undefined4 *)(param_3 + 0xdc),0xe4,
                      0x5f8,param_4 | 0x80000000,CONCAT44(uVar4,0xe4),CONCAT44(uVar5,param_4),0xe4,0
                     );
        return uVar2;
      }
      uVar3 = (**(code **)*param_1)(param_1,param_2,param_3,0x10);
      uVar4 = 0;
      FUN_1800f5730(param_3 + 0x20,param_2,0,uVar2,0xf,param_4 | 0x80000000,0xe4,uVar3,0xe4,0);
      FUN_1800f5730(param_3 + 0x20,param_2,0x32,uVar2,0xf,*(undefined4 *)(param_3 + 0xdc),0xe4,0x5f8
                    ,uVar2,CONCAT44(uVar4,0xe4),CONCAT44(uVar5,param_4),0xe4,0);
    }
    (**(code **)(*param_1 + 8))(param_1,param_3,uVar3);
  }
  return uVar2;
}

