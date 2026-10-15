/*
 * FUN_100b3150 at 100b3150
 * undefined FUN_100b3150(void)
 * Address ranges: 100b3150-100b34db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b3150(int param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  byte *pbVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_60 [8];
  int local_58;
  uint local_54;
  uint local_50;
  
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar4 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar4 = true;
    iVar6 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar6 == 0) {
      FUN_10006560(0);
    }
  }
  FUN_10121020(auStack_60);
  iVar6 = param_1 + -0x58e0;
  iVar7 = FUN_10008600(iVar6,param_2);
  if (-1 < iVar7) {
    iVar1 = *(int *)(*(int *)(param_1 + -0x56d0) + param_2 * 4 + -4);
    local_54 = *(uint *)(iVar1 + 0x9334);
    local_58 = iVar1 + 0x9334;
    local_50 = 0;
    uVar8 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
    uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    for (uVar8 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10); (1 - (uVar8 >> 5) & 0xff) == 0;
        uVar8 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10)) {
      local_50 = local_50 + 0x20;
      if (0xad < local_50) goto LAB_100b3378;
      local_54 = *(uint *)(local_58 + (local_50 >> 5) * 4);
      uVar8 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
      uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    }
    pbVar3 = (byte *)((int)&local_54 + ((int)uVar8 >> 3));
    *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
    iVar9 = uVar8 + local_50;
    if (iVar9 != -1) {
      do {
        uVar5 = local_50;
        FUN_100b1a48(iVar6,iVar9,*(undefined4 *)(iVar1 + 8 + iVar9 * 4));
        uVar8 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
        uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        for (uVar8 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10); (1 - (uVar8 >> 5) & 0xff) == 0;
            uVar8 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10)) {
          local_50 = uVar5 + 0x20;
          if (0xad < local_50) goto LAB_100b3378;
          local_54 = *(uint *)(local_58 + (local_50 >> 5) * 4);
          uVar8 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
          uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
          uVar5 = local_50;
        }
        pbVar3 = (byte *)((int)&local_54 + ((int)uVar8 >> 3));
        *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
        iVar9 = local_50 + uVar8;
      } while (iVar9 != -1);
    }
LAB_100b3378:
    iVar9 = 0;
    if (*(short *)(iVar1 + 0x8a54) != -1) {
      do {
        uVar2 = *(ushort *)(iVar1 + 0x8a54 + iVar9 * 4);
        FUN_100b5650(iVar6,uVar2,iVar1 + 0x4a54 + (uint)uVar2 * 0x10,
                     (uint)*(ushort *)(iVar1 + 0x8a56 + iVar9 * 4) - (uint)uVar2);
        iVar9 = iVar9 + 1;
      } while (*(short *)(iVar1 + 0x8a54 + iVar9 * 4) != -1);
    }
    iVar9 = 0;
    if (*(short *)(iVar1 + 0x9258) != -1) {
      do {
        uVar2 = *(ushort *)(iVar1 + 0x9258 + iVar9 * 4);
        FUN_100b5590(iVar6,uVar2,iVar1 + 0x49d4 + (uint)uVar2 * 0x10,
                     (uint)*(ushort *)(iVar1 + 0x925a + iVar9 * 4) - (uint)uVar2);
        iVar9 = iVar9 + 1;
      } while (*(short *)(iVar1 + 0x9258 + iVar9 * 4) != -1);
    }
    if (*(char *)(iVar1 + 0x93a1) != '\0') {
      FUN_100b5780(iVar6,*(undefined4 *)(iVar1 + 0x49b0));
    }
    if (*(char *)(iVar1 + 0x93a0) != '\0') {
      FUN_100b59e0(iVar6,*(undefined4 *)(iVar1 + 0x49ac));
    }
  }
  FUN_10120f70(auStack_60);
  if (bVar4) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return iVar7;
}

