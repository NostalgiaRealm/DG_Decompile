/*
 * FUN_18009d9e0 at 18009d9e0
 * undefined FUN_18009d9e0(void)
 * Address ranges: 18009d9e0-18009dc43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009d9e0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6,int param_7)

{
  undefined4 uVar1;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar2;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar3;
  undefined8 in_stack_ffffffffffffff90;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  if (*(uint *)(param_2 + 0x10) < 0x50) {
    uVar1 = FUN_1800f42d0(param_2 + 0x10,2,0);
    FUN_1800f5730(param_2 + 0x10,param_1,0x29,uVar1,1,param_3,0,*(undefined4 *)(param_2 + 0x60),
                  CONCAT44(uVar2,0xe4),CONCAT44(uVar3,0x18),0);
    FUN_1800f5730(param_2 + 0x10,param_1,0x29,uVar1,2,param_3,0x55,*(undefined4 *)(param_2 + 0x60),
                  0xe4,0x10,0);
    FUN_1800f5730(param_2 + 0x10,param_1,0x29,param_4,param_5,param_3,0xaa,
                  *(undefined4 *)(param_2 + 0x60),0xe4,8,0);
    FUN_1800f5730(param_2 + 0x10,param_1,0x3c,param_4,param_5,param_4,param_6,param_3,0xff,0);
    uVar2 = 0;
    FUN_1800f5730(param_2 + 0x10,param_1,0x3c,param_4,param_5,param_4,param_6,uVar1,0,0);
    FUN_1800f5730(param_2 + 0x10,param_1,0x3c,param_4,param_5,param_4,param_6,uVar1,
                  CONCAT44(uVar2,0x55),0);
  }
  else {
    if (param_7 == 0) {
      param_7 = FUN_1800f42d0(param_2 + 0x10,4,0);
    }
    FUN_1800f5730(param_2 + 0x10,param_1,0x29,param_7,0xf,param_3,0xe4,
                  *(undefined4 *)(param_2 + 100),CONCAT44(uVar2,0xe4),CONCAT44(uVar3,0x18),
                  CONCAT44(uVar1,0x10),8,0,0);
    FUN_1800f5730(param_2 + 0x10,param_1,0x3c,param_7,3,param_7,0x54,param_7,0xfe,0);
    FUN_1800f5730(param_2 + 0x10,param_1,0x3c,param_4,param_5,param_7,0,param_7,0x55,0);
  }
  return;
}

