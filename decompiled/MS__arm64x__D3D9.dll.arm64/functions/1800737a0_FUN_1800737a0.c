/*
 * FUN_1800737a0 at 1800737a0
 * undefined FUN_1800737a0(void)
 * Address ranges: 1800737a0-180073d4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800737a0(undefined8 *param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined8 uVar11;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  uVar1 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44);
  if ((uVar1 >> 0x1a & 1) == 0) {
    if ((*(uint *)(param_3 + 0x1ac) >> 1 & 1) == 0) {
      if (*(char *)(param_3 + 0x1c8) == '\0') {
        FUN_180071c08(param_1,param_3,param_2,0x36,3,8,*(undefined4 *)(param_3 + 0xb8),0xe4,
                      0x3f800000,0x12345678);
      }
    }
    else {
      iVar4 = *(int *)(param_3 + 0x1a8);
      if (iVar4 == 0) {
        iVar4 = (**(code **)*param_1)(param_1,param_2,param_3,6,*(undefined1 *)(param_3 + 0x1c6));
        *(int *)(param_3 + 0x1a8) = iVar4;
      }
      uVar7 = CONCAT44(uVar8,0x12345678);
      FUN_180071c08(param_1,param_3,param_2,0x36,4,1,iVar4,0xff,uVar7);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
      iVar4 = *(int *)(param_3 + 0x1a8);
      if (iVar4 == 0) {
        iVar4 = (**(code **)*param_1)(param_1,param_2,param_3,6,*(undefined1 *)(param_3 + 0x1c6));
        *(int *)(param_3 + 0x1a8) = iVar4;
      }
      FUN_180071c08(param_1,param_3,param_2,0x36,3,8,iVar4,0xff,CONCAT44(uVar8,0x12345678));
      *(byte *)(param_3 + 0x1c7) = *(byte *)(param_3 + 0x1c7) | 1;
    }
    goto LAB_180073d24;
  }
  uVar5 = *(uint *)(param_3 + 0x164);
  uVar2 = 0;
  uVar3 = 0xaa;
  uVar6 = 0x8000000;
  if ((uVar1 >> 0x18 & 3) - 1 < 3) {
    uVar2 = param_4;
    if (param_4 == 0) {
      uVar2 = FUN_1800f42d0(param_3 + 0x20,1,1);
    }
    uVar1 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44);
    if ((uVar1 >> 0x1b & 1) == 0) {
      if ((uVar1 >> 0x1c & 1) != 0) {
        uVar7 = CONCAT44(uVar8,0xa4);
        uVar3 = 0;
        uVar6 = 0;
        FUN_1800f5730(param_3 + 0x20,param_2,0x10,uVar2,1,*(undefined4 *)(param_3 + 0x164),0xa4,
                      *(undefined4 *)(param_3 + 0x164),uVar7,0);
        uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
        FUN_1800f5730(param_3 + 0x20,param_2,0x4b,uVar2,1,uVar2,0,0);
        uVar5 = uVar2;
      }
    }
    else {
      uVar3 = 0;
      uVar6 = 0;
      uVar5 = param_4;
    }
  }
  uVar1 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44);
  if ((uVar1 >> 0x18 & 3) - 1 < 2) {
    uVar7 = 0;
    uVar8 = 0;
    uVar10 = 0;
    FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar2,1,uVar6 | uVar5,uVar3,
                  *(undefined4 *)(param_3 + 0xdc),0,0x68,0);
    if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x3000000) == 0x2000000) {
      uVar8 = 0;
      uVar10 = 0;
      FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar2,1,uVar2,0,uVar2,0,0,uVar7);
    }
    uVar11 = 0;
    uVar7 = CONCAT44(uVar8,0xe4);
    uVar9 = CONCAT44(uVar10,0x3fb8aa3b);
    FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar2,1,uVar2,0,*(undefined4 *)(param_3 + 0xb8),uVar7,
                  uVar9,0);
    FUN_1800f5730(param_3 + 0x20,param_2,0x19,uVar2,1,uVar2,0,0);
    if (*(int *)(param_3 + 0x20) == 0x10040) {
      uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),uVar2);
      FUN_1800f5730(param_3 + 0x20,param_2,0xe,uVar2,1,*(undefined4 *)(param_3 + 0xb8),0xe4,
                    0x3f800000,uVar7,0,0);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    else {
      FUN_1800f5730(param_3 + 0x20,param_2,0x81,uVar2,1,uVar2,0,0,uVar7,uVar9,uVar11);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
LAB_180073aa4:
    uVar7 = 0;
  }
  else {
    if (((uVar1 & 0x3000000) != 0) && ((uVar1 & 0x3000000) == 0x3000000)) {
      FUN_1800f5730(param_3 + 0x20,param_2,0,uVar2,1,*(undefined4 *)(param_3 + 0xdc),0,100,
                    CONCAT44(uVar8,uVar6 | uVar5) | 0x80000000,uVar3,0);
      uVar8 = 0;
      FUN_1800f5730(param_3 + 0x20,param_2,0xe,uVar2,1,uVar2,0,*(undefined4 *)(param_3 + 0xdc),0,
                    0x5c,0);
      goto LAB_180073aa4;
    }
    if ((*(uint *)(param_3 + 0x1ac) >> 1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(param_3 + 0x1a8);
      if (uVar2 == 0) {
        uVar2 = (**(code **)*param_1)(param_1,param_2,param_3,6,*(undefined1 *)(param_3 + 0x1c6));
        *(uint *)(param_3 + 0x1a8) = uVar2;
      }
    }
    uVar7 = 0xff;
  }
  if (uVar2 == 0) {
    FUN_180071c08(param_1,param_3,param_2,0x36,3,8,*(undefined4 *)(param_3 + 0xb8),0xe4,
                  CONCAT44(uVar8,0x3f800000),0x12345678);
LAB_180073bf0:
    if (uVar2 != *(uint *)(param_3 + 0x1a8)) {
      FUN_1800f4370(param_3 + 0x20,uVar2);
    }
  }
  else {
    if (*(char *)(param_3 + 0x74) == '\0') {
      FUN_180071c08(param_1,param_3,param_2,0x2036,4,1,uVar2,uVar7,CONCAT44(uVar8,0x12345678));
      FUN_180071c08(param_1,param_3,param_2,0x2036,3,8,uVar2,uVar7,0x12345678);
    }
    else {
      uVar3 = FUN_1800f42d0(param_3 + 0x20,1,1);
      FUN_1800f5730(param_3 + 0x20,param_2,0x2036,uVar3,1,uVar2,uVar7,0);
      FUN_180071c08(param_1,param_3,param_2,0x36,4,1,uVar3,0,CONCAT44(uVar8,0x12345678));
      FUN_180071c08(param_1,param_3,param_2,0x36,3,8,uVar3,0,0x12345678);
      FUN_1800f4370(param_3 + 0x20,uVar3);
    }
    *(byte *)(param_3 + 0x1c7) = *(byte *)(param_3 + 0x1c7) | 1;
    if ((uVar2 & 0x3f00) == 0) goto LAB_180073bf0;
  }
  if (uVar5 != *(uint *)(param_3 + 0x164)) {
    FUN_1800f4370(param_3 + 0x20,uVar5);
  }
LAB_180073d24:
  FUN_1800f4370(param_3 + 0x20,param_4);
  return;
}

