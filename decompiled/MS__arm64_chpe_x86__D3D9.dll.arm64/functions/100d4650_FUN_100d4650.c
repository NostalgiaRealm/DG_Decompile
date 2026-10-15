/*
 * FUN_100d4650 at 100d4650
 * undefined FUN_100d4650(void)
 * Address ranges: 100d4650-100d5343
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100d4650(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  uint local_7c;
  uint local_78;
  int local_70;
  int local_6c;
  char local_68;
  undefined4 *local_64;
  int local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  int local_54;
  undefined1 auStack_50 [4];
  int local_4c;
  
  local_54 = param_1 + 0xc000;
  if (((*(uint *)(param_1 + 0xdd0) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    local_68 = '\0';
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    local_68 = '\x01';
    iVar4 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar4 == 0) {
      FUN_100071d0(0);
    }
  }
  FUN_10157b40(auStack_50);
  local_4c = FUN_10009410(param_1,param_2);
  if (-1 < local_4c) {
    iVar12 = *(int *)(*(int *)(param_1 + 0x3b4) + param_2 * 4 + -4);
    iVar4 = iVar12 + 0x8000;
    local_78 = 0;
    local_7c = *(uint *)(iVar12 + 0xac24);
    iVar14 = iVar12 + 0x4000;
    uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    for (uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10); (1 - (uVar7 >> 5) & 0xff) == 0;
        uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10)) {
      local_78 = local_78 + 0x20;
      if (0xdf < local_78) goto LAB_100d48a0;
      local_7c = *(uint *)(iVar12 + 0xac24 + (local_78 >> 5) * 4);
      uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
      uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    }
    pbVar3 = (byte *)((int)&local_7c + ((int)uVar7 >> 3));
    *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
    iVar13 = uVar7 + local_78;
    if (iVar13 != -1) {
      local_70 = iVar4;
      local_6c = iVar14;
      do {
        uVar8 = local_78;
        FUN_100d3a00(param_1,iVar13 / 0xe,iVar13 % 0xe,
                     *(undefined4 *)(iVar12 + 0x4abc + (iVar13 % 0xe + (iVar13 / 0xe) * 0xe) * 4));
        uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
        uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        for (uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10); iVar4 = local_70,
            iVar14 = local_6c, (1 - (uVar7 >> 5) & 0xff) == 0;
            uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10)) {
          local_78 = uVar8 + 0x20;
          if (0xdf < local_78) goto LAB_100d48a0;
          local_7c = *(uint *)(iVar12 + 0xac24 + (local_78 >> 5) * 4);
          uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
          uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
          uVar8 = local_78;
        }
        pbVar3 = (byte *)((int)&local_7c + ((int)uVar7 >> 3));
        *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
        iVar13 = local_78 + uVar7;
      } while (iVar13 != -1);
    }
LAB_100d48a0:
    local_7c = *(uint *)(iVar4 + 0x2c40);
    local_78 = 0;
    uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    for (uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10); (1 - (uVar7 >> 5) & 0xff) == 0;
        uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10)) {
      local_78 = local_78 + 0x20;
      if (0x45 < local_78) goto LAB_100d4a20;
      local_7c = *(uint *)(iVar12 + 0xac40 + (local_78 >> 5) * 4);
      uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
      uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    }
    pbVar3 = (byte *)((int)&local_7c + ((int)uVar7 >> 3));
    *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
    iVar13 = local_78 + uVar7;
    if (iVar13 != -1) {
      local_70 = iVar4;
      local_6c = iVar14;
      do {
        uVar8 = local_78;
        FUN_100d3a00(param_1,iVar13 / 0xe + 0x100,iVar13 % 0xe,
                     *(undefined4 *)(iVar12 + 0x4abc + (iVar13 % 0xe + (iVar13 / 0xe) * 0xe) * 4));
        uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
        uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        for (uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10); iVar4 = local_70,
            iVar14 = local_6c, (1 - (uVar7 >> 5) & 0xff) == 0;
            uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10)) {
          local_78 = uVar8 + 0x20;
          if (0x45 < local_78) goto LAB_100d4a20;
          local_7c = *(uint *)(iVar12 + 0xac40 + (local_78 >> 5) * 4);
          uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
          uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
          uVar8 = local_78;
        }
        pbVar3 = (byte *)((int)&local_7c + ((int)uVar7 >> 3));
        *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
        iVar13 = local_78 + uVar7;
      } while (iVar13 != -1);
    }
LAB_100d4a20:
    local_7c = *(uint *)(iVar4 + 0x2c50);
    local_78 = 0;
    uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    for (uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10); (1 - (uVar7 >> 5) & 0xff) == 0;
        uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10)) {
      local_78 = local_78 + 0x20;
      if (4 < local_78) goto LAB_100d4bc0;
      local_7c = *(uint *)(iVar12 + 0xac50 + (local_78 >> 5) * 4);
      uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
      uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    }
    pbVar3 = (byte *)((int)&local_7c + ((int)uVar7 >> 3));
    *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
    iVar13 = local_78 + uVar7;
    if (iVar13 != -1) {
      local_70 = iVar4;
      do {
        uVar7 = local_78;
        iVar10 = 0;
        iVar11 = 0;
        iVar4 = *(int *)(iVar12 + 0x4fa0 + iVar13 * 4);
        if (iVar4 != 0) {
          switch(*(undefined4 *)(iVar4 + 0x18)) {
          case 3:
          case 5:
            iVar10 = iVar4;
            break;
          case 4:
            iVar11 = iVar4;
          }
        }
        FUN_100d37c0(param_1,iVar13,iVar4,iVar10,iVar11);
        uVar8 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
        uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        uVar8 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
        while (iVar4 = local_70, (1 - (uVar8 >> 5) & 0xff) == 0) {
          local_78 = uVar7 + 0x20;
          if (4 < local_78) goto LAB_100d4bc0;
          local_7c = *(uint *)(iVar12 + 0xac50 + (local_78 >> 5) * 4);
          uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
          uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
          uVar8 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
          uVar7 = local_78;
        }
        pbVar3 = (byte *)((int)&local_7c + ((int)uVar8 >> 3));
        *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
        iVar13 = local_78 + uVar8;
      } while (iVar13 != -1);
    }
LAB_100d4bc0:
    local_7c = *(uint *)(iVar4 + 0x2c4c);
    local_78 = 0;
    uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    for (uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10); (1 - (uVar7 >> 5) & 0xff) == 0;
        uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10)) {
      local_78 = local_78 + 0x20;
      if (0xf < local_78) goto LAB_100d4d08;
      local_7c = *(uint *)(iVar12 + 0xac4c + (local_78 >> 5) * 4);
      uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
      uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    }
    pbVar3 = (byte *)((int)&local_7c + ((int)uVar7 >> 3));
    *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
    iVar13 = local_78 + uVar7;
    if (iVar13 != -1) {
      do {
        *(undefined4 *)(param_1 + 0xc290 + iVar13 * 4) =
             *(undefined4 *)(iVar12 + 0x4f54 + iVar13 * 4);
        uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
        uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        for (uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10); (1 - (uVar7 >> 5) & 0xff) == 0;
            uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10)) {
          local_78 = local_78 + 0x20;
          if (0xf < local_78) goto LAB_100d4d08;
          local_7c = *(uint *)(iVar12 + 0xac4c + (local_78 >> 5) * 4);
          uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
          uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        }
        pbVar3 = (byte *)((int)&local_7c + ((int)uVar7 >> 3));
        *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
        iVar13 = local_78 + uVar7;
      } while (iVar13 != -1);
    }
LAB_100d4d08:
    local_7c = *(uint *)(iVar4 + 0x2ba8);
    local_78 = 0;
    uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    for (uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10); (1 - (uVar7 >> 5) & 0xff) == 0;
        uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10)) {
      local_78 = local_78 + 0x20;
      if (0xd1 < local_78) goto LAB_100d4e48;
      local_7c = *(uint *)(iVar12 + 0xaba8 + (local_78 >> 5) * 4);
      uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
      uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    }
    pbVar3 = (byte *)((int)&local_7c + ((int)uVar7 >> 3));
    *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
    iVar4 = local_78 + uVar7;
    if (iVar4 != -1) {
      do {
        uVar8 = local_78;
        FUN_100d34a8(param_1,iVar4,*(undefined4 *)(iVar12 + 8 + iVar4 * 4));
        uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
        uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        for (uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10); (1 - (uVar7 >> 5) & 0xff) == 0;
            uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10)) {
          local_78 = uVar8 + 0x20;
          if (0xd1 < local_78) goto LAB_100d4e48;
          local_7c = *(uint *)(iVar12 + 0xaba8 + (local_78 >> 5) * 4);
          uVar7 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
          uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
          uVar8 = local_78;
        }
        pbVar3 = (byte *)((int)&local_7c + ((int)uVar7 >> 3));
        *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
        iVar4 = local_78 + uVar7;
      } while (iVar4 != -1);
    }
LAB_100d4e48:
    if (*(char *)(iVar12 + 0xac22) != '\0') {
      uVar15 = *(undefined8 *)(iVar12 + 0x4fb8);
      *(undefined8 *)(param_1 + 0x6d88) = *(undefined8 *)(iVar12 + 0x4fc0);
      *(undefined8 *)(param_1 + 0x6d80) = uVar15;
      *(undefined1 *)(local_54 + 0x2f0) = 1;
    }
    if (*(char *)(iVar12 + 0xac21) != '\0') {
      FUN_100d8f90(*(undefined4 *)(iVar14 + 0xfb4),param_1);
    }
    if (*(char *)(iVar12 + 0xac20) != '\0') {
      FUN_100d9030(param_1,*(undefined4 *)(iVar14 + 0xf9c));
    }
    iVar4 = param_1 + 0x6718;
    if (*(char *)(iVar12 + 0xac1d) != '\0') {
      uVar6 = *(undefined4 *)(iVar14 + 0xf98);
      uVar5 = FUN_100e5650(iVar4,uVar6);
      FUN_100da390(param_1,uVar6,uVar5);
    }
    iVar13 = 0;
    local_60 = iVar12 + 0xa000;
    if (*(short *)(iVar12 + 0xa118) == -1) {
      iVar10 = iVar12;
      puVar9 = (undefined4 *)(param_1 + 0xc288);
    }
    else {
      local_58 = (undefined4 *)(iVar12 + 0xa11a);
      local_5c = (undefined4 *)(iVar12 + 0x6118);
      local_70 = iVar12;
      local_6c = iVar14;
      local_64 = (undefined4 *)(param_1 + 0xc288);
      do {
        uVar1 = *(ushort *)(iVar12 + 0xa118 + iVar13 * 4);
        uVar2 = *(ushort *)(local_58 + iVar13);
        puVar9 = local_5c + (uint)uVar1 * 4;
        uVar6 = FUN_100e5650(iVar4,*(undefined4 *)(param_1 + 0xc288));
        FUN_100d9740(param_1,uVar6,uVar1,puVar9,(uint)uVar2 - (uint)uVar1);
        iVar13 = iVar13 + 1;
        iVar10 = local_70;
        puVar9 = local_64;
        iVar14 = local_6c;
      } while (*(short *)(iVar12 + 0xa118 + iVar13 * 4) != -1);
    }
    iVar13 = local_54;
    iVar12 = 0;
    iVar11 = iVar10;
    if (*(short *)(&DAT_0000126c + iVar14) != -1) {
      local_64 = (undefined4 *)(iVar10 + 0x526e);
      local_5c = (undefined4 *)(iVar10 + 0x5008);
      local_58 = (undefined4 *)(param_1 + 0xc288);
      local_70 = iVar10;
      local_6c = iVar14;
      do {
        uVar1 = *(ushort *)(iVar10 + 0x526c + iVar12 * 4);
        uVar2 = *(ushort *)(local_64 + iVar12);
        puVar9 = local_5c + (uint)uVar1 * 4;
        uVar6 = FUN_100e5650(iVar4,*(undefined4 *)(iVar13 + 0x288));
        FUN_100d9990(param_1,uVar6,uVar1,puVar9,(uint)uVar2 - (uint)uVar1);
        iVar12 = iVar12 + 1;
        iVar11 = local_70;
        puVar9 = local_58;
        iVar14 = local_6c;
      } while (*(short *)(iVar10 + 0x526c + iVar12 * 4) != -1);
    }
    iVar12 = 0;
    iVar13 = local_60;
    if (*(short *)(iVar14 + 0x1248) != -1) {
      local_64 = (undefined4 *)(iVar11 + 0x524a);
      local_6c = iVar14;
      local_5c = puVar9;
      do {
        uVar1 = *(ushort *)(iVar11 + 0x5248 + iVar12 * 4);
        uVar2 = *(ushort *)(local_64 + iVar12);
        uVar6 = FUN_100e5650(iVar4,*local_5c);
        FUN_100d9b80(param_1,uVar6,uVar1,iVar11 + (uVar1 + 0x13f2) * 4,(uint)uVar2 - (uint)uVar1);
        iVar12 = iVar12 + 1;
        iVar13 = local_60;
        iVar14 = local_6c;
      } while (*(short *)(iVar11 + 0x5248 + iVar12 * 4) != -1);
    }
    local_60 = param_1 + 0x6750;
    if (*(char *)(iVar13 + 0xc1c) != '\0') {
      uVar6 = *(undefined4 *)(iVar14 + 0xf94);
      uVar5 = FUN_100e5750(local_60,uVar6);
      FUN_100d90a0(param_1,uVar6,uVar5);
    }
    iVar4 = 0;
    iVar12 = iVar11;
    if (*(short *)(iVar13 + 0x91c) != -1) {
      local_64 = (undefined4 *)(param_1 + 0xc284);
      local_70 = iVar11;
      local_6c = iVar14;
      do {
        uVar1 = *(ushort *)(iVar11 + 0xa91c + iVar4 * 4);
        uVar2 = *(ushort *)(iVar11 + 0xa91e + iVar4 * 4);
        if (*(char *)(param_1 + 0x11) == '\0') {
          uVar6 = FUN_100e5750(local_60,*local_64);
        }
        else {
          uVar6 = 0;
        }
        FUN_100d9d80(param_1,uVar6,uVar1,iVar11 + 0x5318 + (uint)uVar1 * 0x10,
                     (uint)uVar2 - (uint)uVar1);
        iVar4 = iVar4 + 1;
        iVar12 = local_70;
        iVar14 = local_6c;
      } while (*(short *)(iVar11 + 0xa91c + iVar4 * 4) != -1);
    }
    iVar4 = 0;
    iVar13 = iVar12;
    if (*(short *)(iVar14 + 0x12b4) != -1) {
      local_64 = (undefined4 *)(param_1 + 0xc284);
      local_70 = iVar12;
      local_6c = iVar14;
      do {
        uVar1 = *(ushort *)(iVar12 + 0x52b4 + iVar4 * 4);
        uVar2 = *(ushort *)(iVar12 + 0x52b6 + iVar4 * 4);
        if (*(char *)(param_1 + 0x11) == '\0') {
          uVar6 = FUN_100e5750(local_60,*local_64);
        }
        else {
          uVar6 = 0;
        }
        FUN_100d9f80(param_1,uVar6,uVar1,iVar12 + 0x5148 + (uint)uVar1 * 0x10,
                     (uint)uVar2 - (uint)uVar1);
        iVar4 = iVar4 + 1;
        iVar13 = local_70;
        iVar14 = local_6c;
      } while (*(short *)(iVar12 + 0x52b4 + iVar4 * 4) != -1);
    }
    iVar12 = local_60;
    iVar4 = 0;
    if (*(short *)(iVar14 + 0x1290) != -1) {
      local_64 = (undefined4 *)(iVar13 + 0x5292);
      local_5c = (undefined4 *)(param_1 + 0xc284);
      do {
        uVar1 = *(ushort *)(iVar13 + 0x5290 + iVar4 * 4);
        uVar2 = *(ushort *)(local_64 + iVar4);
        uVar6 = FUN_100e5750(iVar12,*local_5c);
        FUN_100da180(param_1,uVar6,uVar1,iVar13 + (uVar1 + 0x1442) * 4,(uint)uVar2 - (uint)uVar1);
        iVar4 = iVar4 + 1;
      } while (*(short *)(iVar13 + 0x5290 + iVar4 * 4) != -1);
    }
  }
  FUN_10157a90(auStack_50);
  if (local_68 == '\0') {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  else {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  return local_4c;
}

