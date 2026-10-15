/*
 * FUN_10028830 at 10028830
 * undefined FUN_10028830(void)
 * Address ranges: 10028830-10028c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10028830(int param_1)

{
  byte *pbVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint local_a0;
  uint uStack_9c;
  undefined4 local_98;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  if (*(byte *)(param_1 + 0x1bd) != 0) {
    return 1;
  }
  FUN_10090418(*(int *)(param_1 + 0x44) + 0x11c0);
  puVar2 = (uint *)(param_1 + 0x24);
  uVar6 = 0;
  if (*puVar2 != 0) {
    do {
      uVar12 = 0;
      if (*(uint *)(param_1 + 0x20) != 0) {
        do {
          uVar4 = uVar12 + *(int *)(param_1 + 0x2c) * uVar6;
          uVar12 = uVar12 + 1;
          pbVar1 = (byte *)((uVar4 >> 3 & 3) + param_1 + ((uVar4 >> 5) + 0x32) * 4);
          *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar4 & 7));
        } while (uVar12 < *(uint *)(param_1 + 0x20));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *puVar2);
  }
  if ((((2 < *(int *)(param_1 + 0x34) - 3U) ||
       (*(uint *)(&DAT_100b35b0 + *(int *)(param_1 + 0x1c) * 4) <
        *(uint *)(*(int *)(param_1 + 0xe0) + 0xcef4))) || (*(float *)(param_1 + 0x1b4) != 1.0)) ||
     ((*(float *)(param_1 + 0x1b8) != 1.0 || (bVar10 = 0, *(int *)(param_1 + 0x138) != 1)))) {
    bVar10 = 1;
  }
  *(byte *)(param_1 + 0x1be) = bVar10;
  bVar10 = bVar10 ^ 1;
  if (bVar10 == 0) {
    FUN_10020e88(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x20),*puVar2);
    uStack_74 = 0;
    uStack_70 = 0;
    iStack_7c = *(int *)(param_1 + 0x10);
    local_48 = (uint)local_48._2_2_ << 0x10;
    local_80 = *(int *)(param_1 + 0x40);
    local_4c = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    iStack_78 = local_80 + iStack_7c * 0x16c0 + 0x6c0;
    local_6c = 0;
    uStack_68 = 0xffffffff;
    local_64 = 0xffffffff;
    uStack_60 = 0xffffffff;
    uStack_5c = 0xffffffff;
    uStack_58 = 0xffffffff;
    if (*(int *)(param_1 + 0x34) - 3U < 3) {
      uVar7 = FUN_10025ff8(param_1);
      FUN_10033b30(uVar7);
      uVar8 = FUN_10020818(&local_80,*(undefined4 *)(param_1 + 0x130),
                           *(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 0x20),*puVar2,
                           *(undefined4 *)(param_1 + 0x138),local_a0,uStack_9c,local_98);
      if ((uVar8 & 1) == 0) goto LAB_10028c68;
      FUN_10026080(param_1,param_1 + 0x48,&local_80);
      FUN_10020e88(param_1 + 0x48,*(undefined4 *)(param_1 + 0x2c),*puVar2);
    }
    else {
      FUN_10034140(param_1,&local_a0);
      if (*(char *)(param_1 + 0x1bc) != '\0') {
        bVar5 = *(int *)(param_1 + 0x1c) == 0x15;
        iVar11 = 0x20;
        if (bVar5) {
          iVar11 = 0x30;
        }
        uStack_9c = *(uint *)(iVar11 + *(int *)(param_1 + 0xe0));
        iVar11 = 0x1c;
        if (bVar5) {
          iVar11 = 0x2c;
        }
        local_a0 = *(uint *)(iVar11 + *(int *)(param_1 + 0xe0));
      }
      uVar9 = (ulonglong)uStack_9c;
      uVar8 = (ulonglong)local_a0;
      uVar6 = FUN_10033d60(param_1);
      if ((1 < uVar6) || (1 < *puVar2)) {
        *(undefined4 *)(param_1 + 0x138) = 1;
      }
      uVar8 = FUN_10020818(&local_80,*(undefined4 *)(param_1 + 0x130),
                           *(undefined4 *)(param_1 + 0x134),uVar6,*puVar2,
                           *(undefined4 *)(param_1 + 0x138),uVar8 & 0xffffffff,uVar9 & 0xffffffff,0)
      ;
      if ((uVar8 & 1) == 0) goto LAB_10028c68;
      puVar3 = (undefined8 *)(param_1 + 0x48);
      FUN_10026080(param_1,puVar3,&local_80);
      if (*(int *)(param_1 + 0x1c) == 0) {
        *(undefined8 *)(param_1 + 0x144) = *(undefined8 *)(param_1 + 0x50);
        *(undefined8 *)(param_1 + 0x13c) = *puVar3;
        *(undefined8 *)(param_1 + 0x154) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x14c) = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x164) = *(undefined8 *)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x15c) = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x16c) = *(undefined8 *)(param_1 + 0x78);
        *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x80);
        FUN_10026738(param_1);
      }
      else {
        FUN_10020e88(puVar3,*(undefined4 *)(param_1 + 0x2c),*puVar2);
      }
      *(uint *)(param_1 + 0x2c) = uVar6;
    }
    bVar10 = 1;
    *(ulonglong *)(param_1 + 0x50) = CONCAT44(uStack_74,iStack_78);
    *(ulonglong *)(param_1 + 0x48) = CONCAT44(iStack_7c,local_80);
    *(ulonglong *)(param_1 + 0x60) = CONCAT44(local_64,uStack_68);
    *(ulonglong *)(param_1 + 0x58) = CONCAT44(local_6c,uStack_70);
    *(ulonglong *)(param_1 + 0x70) = CONCAT44(uStack_54,uStack_58);
    *(ulonglong *)(param_1 + 0x68) = CONCAT44(uStack_5c,uStack_60);
    *(ulonglong *)(param_1 + 0x78) = CONCAT44(local_4c,uStack_50);
    *(int *)(param_1 + 0x80) = local_48;
  }
LAB_10028c68:
  *(byte *)(param_1 + 0x1bd) = bVar10;
  return bVar10;
}

