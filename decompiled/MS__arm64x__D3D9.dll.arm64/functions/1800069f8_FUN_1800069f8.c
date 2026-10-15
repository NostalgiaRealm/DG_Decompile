/*
 * FUN_1800069f8 at 1800069f8
 * undefined FUN_1800069f8(void)
 * Address ranges: 1800069f8-180006a97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800069f8(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  uint local_10 [4];
  
  uVar1 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  local_10[0] = param_2;
  lVar2 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
  uVar1 = (uint)lVar2;
  if ((1 - (uVar1 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) =
         *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
    while( true ) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x66c8 + lVar2 * 8) + 0x8a) = 0;
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
  if ((param_3 & 1) != 0) {
    *(undefined1 *)(*(longlong *)(&DAT_000066c0 + param_1) + 0x72) = 0;
  }
  return;
}

