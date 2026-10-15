/*
 * FUN_10074bd0 at 10074bd0
 * undefined FUN_10074bd0(void)
 * Address ranges: 10074bd0-10074c63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10074bd0(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = 0;
  uVar2 = (*(uint *)(param_1 + 0xf50) & 0xaaaaaaaa) >> 1 |
          (*(uint *)(param_1 + 0xf50) & 0x55555555) << 1;
  uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
  uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
  uVar3 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = 0;
  uVar3 = (uint)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  if (uVar3 != 0) {
    do {
      if (((*(byte *)(param_1 + 0xf30 + uVar2) | 0x80) & *(byte *)(param_1 + 0xf40 + uVar2)) != 0 ||
          ((*(byte *)(param_1 + 0xf38 + uVar2) | 0x80) & *(byte *)(param_1 + 0xf48 + uVar2)) != 0) {
        bVar1 = (&DAT_10161e88)[uVar2] | bVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return bVar1;
}

