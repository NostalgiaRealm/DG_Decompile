/*
 * FUN_180164460 at 180164460
 * undefined FUN_180164460(void)
 * Address ranges: 180164460-180164777
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180164460(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint local_10 [4];
  
  local_10[0] = *(uint *)(param_1 + 0xfc8);
  uVar3 = 0;
  uVar1 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
  uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  lVar4 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
  uVar1 = (uint)lVar4;
  if ((1 - (uVar1 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) =
         *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
    while( true ) {
      *(uint *)(param_1 + 0xf9c) =
           (*(uint *)(param_1 + 0xf9c) & (7 << (ulonglong)(uVar3 * 3 & 0x1f) ^ 0xffffffffU) |
           1 << (ulonglong)(uVar3 * 3 & 0x1f)) &
           (1 << (ulonglong)(uVar3 + 0x18 & 0x1f) ^ 0xffffffffU);
      *(int *)(param_1 + 30000 + (ulonglong)uVar3 * 4) = (int)lVar4 * 7;
      uVar3 = uVar3 + 1;
      uVar1 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
      uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      lVar4 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
      uVar1 = (uint)lVar4;
      if ((1 - (uVar1 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) =
           *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
    }
  }
  local_10[0] = *(uint *)(param_1 + 0xfcc);
  lVar4 = param_1 + 30000;
  uVar1 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
  uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  lVar2 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
  uVar1 = (uint)lVar2;
  if ((1 - (uVar1 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) =
         *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
    while( true ) {
      *(uint *)(param_1 + 0xf9c) =
           (*(uint *)(param_1 + 0xf9c) & (7 << (ulonglong)(uVar3 * 3 & 0x1f) ^ 0xffffffffU) |
           2 << (ulonglong)(uVar3 * 3 & 0x1f)) &
           (1 << (ulonglong)(uVar3 + 0x18 & 0x1f) ^ 0xffffffffU);
      *(int *)(lVar4 + (ulonglong)uVar3 * 4) = (int)lVar2 * 7;
      uVar3 = uVar3 + 1;
      uVar1 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
      uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      lVar2 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
      uVar1 = (uint)lVar2;
      if ((1 - (uVar1 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) =
           *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
    }
  }
  local_10[0] = *(uint *)(param_1 + 0xfd0);
  uVar1 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
  uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  lVar2 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
  uVar1 = (uint)lVar2;
  if ((1 - (uVar1 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) =
         *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
    while( true ) {
      *(uint *)(param_1 + 0xf9c) =
           (*(uint *)(param_1 + 0xf9c) & (7 << (ulonglong)(uVar3 * 3 & 0x1f) ^ 0xffffffffU) |
           3 << (ulonglong)(uVar3 * 3 & 0x1f)) &
           (1 << (ulonglong)(uVar3 + 0x18 & 0x1f) ^ 0xffffffffU);
      *(int *)(lVar4 + (ulonglong)uVar3 * 4) = (int)lVar2 * 7;
      uVar3 = uVar3 + 1;
      uVar1 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
      uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      lVar2 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
      uVar1 = (uint)lVar2;
      if ((1 - (uVar1 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) =
           *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
    }
  }
  local_10[0] = *(uint *)(param_1 + 0xfd4);
  uVar1 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
  uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  lVar2 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
  uVar1 = (uint)lVar2;
  if ((1 - (uVar1 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) =
         *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
    while( true ) {
      *(uint *)(param_1 + 0xf9c) =
           (*(uint *)(param_1 + 0xf9c) & (7 << (ulonglong)(uVar3 * 3 & 0x1f) ^ 0xffffffffU) |
           4 << (ulonglong)(uVar3 * 3 & 0x1f)) &
           (1 << (ulonglong)(uVar3 + 0x18 & 0x1f) ^ 0xffffffffU);
      *(int *)(lVar4 + (ulonglong)uVar3 * 4) = (int)lVar2 * 7;
      uVar3 = uVar3 + 1;
      uVar1 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
      uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      lVar2 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
      uVar1 = (uint)lVar2;
      if ((1 - (uVar1 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) =
           *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
    }
  }
  *(undefined1 *)(param_1 + 0xf6c5) = 0;
  *(uint *)(param_1 + 4000) =
       (1 << (ulonglong)(uVar3 * 3 & 0x1f)) - 1U | *(uint *)(param_1 + 4000) & 0xc0000000;
  *(byte *)(param_1 + 0xf691) = uVar3 != 0 | *(byte *)(param_1 + 0xf691);
  return;
}

