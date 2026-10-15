/*
 * FUN_10075170 at 10075170
 * undefined FUN_10075170(void)
 * Address ranges: 10075170-10075503
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10075170(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  byte local_10 [16];
  
  uVar2 = *(uint *)(param_1 + 0xfa8);
  iVar5 = 0;
  uVar3 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  lVar4 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  uVar3 = (uint)lVar4;
  if ((1 - (uVar3 >> 5) & 0xff) != 0) {
    local_10[(int)uVar3 >> 3] =
         local_10[(int)uVar3 >> 3] & ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    while( true ) {
      *(uint *)(param_1 + 0xf7c) =
           (*(uint *)(param_1 + 0xf7c) & (7 << (ulonglong)(iVar5 * 3 & 0x1f) ^ 0xffffffffU) |
           1 << (ulonglong)(iVar5 * 3 & 0x1f)) &
           (1 << (ulonglong)(iVar5 + 0x18U & 0x1f) ^ 0xffffffffU);
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(int *)(param_1 + 0x7510 + iVar1) = (int)lVar4 * 7;
      uVar3 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
      uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      lVar4 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
      uVar3 = (uint)lVar4;
      if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
      local_10[(int)uVar3 >> 3] =
           local_10[(int)uVar3 >> 3] & ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    }
  }
  uVar2 = *(uint *)(param_1 + 0xfac);
  uVar3 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  lVar4 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  uVar3 = (uint)lVar4;
  if ((1 - (uVar3 >> 5) & 0xff) != 0) {
    local_10[(int)uVar3 >> 3] =
         local_10[(int)uVar3 >> 3] & ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    while( true ) {
      *(uint *)(param_1 + 0xf7c) =
           (*(uint *)(param_1 + 0xf7c) & (7 << (ulonglong)(iVar5 * 3 & 0x1f) ^ 0xffffffffU) |
           2 << (ulonglong)(iVar5 * 3 & 0x1f)) &
           (1 << (ulonglong)(iVar5 + 0x18U & 0x1f) ^ 0xffffffffU);
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(int *)(param_1 + 0x7510 + iVar1) = (int)lVar4 * 7;
      uVar3 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
      uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      lVar4 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
      uVar3 = (uint)lVar4;
      if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
      local_10[(int)uVar3 >> 3] =
           local_10[(int)uVar3 >> 3] & ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    }
  }
  uVar2 = *(uint *)(param_1 + 0xfb0);
  uVar3 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  lVar4 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  uVar3 = (uint)lVar4;
  if ((1 - (uVar3 >> 5) & 0xff) != 0) {
    local_10[(int)uVar3 >> 3] =
         local_10[(int)uVar3 >> 3] & ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    while( true ) {
      *(uint *)(param_1 + 0xf7c) =
           (*(uint *)(param_1 + 0xf7c) & (7 << (ulonglong)(iVar5 * 3 & 0x1f) ^ 0xffffffffU) |
           3 << (ulonglong)(iVar5 * 3 & 0x1f)) &
           (1 << (ulonglong)(iVar5 + 0x18U & 0x1f) ^ 0xffffffffU);
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(int *)(param_1 + 0x7510 + iVar1) = (int)lVar4 * 7;
      uVar3 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
      uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      lVar4 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
      uVar3 = (uint)lVar4;
      if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
      local_10[(int)uVar3 >> 3] =
           local_10[(int)uVar3 >> 3] & ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    }
  }
  uVar2 = *(uint *)(param_1 + 0xfb4);
  uVar3 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  lVar4 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  uVar3 = (uint)lVar4;
  if ((1 - (uVar3 >> 5) & 0xff) != 0) {
    local_10[(int)uVar3 >> 3] =
         local_10[(int)uVar3 >> 3] & ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    while( true ) {
      *(uint *)(param_1 + 0xf7c) =
           (*(uint *)(param_1 + 0xf7c) & (7 << (ulonglong)(iVar5 * 3 & 0x1f) ^ 0xffffffffU) |
           4 << (ulonglong)(iVar5 * 3 & 0x1f)) &
           (1 << (ulonglong)(iVar5 + 0x18U & 0x1f) ^ 0xffffffffU);
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(int *)(param_1 + 0x7510 + iVar1) = (int)lVar4 * 7;
      uVar3 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
      uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      lVar4 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
      uVar3 = (uint)lVar4;
      if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
      local_10[(int)uVar3 >> 3] =
           local_10[(int)uVar3 >> 3] & ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    }
  }
  *(undefined1 *)(param_1 + 0xf6a5) = 0;
  *(uint *)(param_1 + 0xf80) =
       (1 << (ulonglong)(iVar5 * 3 & 0x1f)) - 1U | *(uint *)(param_1 + 0xf80) & 0xc0000000;
  *(byte *)(param_1 + 0xf671) = iVar5 != 0 | *(byte *)(param_1 + 0xf671);
  return;
}

