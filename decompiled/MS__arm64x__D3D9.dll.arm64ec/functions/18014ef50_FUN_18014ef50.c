/*
 * FUN_18014ef50 at 18014ef50
 * undefined FUN_18014ef50(void)
 * Address ranges: 18014ef50-18014ef7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18014ef50(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint local_30 [4];
  
  local_30[0] = *(uint *)(param_2 + 0x10);
  uVar1 = (local_30[0] & 0xaaaaaaaa) >> 1 | (local_30[0] & 0x55555555) << 1;
  uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  lVar2 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
  uVar1 = (uint)lVar2;
  if ((1 - (uVar1 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_30 + (longlong)((int)uVar1 >> 3)) =
         *(byte *)((longlong)local_30 + (longlong)((int)uVar1 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
    while( true ) {
      lVar2 = *(longlong *)(param_1 + 0xff38 + lVar2 * 8);
      if (lVar2 != 0) {
        FUN_1801042e0(lVar2 + 0x38);
      }
      uVar1 = (local_30[0] & 0xaaaaaaaa) >> 1 | (local_30[0] & 0x55555555) << 1;
      uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      lVar2 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
      uVar1 = (uint)lVar2;
      if ((1 - (uVar1 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_30 + (longlong)((int)uVar1 >> 3)) =
           *(byte *)((longlong)local_30 + (longlong)((int)uVar1 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
    }
  }
  return;
}

