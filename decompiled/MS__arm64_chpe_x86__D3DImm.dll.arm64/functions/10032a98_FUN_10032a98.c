/*
 * FUN_10032a98 at 10032a98
 * undefined FUN_10032a98(void)
 * Address ranges: 10032a98-10032e97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10032a98(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  byte local_20 [16];
  
  uVar3 = *(uint *)(param_1 + 0x490);
  iVar7 = 0;
  uVar5 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
  uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
  uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
  uVar5 = (uint)lVar6;
  iVar4 = 8;
  if ((1 - (uVar5 >> 5) & 0xff) != 0) {
    local_20[(int)uVar5 >> 3] =
         local_20[(int)uVar5 >> 3] & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
    while( true ) {
      uVar5 = (uint)lVar6;
      *(uint *)(param_1 + 0x46c) =
           (*(uint *)(param_1 + 0x46c) & (7 << (ulonglong)(iVar7 * 3 & 0x1f) ^ 0xffffffffU) |
           1 << (ulonglong)(iVar7 * 3 & 0x1f)) &
           (1 << (ulonglong)(iVar7 + 0x18U & 0x1f) ^ 0xffffffffU) |
           (uint)(7 < uVar5) << (ulonglong)(iVar7 + 0x18U & 0x1f);
      iVar2 = iVar4;
      if (7 >= uVar5) {
        iVar2 = 0;
      }
      iVar1 = iVar7 * 4;
      iVar7 = iVar7 + 1;
      *(uint *)(param_1 + 0x17f0 + iVar1) = (uVar5 - iVar2) * 7;
      uVar5 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
      uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
      uVar5 = (uint)lVar6;
      if ((1 - (uVar5 >> 5) & 0xff) == 0) break;
      local_20[(int)uVar5 >> 3] =
           local_20[(int)uVar5 >> 3] & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x494);
  uVar5 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
  uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
  uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
  uVar5 = (uint)lVar6;
  if ((1 - (uVar5 >> 5) & 0xff) != 0) {
    local_20[(int)uVar5 >> 3] =
         local_20[(int)uVar5 >> 3] & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
    while( true ) {
      uVar5 = (uint)lVar6;
      *(uint *)(param_1 + 0x46c) =
           (*(uint *)(param_1 + 0x46c) & (7 << (ulonglong)(iVar7 * 3 & 0x1f) ^ 0xffffffffU) |
           2 << (ulonglong)(iVar7 * 3 & 0x1f)) &
           (1 << (ulonglong)(iVar7 + 0x18U & 0x1f) ^ 0xffffffffU) |
           (uint)(7 < uVar5) << (ulonglong)(iVar7 + 0x18U & 0x1f);
      iVar2 = iVar4;
      if (7 >= uVar5) {
        iVar2 = 0;
      }
      iVar1 = iVar7 * 4;
      iVar7 = iVar7 + 1;
      *(uint *)(param_1 + 0x17f0 + iVar1) = (uVar5 - iVar2) * 7;
      uVar5 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
      uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
      uVar5 = (uint)lVar6;
      if ((1 - (uVar5 >> 5) & 0xff) == 0) break;
      local_20[(int)uVar5 >> 3] =
           local_20[(int)uVar5 >> 3] & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x498);
  uVar5 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
  uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
  uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
  uVar5 = (uint)lVar6;
  if ((1 - (uVar5 >> 5) & 0xff) != 0) {
    local_20[(int)uVar5 >> 3] =
         local_20[(int)uVar5 >> 3] & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
    while( true ) {
      uVar5 = (uint)lVar6;
      *(uint *)(param_1 + 0x46c) =
           (*(uint *)(param_1 + 0x46c) & (7 << (ulonglong)(iVar7 * 3 & 0x1f) ^ 0xffffffffU) |
           3 << (ulonglong)(iVar7 * 3 & 0x1f)) &
           (1 << (ulonglong)(iVar7 + 0x18U & 0x1f) ^ 0xffffffffU) |
           (uint)(7 < uVar5) << (ulonglong)(iVar7 + 0x18U & 0x1f);
      iVar2 = iVar4;
      if (7 >= uVar5) {
        iVar2 = 0;
      }
      iVar1 = iVar7 * 4;
      iVar7 = iVar7 + 1;
      *(uint *)(param_1 + 0x17f0 + iVar1) = (uVar5 - iVar2) * 7;
      uVar5 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
      uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
      uVar5 = (uint)lVar6;
      if ((1 - (uVar5 >> 5) & 0xff) == 0) break;
      local_20[(int)uVar5 >> 3] =
           local_20[(int)uVar5 >> 3] & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x49c);
  uVar5 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
  uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
  uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
  uVar5 = (uint)lVar6;
  if ((1 - (uVar5 >> 5) & 0xff) != 0) {
    local_20[(int)uVar5 >> 3] =
         local_20[(int)uVar5 >> 3] & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
    while( true ) {
      uVar5 = (uint)lVar6;
      *(uint *)(param_1 + 0x46c) =
           (*(uint *)(param_1 + 0x46c) & (7 << (ulonglong)(iVar7 * 3 & 0x1f) ^ 0xffffffffU) |
           4 << (ulonglong)(iVar7 * 3 & 0x1f)) &
           (1 << (ulonglong)(iVar7 + 0x18U & 0x1f) ^ 0xffffffffU) |
           (uint)(7 < uVar5) << (ulonglong)(iVar7 + 0x18U & 0x1f);
      iVar2 = iVar4;
      if (7 >= uVar5) {
        iVar2 = 0;
      }
      iVar1 = iVar7 * 4;
      iVar7 = iVar7 + 1;
      *(uint *)(param_1 + 0x17f0 + iVar1) = (uVar5 - iVar2) * 7;
      uVar5 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
      uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
      uVar5 = (uint)lVar6;
      if ((1 - (uVar5 >> 5) & 0xff) == 0) break;
      local_20[(int)uVar5 >> 3] =
           local_20[(int)uVar5 >> 3] & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
    }
  }
  *(undefined1 *)(param_1 + 0x1d4a) = 0;
  *(uint *)(param_1 + 0x470) =
       (1 << (ulonglong)(iVar7 * 3 & 0x1f)) - 1U | *(uint *)(param_1 + 0x470) & 0xc0000000;
  *(byte *)(param_1 + 0x1d41) = iVar7 != 0 | *(byte *)(param_1 + 0x1d41);
  return;
}

