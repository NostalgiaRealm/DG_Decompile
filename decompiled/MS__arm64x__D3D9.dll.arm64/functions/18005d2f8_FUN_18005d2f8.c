/*
 * FUN_18005d2f8 at 18005d2f8
 * undefined FUN_18005d2f8(void)
 * Address ranges: 18005d2f8-18005d5bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005d2f8(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  ulonglong param_5)

{
  uint uVar1;
  uint uVar2;
  ulonglong in_stack_ffffffffffffff88;
  undefined8 uVar3;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar5;
  undefined8 uVar4;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  if ((param_5 >> 0x39 & 1) != 0) {
    uVar2 = (uint)(param_5 >> 0x3a) & 3;
    uVar1 = FUN_1800f42d0(param_2,4,0);
    if (uVar2 == 0) {
      FUN_1800f5730(param_2,param_3,0x2036,uVar1,8,0x410104,0,0);
    }
    else {
      uVar7 = 0;
      uVar6 = 0xff;
      in_stack_ffffffffffffff88 = CONCAT44((int)(in_stack_ffffffffffffff88 >> 0x20),0xaa);
      FUN_1800f5730(param_2,param_3,0x37,uVar1,8,*(undefined4 *)(param_2 + 0x68),0xff,0xc,0x410100,
                    in_stack_ffffffffffffff88,CONCAT44(uVar5,0x410100),0xff,0);
      uVar5 = (undefined4)(in_stack_ffffffffffffff88 >> 0x20);
      if (uVar2 - 1 < 2) {
        uVar4 = 0;
        uVar3 = CONCAT44(uVar5,0x90);
        FUN_1800f5730(param_2,param_3,0x38,uVar1,8,uVar1,0xff,*(undefined4 *)(param_2 + 0x68),0,
                      uVar3,0,uVar6,uVar7);
        uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
        if (uVar2 == 2) {
          uVar5 = 0;
          FUN_1800f5730(param_2,param_3,0x38,uVar1,8,uVar1,0xff,uVar1,0xff,0,uVar4,uVar6,uVar7);
        }
        uVar8 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),0x3fb8aa3b);
        uVar3 = CONCAT44((int)((ulonglong)uVar4 >> 0x20),0x3fb8aa3b);
        uVar7 = CONCAT44(uVar5,0x3fb8aa3b);
        FUN_1800f5730(param_2,param_3,0x38,uVar1,8,uVar1,0xff,*(undefined4 *)(param_2 + 0xac),0xe4,
                      uVar7,uVar3,0x3fb8aa3b,uVar8,0);
        uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
        uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_1800f5730(param_2,param_3,0x19,uVar1,8,uVar1,0xff,0);
        in_stack_ffffffffffffff88 = CONCAT44(uVar5,0x3f800000);
        FUN_1800f5730(param_2,param_3,0x200e,uVar1,8,*(undefined4 *)(param_2 + 0xac),0xe4,0x3f800000
                      ,0x3f800000,in_stack_ffffffffffffff88,CONCAT44(uVar6,0x3f800000),uVar1,
                      CONCAT44(uVar9,0xff),0);
      }
      else if (uVar2 == 3) {
        uVar3 = CONCAT44(uVar5,0x94);
        FUN_1800f5730(param_2,param_3,0,uVar1,8,uVar1 | 0x80000000,0xff,
                      *(undefined4 *)(param_2 + 0x68),0x55,uVar3,0,uVar6,uVar7);
        in_stack_ffffffffffffff88 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),0x98);
        FUN_1800f5730(param_2,param_3,0x200e,uVar1,8,uVar1,0xff,*(undefined4 *)(param_2 + 0x68),0xaa
                      ,in_stack_ffffffffffffff88,0);
      }
    }
    uVar5 = 0;
    FUN_1800f5730(param_2,param_3,0,uVar1,7,param_4,0xe4,*(uint *)(param_2 + 0x68) | 0x80000000,0xe4
                  ,in_stack_ffffffffffffff88 & 0xffffffff00000000,0);
    FUN_1800f5730(param_2,param_3,0x32,param_4,7,uVar1,0xff,uVar1,0xe4,*(uint *)(param_2 + 0x68),
                  CONCAT44(uVar5,0xe4),0,0);
  }
  return;
}

