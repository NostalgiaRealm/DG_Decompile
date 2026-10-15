/*
 * FUN_10081010 at 10081010
 * undefined FUN_10081010(void)
 * Address ranges: 10081010-1008120f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10081010(undefined8 param_1,int param_2,undefined4 param_3,ulonglong param_4)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong extraout_x11;
  undefined1 auVar12 [16];
  uint local_c0;
  byte local_bc [8];
  undefined1 auStack_b4 [132];
  
  puVar1 = (uint *)(param_2 + 0xac);
  local_c0 = *puVar1;
  uVar4 = (local_c0 & 0xaaaaaaaa) >> 1 | (local_c0 & 0x55555555) << 1;
  uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  local_bc[0] = 0;
  local_bc[1] = 0;
  local_bc[2] = 0;
  local_bc[3] = 0;
  lVar11 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
  uVar4 = (uint)lVar11;
  if ((1 - (uVar4 >> 5) & 0xff) != 0) {
    pbVar3 = (byte *)((int)&local_c0 + ((int)uVar4 >> 3));
    *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    while( true ) {
      uVar4 = (uint)lVar11;
      if (((uint)((param_4 & 0xffffffffffff) >> ((ulonglong)(uVar4 * 3) & 0x3f)) & 7) - 5 < 2) {
        local_bc[(int)uVar4 >> 3] = local_bc[(int)uVar4 >> 3] | (byte)(1 << (ulonglong)(uVar4 & 7));
      }
      uVar4 = (local_c0 & 0xaaaaaaaa) >> 1 | (local_c0 & 0x55555555) << 1;
      uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      lVar11 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
      uVar4 = (uint)lVar11;
      if ((1 - (uVar4 >> 5) & 0xff) == 0) break;
      pbVar3 = (byte *)((int)&local_c0 + ((int)uVar4 >> 3));
      *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    }
  }
  uVar5 = FUN_10121c70(param_2,param_3,local_c0,&DAT_101621f8,0);
  local_c0 = *puVar1;
  uVar4 = (local_c0 & 0xaaaaaaaa) >> 1 | (local_c0 & 0x55555555) << 1;
  uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar6 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
  if ((1 - ((uint)uVar6 >> 5) & 0xff) != 0) {
    bVar2 = (byte)(1 << (ulonglong)((uint)uVar6 & 7));
    lVar11 = ((longlong)(uVar6 << 0x20) >> 0x23) + ZEXT48(&local_c0);
    uVar10 = (ulonglong)(param_2 + 8);
    uVar9 = ZEXT48(auStack_b4);
    uVar8 = 5;
    uVar7 = ZEXT48(local_bc + 4);
    while( true ) {
      *(byte *)lVar11 = *(byte *)lVar11 & (bVar2 ^ 0xff);
      *(int *)((int)uVar9 + (int)uVar6 * 8) = (int)uVar8;
      auVar12 = FUN_10081990(uVar5,param_4,uVar6);
      *(uint *)((int)uVar7 + (int)uVar6 * 8) = auVar12._0_4_ & 0xff;
      uVar4 = FUN_10081990(auVar12._0_8_,auVar12._8_8_,uVar6 & 0xffffffff);
      uVar5 = FUN_10123618(uVar10 & 0xffffffff,uVar6 & 0xffffffff,
                           (char)(1 << (ulonglong)(uVar4 & 0x1f)));
      uVar4 = (local_c0 & 0xaaaaaaaa) >> 1 | (local_c0 & 0x55555555) << 1;
      uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar6 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
      if ((1 - ((uint)uVar6 >> 5) & 0xff) == 0) break;
      bVar2 = (byte)(1 << (ulonglong)((uint)uVar6 & 7));
      lVar11 = ((longlong)(uVar6 << 0x20) >> 0x23) + (extraout_x11 & 0xffffffff);
    }
  }
  FUN_10121910(param_2,param_3,*puVar1,&DAT_101621b0,local_bc + 4);
  return;
}

