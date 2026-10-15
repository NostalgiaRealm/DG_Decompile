/*
 * FUN_18009c748 at 18009c748
 * undefined FUN_18009c748(void)
 * Address ranges: 18009c748-18009ca0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18009c748(undefined8 param_1,longlong param_2,uint param_3,undefined4 param_4,
                 undefined8 param_5,int param_6,int param_7,char param_8,byte param_9)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  
  uVar10 = param_9 ^ 1;
  uVar4 = uVar10 << 3 | 7;
  uVar5 = *(byte *)(param_2 + 0x68) | 0x410700;
  *(undefined4 *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x68) * 4 + 0x88) = 5;
  bVar3 = *(byte *)(param_2 + 0x69);
  *(undefined4 *)(param_2 + (ulonglong)bVar3 * 4 + 0x88) = 5;
  uVar6 = bVar3 | 0x410700;
  uVar9 = uVar5;
  iVar7 = FUN_1800f42d0(param_2 + 0x10,4,1);
  uVar8 = FUN_1800f42d0(param_2 + 0x10,uVar10 + 3,0);
  uVar10 = param_3 | 0x10000000;
  uVar11 = (undefined1)uVar4;
  FUN_1800f5730(param_2 + 0x10,param_1,0xa7,iVar7,uVar11,uVar10,0,*(undefined4 *)(param_2 + 0x60),
                0xe4,0,uVar9,0xe4,0);
  uVar12 = 1;
  if (param_8 == '\x01') {
    uVar12 = 2;
  }
  FUN_1800f5730(param_2 + 0x10,param_1,0xa7,uVar8,uVar11,uVar10,uVar12,
                *(undefined4 *)(param_2 + 0x60),0xe4,0,uVar6,0xe4,0);
  FUN_1800f5730(param_2 + 0x10,param_1,0,uVar8,uVar11,iVar7,0x1e4,uVar8,0x1e4,0);
  uVar12 = 1;
  if (param_8 != '\x01') {
    uVar12 = 2;
  }
  FUN_1800f5730(param_2 + 0x10,param_1,0xa7,iVar7,uVar11,uVar10,uVar12,
                *(undefined4 *)(param_2 + 0x60),0xe4,0,uVar5,0xe4,0);
  FUN_1800f5730(param_2 + 0x10,param_1,0xa7,param_3,uVar11,uVar10,3,*(undefined4 *)(param_2 + 0x60),
                0xe4,0,uVar6,0xe4,0);
  FUN_1800f5730(param_2 + 0x10,param_1,0,iVar7,uVar11,iVar7,0x1e4,param_3,0x1e4,0);
  iVar1 = param_7;
  if (param_7 == 0 || param_6 != 1) {
    iVar1 = iVar7;
  }
  uVar11 = 0x55;
  if (param_8 != '\x02') {
    uVar11 = 0;
  }
  FUN_18009b4c8(param_1,param_2,iVar1,uVar4,iVar7,uVar8,iVar7,param_4,uVar11);
  if (param_6 != 3 && iVar1 == iVar7) {
    iVar2 = param_7;
    if (param_7 == 0) {
      iVar2 = iVar7;
    }
    FUN_18009b2f0(param_1,param_2,iVar2,uVar4,iVar7,1,param_6);
  }
  FUN_1800f4370(param_2 + 0x10,uVar8);
  if (iVar1 == param_7) {
    FUN_1800f4370(param_2 + 0x10,iVar7);
    iVar7 = param_7;
  }
  return iVar7;
}

