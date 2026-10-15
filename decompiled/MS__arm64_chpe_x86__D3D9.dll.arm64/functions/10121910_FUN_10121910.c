/*
 * FUN_10121910 at 10121910
 * undefined FUN_10121910(void)
 * Address ranges: 10121910-10121c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10121910(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_110;
  undefined4 uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  int local_100;
  uint local_fc;
  undefined4 local_f8;
  uint uStack_f4;
  undefined4 local_f0;
  uint local_d0;
  uint local_cc;
  uint auStack_c8 [34];
  
  iVar4 = FUN_10122f60(*param_1);
  if (iVar4 == 0x51 || (iVar4 - 0x40U & 0xffffffee) != 0) {
    if (iVar4 == 0x51) {
      local_cc = 0;
      FUN_10157c90(auStack_c8,0xffffffff,0x20);
      uVar5 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
      uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
      uVar5 = (uint)lVar6;
      local_d0 = 0;
      if ((1 - (uVar5 >> 5) & 0xff) != 0) {
        pbVar3 = (byte *)((int)&local_d0 + ((int)uVar5 >> 3));
        *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
        while( true ) {
          uVar5 = *(uint *)(param_5 + (int)lVar6 * 8);
          uVar1 = *(uint *)(param_5 + 4 + (int)lVar6 * 8);
          pbVar3 = (byte *)((int)auStack_c8 + ((int)uVar5 >> 3) + -4);
          *pbVar3 = *pbVar3 | (byte)(1 << (ulonglong)(uVar5 & 7));
          auStack_c8[uVar5] = uVar1;
          uVar5 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
          uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
          uVar5 = (uint)lVar6;
          local_d0 = local_cc;
          if ((1 - (uVar5 >> 5) & 0xff) == 0) break;
          pbVar3 = (byte *)((int)&local_d0 + ((int)uVar5 >> 3));
          *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
        }
      }
      uVar5 = (local_d0 & 0xaaaaaaaa) >> 1 | (local_d0 & 0x55555555) << 1;
      uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
      if ((1 - ((uint)lVar6 >> 5) & 0xff) != 0) {
        bVar2 = (byte)(1 << (ulonglong)((uint)lVar6 & 7));
        lVar7 = ((lVar6 << 0x20) >> 0x23) + ZEXT48(&local_d0);
        while( true ) {
          iVar4 = (int)lVar6;
          *(byte *)lVar7 = *(byte *)lVar7 & (bVar2 ^ 0xff);
          uStack_f4 = auStack_c8[iVar4] & 0xf;
          uStack_f4 = uStack_f4 | (uStack_f4 | (uStack_f4 | uStack_f4 << 4) << 4) << 4;
          local_108 = (*(uint *)(param_4 + 0x14 + iVar4 * 0x18) & 0x1f) << 0xb | 0x7000058;
          local_f0 = *(undefined4 *)(param_4 + 0x10 + iVar4 * 0x18);
          uStack_104 = 0x307000;
          local_f8 = *(undefined4 *)(param_4 + 0xc + iVar4 * 0x18);
          local_fc = *(undefined4 *)(param_4 + 8 + iVar4 * 0x18);
          local_100 = *(undefined4 *)(param_4 + 4 + iVar4 * 0x18);
          uStack_10c = 7;
          local_110 = param_2;
          FUN_10122cd8(&local_110,0x24);
          uVar5 = (local_d0 & 0xaaaaaaaa) >> 1 | (local_d0 & 0x55555555) << 1;
          uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
          if ((1 - ((uint)lVar6 >> 5) & 0xff) == 0) break;
          bVar2 = (byte)(1 << (ulonglong)((uint)lVar6 & 7));
          lVar7 = ((lVar6 << 0x20) >> 0x23) + ZEXT48(&local_d0);
        }
      }
    }
  }
  else {
    uVar5 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
    uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
    if ((1 - ((uint)lVar6 >> 5) & 0xff) != 0) {
      bVar2 = (byte)(1 << (ulonglong)((uint)lVar6 & 7));
      lVar7 = ((lVar6 << 0x20) >> 0x23) + ZEXT48(&local_d0);
      local_d0 = param_3;
      while( true ) {
        *(byte *)lVar7 = *(byte *)lVar7 & (bVar2 ^ 0xff);
        local_100 = (int)lVar6;
        local_fc = *(uint *)(param_5 + 4 + local_100 * 8) & 0xf;
        iVar4 = *(int *)(param_5 + local_100 * 8);
        local_fc = local_fc | (local_fc | (local_fc | local_fc << 4) << 4) << 4;
        local_100 = *(int *)(param_4 + iVar4 * 0x18) + local_100;
        local_108 = (*(uint *)(param_4 + 0x14 + iVar4 * 0x18) & 0x1f) << 0xb | 0x4000058;
        uStack_104 = 0x107000;
        uStack_10c = 4;
        local_110 = param_2;
        FUN_10122cd8(&local_110,0x18);
        uVar5 = (local_d0 & 0xaaaaaaaa) >> 1 | (local_d0 & 0x55555555) << 1;
        uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
        if ((1 - ((uint)lVar6 >> 5) & 0xff) == 0) break;
        bVar2 = (byte)(1 << (ulonglong)((uint)lVar6 & 7));
        lVar7 = ((lVar6 << 0x20) >> 0x23) + ZEXT48(&local_d0);
      }
    }
  }
  return;
}

