/*
 * FUN_10025630 at 10025630
 * undefined FUN_10025630(void)
 * Address ranges: 10025630-100256eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10025630(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  byte local_10 [16];
  
  iVar4 = 0;
  uVar1 = *(uint *)(param_1 + 0x328) & *(uint *)(param_1 + 0x324);
  uVar2 = (uVar1 & 0xaaaaaaaa) >> 1 | (uVar1 & 0x55555555) << 1;
  uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
  uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  lVar3 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
  uVar2 = (uint)lVar3;
  if ((1 - (uVar2 >> 5) & 0xff) != 0) {
    local_10[(int)uVar2 >> 3] =
         local_10[(int)uVar2 >> 3] & ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
    while( true ) {
      iVar4 = *(int *)(param_1 + 0x24c + (int)lVar3 * 0x10) + iVar4;
      uVar2 = (uVar1 & 0xaaaaaaaa) >> 1 | (uVar1 & 0x55555555) << 1;
      uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      lVar3 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
      uVar2 = (uint)lVar3;
      if ((1 - (uVar2 >> 5) & 0xff) == 0) break;
      local_10[(int)uVar2 >> 3] =
           local_10[(int)uVar2 >> 3] & ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
    }
  }
  return iVar4 << 2;
}

