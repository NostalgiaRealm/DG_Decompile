/*
 * FUN_1800732c0 at 1800732c0
 * undefined FUN_1800732c0(void)
 * Address ranges: 1800732c0-180073797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800732c0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 uVar10;
  undefined4 uVar11;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  uVar5 = FUN_1800f42d0(param_3 + 0x20,4,1);
  uVar7 = *(undefined4 *)(param_3 + 0x15c);
  *(undefined4 *)(param_3 + 0x164) = uVar5;
  uVar8 = CONCAT44(uVar9,0x170);
  FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar5,1,uVar7,0xe4,*(undefined4 *)(param_3 + 0xd0),0xe4,
                uVar8,0);
  uVar8 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),0x180);
  FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar5,2,uVar7,0xe4,*(undefined4 *)(param_3 + 0xd0),0xe4,
                uVar8,0);
  uVar8 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),400);
  FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar5,4,uVar7,0xe4,*(undefined4 *)(param_3 + 0xd0),0xe4,
                uVar8,0);
  uVar8 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),0x1a0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar5,8,uVar7,0xe4,*(undefined4 *)(param_3 + 0xd0),0xe4,
                uVar8,0);
  uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (*(char *)(param_3 + 0x1c1) == '\0') {
    FUN_1800f4370(param_3 + 0x20,*(undefined4 *)(param_3 + 0x15c));
    *(undefined4 *)(param_3 + 0x15c) = 0;
  }
  iVar6 = func_0x000180213038(*(undefined4 *)(param_3 + 0x20));
  if ((iVar6 == 0x51) || (*(char *)(param_3 + 0x75) == '\0')) {
    uVar5 = 0;
    FUN_180071c08(param_1,param_3,param_2,0x11,0,1,*(undefined4 *)(param_3 + 0x164),0xe4,
                  *(undefined4 *)(param_3 + 0xd0),CONCAT44(uVar7,0xe4),0x230,0x12345678);
    uVar7 = 0x12345678;
    FUN_180071c08(param_1,param_3,param_2,0x11,0,2,*(undefined4 *)(param_3 + 0x164),0xe4,
                  *(undefined4 *)(param_3 + 0xd0),0xe4,0x240,0x12345678);
    if (param_4 == 0) {
      FUN_180071c08(param_1,param_3,param_2,0x11,0,8,*(undefined4 *)(param_3 + 0x164),0xe4,
                    *(undefined4 *)(param_3 + 0xd0),0xe4,0x260,0x12345678);
    }
    else {
      uVar8 = 0x260;
      uVar10 = 0;
      FUN_1800f5730(param_3 + 0x20,param_2,0x11,param_4,1,*(undefined4 *)(param_3 + 0x164),0xe4,
                    *(undefined4 *)(param_3 + 0xd0),0xe4,0x260,0);
      FUN_180071c08(param_1,param_3,param_2,0x36,0,8,param_4,0,0x12345678,uVar8,uVar10,uVar7);
    }
    bVar3 = false;
  }
  else {
    uVar5 = FUN_1800f42d0(param_3 + 0x20,4,1);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar5,1,*(undefined4 *)(param_3 + 0x164),0xe4,
                  *(undefined4 *)(param_3 + 0xd0),0xe4,0x230,0);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar5,2,*(undefined4 *)(param_3 + 0x164),0xe4,
                  *(undefined4 *)(param_3 + 0xd0),0xe4,0x240,0);
    uVar8 = 0x260;
    uVar10 = 0;
    uVar7 = 0xe4;
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar5,8,*(undefined4 *)(param_3 + 0x164),0xe4,
                  *(undefined4 *)(param_3 + 0xd0),0xe4,0x260,0);
    bVar3 = true;
    if (param_4 != 0) {
      FUN_1800f5730(param_3 + 0x20,param_2,0x36,param_4,1,uVar5,0xff,0,uVar7,uVar8,uVar10);
    }
  }
  FUN_180071c08(param_1,param_3,param_2,0x11,0,4,*(undefined4 *)(param_3 + 0x164),0xe4,
                *(undefined4 *)(param_3 + 0xd0),0xe4,0x250,0x12345678);
  uVar1 = *(uint *)(param_3 + 0x164);
  if (*(char *)(param_3 + 0x1c3) == '\0') {
    FUN_1800f4370(param_3 + 0x20);
    *(undefined4 *)(param_3 + 0x164) = 0;
  }
  else if (uVar1 != 0) {
    uVar4 = (ulonglong)uVar1 & 0xff;
    uVar2 = uVar1 >> 0x12 & 3;
    *(byte *)(uVar4 + *(longlong *)(param_3 + 0x50)) =
         *(byte *)(uVar4 + *(longlong *)(param_3 + 0x50)) &
         ((byte)((1 << (ulonglong)(uVar1 >> 0x14 & 7)) + 0xff << (ulonglong)uVar2) ^ 0xff);
    *(byte *)(uVar4 + *(longlong *)(param_3 + 0x50)) =
         (byte)(7 << (ulonglong)uVar2) | *(byte *)(uVar4 + *(longlong *)(param_3 + 0x50));
  }
  if (bVar3) {
    uVar7 = FUN_1800f42d0(param_3 + 0x20,2,0);
    uVar9 = 0;
    uVar11 = 0;
    FUN_1800f5730(param_3 + 0x20,param_2,0xe,uVar7,3,uVar5,0xff,*(undefined4 *)(param_3 + 0xd8),
                  0x1e4,0x30,0);
    FUN_180071c08(param_1,param_3,param_2,0x32,0,3,uVar7,0x154,*(undefined4 *)(param_3 + 0xbc),
                  CONCAT44(uVar9,0x1e4),CONCAT44(uVar11,0x3f800000),0xbf800000,0,0,uVar5,0x154,
                  0x12345678);
    FUN_180071c08(param_1,param_3,param_2,0x36,0,8,uVar5,0xff,0x12345678);
    FUN_1800f4370(param_3 + 0x20,uVar7);
  }
  FUN_1800f4370(param_3 + 0x20,uVar5);
  return;
}

