/*
 * FUN_18005d5d0 at 18005d5d0
 * undefined FUN_18005d5d0(void)
 * Address ranges: 18005d5d0-18005d743
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005d5d0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  ulonglong param_5)

{
  undefined4 uVar1;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar2;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar3;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  if ((param_5 >> 0x3c & 1) != 0) {
    uVar1 = FUN_1800f42d0(param_2,4,0);
    FUN_1800f5730(param_2,param_3,0x2036,uVar1,0xf,param_4,0xe4,0);
    FUN_1800f5730(param_2,param_3,0x38,uVar1,0xf,uVar1,0xe4,*(undefined4 *)(param_2 + 0xac),0xe4,
                  CONCAT44(uVar2,0x437f0000),CONCAT44(uVar3,0x437f0000),0x437f0000,0x437f0000,0);
    FUN_1800f5730(param_2,param_3,0x1c,uVar1,0xf,uVar1,0xe4,0);
    uVar2 = 0;
    uVar3 = 0;
    FUN_1800f5730(param_2,param_3,1,uVar1,0xf,uVar1,0xe4,*(undefined4 *)(param_2 + 0x68),0xe4,0xb0,0
                 );
    FUN_1800f5730(param_2,param_3,0x56,uVar1,0xf,uVar1,0xe4,0);
    FUN_1800f5730(param_2,param_3,0x38,param_4,0xf,uVar1,0xe4,*(undefined4 *)(param_2 + 0xac),0xe4,
                  CONCAT44(uVar2,0x3b808081),CONCAT44(uVar3,0x3b808081),0x3b808081,0x3b808081,0);
  }
  return;
}

