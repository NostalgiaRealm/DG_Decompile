/*
 * FUN_18005d058 at 18005d058
 * undefined FUN_18005d058(void)
 * Address ranges: 18005d058-18005d2db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005d058(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  uVar3 = param_5 >> 0x34 & 7;
  uVar2 = (uint)uVar3;
  if (uVar2 == 0) {
switchD_18005d11c_caseD_0:
    FUN_1800f5730(param_2,param_3,0x4000d,0xffffffff,*(uint *)(param_2 + 0xa8) | 0x10000000,0,1,0);
  }
  else {
    uVar1 = 0;
    if (uVar2 == 7) {
LAB_18005d110:
      switch(uVar3) {
      case 0:
        goto switchD_18005d11c_caseD_0;
      case 1:
        FUN_1800f5730(param_2,param_3,0x50,uVar1,8,uVar1,0xff,*(undefined4 *)(param_2 + 0x68),0xaa,
                      0x88,0);
        break;
      case 2:
        FUN_1800f5730(param_2,param_3,0x27,uVar1,8,uVar1,0xff,*(undefined4 *)(param_2 + 0x68),0xaa,
                      0x88,0);
        break;
      case 3:
        FUN_1800f5730(param_2,param_3,0x4f,uVar1,8,*(undefined4 *)(param_2 + 0x68),0xaa,0x88,uVar1,
                      0xff,0);
        break;
      case 4:
        FUN_1800f5730(param_2,param_3,0x50,uVar1,8,*(undefined4 *)(param_2 + 0x68),0xaa,0x88,uVar1,
                      0xff,0);
        break;
      case 5:
        FUN_1800f5730(param_2,param_3,0x20,uVar1,8,uVar1,0xff,*(undefined4 *)(param_2 + 0x68),0xaa,
                      0x88,0);
        break;
      case 6:
        FUN_1800f5730(param_2,param_3,0x4f,uVar1,8,uVar1,0xff,*(undefined4 *)(param_2 + 0x68),0xaa,
                      0x88,0);
        break;
      case 7:
        goto switchD_18005d11c_caseD_7;
      }
    }
    else {
      uVar1 = FUN_1800f42d0(param_2,4,0);
      FUN_1800f5730(param_2,param_3,0x32,uVar1,8,param_4 & 0xffffffff,0xff,
                    *(undefined4 *)(param_2 + 0xa8),0xe4,0x437f0000,
                    CONCAT44(uVar4,*(undefined4 *)(param_2 + 0xa8)),0xe4,0x38d1b717,0);
      FUN_1800f5730(param_2,param_3,0x1c,uVar1,8,uVar1,0xff,0);
      if (uVar2 < 8) goto LAB_18005d110;
    }
    FUN_1800f5730(param_2,param_3,0x4000d,0xffffffff,uVar1 | 0x10000000,3,0);
  }
switchD_18005d11c_caseD_7:
  return;
}

