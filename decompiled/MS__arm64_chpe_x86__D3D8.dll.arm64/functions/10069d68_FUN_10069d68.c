/*
 * FUN_10069d68 at 10069d68
 * undefined FUN_10069d68(void)
 * Address ranges: 10069d68-1006a3e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x10069f94) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10069d68(undefined8 param_1,undefined4 *param_2,undefined4 param_3,ulonglong param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint *extraout_w11;
  uint *extraout_w12;
  uint uVar16;
  uint *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined4 local_160;
  undefined4 uStack_15c;
  uint local_158;
  undefined4 uStack_154;
  uint local_150;
  uint uStack_14c;
  undefined4 local_148;
  uint uStack_144;
  undefined4 local_140;
  uint local_120;
  uint local_11c;
  undefined4 *local_118;
  uint *puStack_114;
  ulonglong local_110;
  uint uStack_108;
  uint auStack_104 [15];
  uint auStack_c8 [34];
  
  puVar17 = param_2 + 0x27;
  uVar13 = *puVar17;
  uVar11 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
  uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
  uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
  uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
  local_11c = 0;
  lVar14 = LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
  uVar11 = (uint)lVar14;
  if ((1 - (uVar11 >> 5) & 0xff) != 0) {
    pbVar2 = (byte *)((int)&local_120 + ((int)uVar11 >> 3));
    *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
    while( true ) {
      uVar11 = (uint)lVar14;
      if (((uint)((param_4 & 0xffffff) >> ((ulonglong)(uVar11 * 3) & 0x3f)) & 7) - 5 < 2) {
        pbVar2 = (byte *)((int)&local_11c + ((int)uVar11 >> 3));
        *pbVar2 = *pbVar2 | (byte)(1 << (ulonglong)(uVar11 & 7));
      }
      uVar11 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
      uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
      lVar14 = LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
      uVar11 = (uint)lVar14;
      if ((1 - (uVar11 >> 5) & 0xff) == 0) break;
      pbVar2 = (byte *)((int)&local_120 + ((int)uVar11 >> 3));
      *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
    }
  }
  local_120 = uVar13;
  auVar19 = FUN_100ef9e8(*param_2);
  uVar5 = auVar19._0_8_;
  iVar4 = auVar19._0_4_;
  if ((iVar4 - 0x40U & 0xffffffee) == 0) {
    if (iVar4 != 0x51) {
      uVar11 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
      uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
      lVar14 = LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
      if (auVar19._8_4_ != 0) {
        bVar1 = (byte)(1 << (ulonglong)((uint)lVar14 & 7));
        lVar15 = ((lVar14 << 0x20) >> 0x23) + ZEXT48(&local_120);
        local_120 = uVar13;
        local_118 = param_2;
        puStack_114 = puVar17;
        local_110 = param_4;
        while( true ) {
          local_11c = 0;
          local_150 = (uint)lVar14;
          uStack_15c = 3;
          *(byte *)lVar15 = *(byte *)lVar15 & (bVar1 ^ 0xff);
          local_158 = 0x300085a;
          if ((*(byte *)((int)&local_11c + ((int)local_150 >> 3)) >> (ulonglong)(local_150 & 7) & 1)
              == 0) {
            local_158 = 0x300005a;
          }
          uStack_154 = 0x106000;
          local_160 = param_3;
          uVar5 = FUN_100ef760(&local_160,0x14);
          uVar13 = (local_120 & 0xaaaaaaaa) >> 1 | (local_120 & 0x55555555) << 1;
          uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
          lVar14 = LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10);
          param_4 = local_110;
          puVar17 = puStack_114;
          param_2 = local_118;
          if ((1 - ((uint)lVar14 >> 5) & 0xff) == 0) break;
          bVar1 = (byte)(1 << (ulonglong)((uint)lVar14 & 7));
          lVar15 = ((lVar14 << 0x20) >> 0x23) + ZEXT48(&local_120);
        }
      }
      goto LAB_10069fcc;
    }
  }
  else if (iVar4 != 0x51) goto LAB_10069fcc;
  if (uVar13 != 0) {
    local_150 = 0;
    uStack_14c = 0;
    local_148 = 7;
    uStack_144 = 0;
    local_158 = 0x600005a;
    uStack_154 = 0x306000;
    uStack_15c = 6;
    local_160 = param_3;
    uVar5 = FUN_100ef760(&local_160,0x20);
  }
LAB_10069fcc:
  auVar18._8_8_ = param_4;
  auVar18._0_8_ = uVar5;
  uVar13 = *puVar17;
  uVar11 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
  uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
  uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
  uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
  lVar14 = LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
  uVar11 = 1 - ((uint)lVar14 >> 5);
  uVar16 = uVar11 & 0xff;
  local_120 = uVar13;
  if (uVar16 != 0) {
    bVar1 = (byte)(1 << (ulonglong)((uint)lVar14 & 7));
    lVar15 = ((lVar14 << 0x20) >> 0x23) + ZEXT48(&local_120);
    uVar8 = ZEXT48(auStack_104);
    uVar5 = 5;
    uVar7 = ZEXT48(&uStack_108);
    uVar10 = ZEXT48(param_2 + 9);
    uVar9 = ZEXT48(&local_120);
    while( true ) {
      *(byte *)lVar15 = *(byte *)lVar15 & (bVar1 ^ 0xff);
      uVar6 = (uint)lVar14;
      *(int *)((int)uVar8 + uVar6 * 8) = (int)uVar5;
      uVar3 = FUN_1006abd0(auVar18._0_8_,auVar18._8_8_);
      *(uint *)((int)uVar7 + uVar6 * 8) = uVar3 & 0xff;
      auVar18 = FUN_1006abd0();
      uVar3 = auVar18._0_4_ & 0x1f;
      uVar12 = 1 << uVar3 & 0xff;
      if (uVar12 != 0 && uVar12 < 4 || uVar12 == 4) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar3) {
        case 0:
          *extraout_w12 = 1 << (ulonglong)(uVar6 & 0x1f) | *extraout_w12;
          break;
        case 1:
          *extraout_w11 = 1 << (ulonglong)(uVar6 & 0x1f) | *extraout_w11;
          break;
        case 2:
          *(uint *)uVar10 = 1 << (ulonglong)(uVar6 & 0x1f) | *(uint *)uVar10;
        }
      }
      uVar3 = (local_120 & 0xaaaaaaaa) >> 1 | (local_120 & 0x55555555) << 1;
      uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      lVar14 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
      if ((1 - ((uint)lVar14 >> 5) & 0xff) == 0) break;
      bVar1 = (byte)(1 << (ulonglong)((uint)lVar14 & 7));
      lVar15 = ((lVar14 << 0x20) >> 0x23) + (uVar9 & 0xffffffff);
    }
  }
  iVar4 = FUN_100ef9e8(*param_2);
  if (iVar4 == 0x51 || (iVar4 - 0x40U & 0xffffffee) != 0) {
    if (iVar4 == 0x51) {
      local_11c = 0;
      FUN_10121220(auStack_c8,0xffffffff,0x20);
      uVar11 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
      uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
      lVar14 = LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
      local_120 = 0;
      if (uVar16 != 0) {
        pbVar2 = (byte *)((int)&local_120 + ((int)(uint)lVar14 >> 3));
        *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)((uint)lVar14 & 7)) ^ 0xff);
        while( true ) {
          uVar11 = (&uStack_108)[(int)lVar14 * 2];
          uVar16 = auStack_104[(int)lVar14 * 2];
          pbVar2 = (byte *)((int)&local_11c + ((int)uVar11 >> 3));
          *pbVar2 = *pbVar2 | (byte)(1 << (ulonglong)(uVar11 & 7));
          auStack_c8[uVar11] = uVar16;
          uVar11 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
          uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
          lVar14 = LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
          uVar11 = (uint)lVar14;
          local_120 = local_11c;
          if ((1 - (uVar11 >> 5) & 0xff) == 0) break;
          pbVar2 = (byte *)((int)&local_120 + ((int)uVar11 >> 3));
          *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
        }
      }
      uVar13 = (local_120 & 0xaaaaaaaa) >> 1 | (local_120 & 0x55555555) << 1;
      uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
      lVar14 = LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10);
      uVar13 = (uint)lVar14;
      if ((1 - (uVar13 >> 5) & 0xff) != 0) {
        pbVar2 = (byte *)((int)&local_120 + ((int)uVar13 >> 3));
        *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
        while( true ) {
          uStack_15c = 7;
          iVar4 = (int)lVar14 * 0x18;
          uStack_144 = auStack_c8[(int)lVar14] & 0xf;
          uStack_144 = uStack_144 | (uStack_144 | (uStack_144 | uStack_144 << 4) << 4) << 4;
          local_158 = (*(uint *)(&DAT_1012c7c4 + iVar4) & 0x1f) << 0xb | 0x7000058;
          local_148 = *(undefined4 *)(&DAT_1012c7bc + iVar4);
          local_140 = *(undefined4 *)(&DAT_1012c7c0 + iVar4);
          uStack_154 = 0x307000;
          local_150 = *(uint *)(&DAT_1012c7b4 + iVar4);
          uStack_14c = *(uint *)(&DAT_1012c7b8 + iVar4);
          local_160 = param_3;
          FUN_100ef760(&local_160,0x24);
          uVar13 = (local_120 & 0xaaaaaaaa) >> 1 | (local_120 & 0x55555555) << 1;
          uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
          lVar14 = LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10);
          uVar13 = (uint)lVar14;
          if ((1 - (uVar13 >> 5) & 0xff) == 0) break;
          pbVar2 = (byte *)((int)&local_120 + ((int)uVar13 >> 3));
          *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
        }
      }
    }
  }
  else {
    uVar16 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
    uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
    uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
    uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
    lVar14 = LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
    if ((uVar11 & 0xff) != 0) {
      pbVar2 = (byte *)((int)&local_120 + ((int)(uint)lVar14 >> 3));
      *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)((uint)lVar14 & 7)) ^ 0xff);
      local_120 = uVar13;
      while( true ) {
        uStack_15c = 4;
        iVar4 = (int)lVar14;
        uStack_14c = auStack_104[iVar4 * 2] & 0xf;
        uStack_14c = uStack_14c | (uStack_14c | (uStack_14c | uStack_14c << 4) << 4) << 4;
        local_150 = *(int *)(&DAT_1012c7b0 + (&uStack_108)[iVar4 * 2] * 0x18) + iVar4;
        local_158 = (*(uint *)(&DAT_1012c7c4 + (&uStack_108)[iVar4 * 2] * 0x18) & 0x1f) << 0xb |
                    0x4000058;
        uStack_154 = 0x107000;
        local_160 = param_3;
        FUN_100ef760(&local_160,0x18);
        uVar13 = (local_120 & 0xaaaaaaaa) >> 1 | (local_120 & 0x55555555) << 1;
        uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
        lVar14 = LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10);
        uVar13 = (uint)lVar14;
        if ((1 - (uVar13 >> 5) & 0xff) == 0) break;
        pbVar2 = (byte *)((int)&local_120 + ((int)uVar13 >> 3));
        *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
      }
    }
  }
  return;
}

