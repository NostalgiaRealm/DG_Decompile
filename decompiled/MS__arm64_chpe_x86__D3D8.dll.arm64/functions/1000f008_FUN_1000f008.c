/*
 * FUN_1000f008 at 1000f008
 * undefined FUN_1000f008(void)
 * Address ranges: 1000f008-1000f0c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000f008(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  byte local_10 [16];
  
  uVar1 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  lVar2 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
  uVar1 = (uint)lVar2;
  if ((1 - (uVar1 >> 5) & 0xff) != 0) {
    local_10[(int)uVar1 >> 3] =
         local_10[(int)uVar1 >> 3] & ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
    while( true ) {
      *(undefined1 *)(*(int *)(param_1 + 0x57bc + (int)lVar2 * 4) + 0x62) = 0;
      uVar1 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
      uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      lVar2 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
      uVar1 = (uint)lVar2;
      if ((1 - (uVar1 >> 5) & 0xff) == 0) break;
      local_10[(int)uVar1 >> 3] =
           local_10[(int)uVar1 >> 3] & ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
    }
  }
  if ((param_3 & 1) != 0) {
    *(undefined1 *)(*(int *)(&DAT_000057b8 + param_1) + 0x4a) = 0;
  }
  return;
}

