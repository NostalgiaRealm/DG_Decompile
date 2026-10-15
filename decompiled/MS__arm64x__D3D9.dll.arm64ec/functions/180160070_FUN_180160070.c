/*
 * FUN_180160070 at 180160070
 * undefined FUN_180160070(void)
 * Address ranges: 180160070-180160123
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180160070(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint local_10 [4];
  
  uVar2 = 0xffff000000000000;
  uVar1 = FUN_18016ce48(param_1 + 0x50);
  local_10[0] = uVar1 & 0xffff;
  uVar1 = (uVar1 & 0xaaaa) >> 1 | (uVar1 & 0x5555) << 1;
  uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
  lVar3 = LZCOUNT((uVar1 >> 8 | (uVar1 & 0xff00ff) << 8) << 0x10);
  uVar1 = (uint)lVar3;
  if ((1 - (uVar1 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) =
         *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
    while( true ) {
      uVar2 = 7L << ((ulonglong)(uint)((int)lVar3 * 3) & 0x3f) | uVar2;
      uVar1 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
      uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      lVar3 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
      uVar1 = (uint)lVar3;
      if ((1 - (uVar1 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) =
           *(byte *)((longlong)local_10 + (longlong)((int)uVar1 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
    }
  }
  *(ulonglong *)(param_1 + 8) = uVar2;
  return 1;
}

