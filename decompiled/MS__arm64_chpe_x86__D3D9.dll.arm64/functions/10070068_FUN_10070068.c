/*
 * FUN_10070068 at 10070068
 * undefined FUN_10070068(void)
 * Address ranges: 10070068-1007012b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10070068(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  byte local_10 [16];
  
  uVar2 = 0xffff000000000000;
  uVar1 = FUN_1007fe48(param_1 + 0x40);
  uVar3 = (uVar1 & 0xaaaa) >> 1 | (uVar1 & 0x5555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  lVar4 = LZCOUNT((uVar3 >> 8 | (uVar3 & 0xff00ff) << 8) << 0x10);
  uVar3 = (uint)lVar4;
  if ((1 - (uVar3 >> 5) & 0xff) != 0) {
    local_10[(int)uVar3 >> 3] =
         local_10[(int)uVar3 >> 3] & ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    while( true ) {
      uVar2 = 7L << ((ulonglong)(uint)((int)lVar4 * 3) & 0x3f) | uVar2;
      uVar3 = (uVar1 & 0xaaaa) >> 1 | (uVar1 & 0x5555) << 1;
      uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
      lVar4 = LZCOUNT((uVar3 >> 8 | (uVar3 & 0xff00ff) << 8) << 0x10);
      uVar3 = (uint)lVar4;
      if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
      local_10[(int)uVar3 >> 3] =
           local_10[(int)uVar3 >> 3] & ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    }
  }
  *(ulonglong *)(param_1 + 8) = uVar2;
  return 1;
}

