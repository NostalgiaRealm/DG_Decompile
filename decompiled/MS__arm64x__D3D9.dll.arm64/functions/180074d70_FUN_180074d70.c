/*
 * FUN_180074d70 at 180074d70
 * undefined FUN_180074d70(void)
 * Address ranges: 180074d70-180074eb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180074d70(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  undefined4 uVar1;
  undefined8 in_stack_ffffffffffffff88;
  ulonglong uVar2;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar3;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  FUN_1800f5730(param_3 + 0x20,param_2,0x2f,param_9,1,param_4,0,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x38,param_9,1,param_9,0,param_5,0,CONCAT44(uVar1,param_6),
                param_7,CONCAT44(uVar3,param_8),0);
  uVar1 = FUN_1800f42d0(param_3 + 0x20,1,0);
  uVar3 = 0;
  uVar2 = 0;
  FUN_1800f5730(param_3 + 0x20,param_2,0x39,uVar1,1,param_9,0,param_9,0,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x37,param_9,1,uVar1,0,*(undefined4 *)(param_3 + 0xb8),
                CONCAT44(uVar3,0xe4),uVar2 & 0xffffffff00000000,param_9,0,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x19,param_9,1,param_9,0,0);
  return;
}

