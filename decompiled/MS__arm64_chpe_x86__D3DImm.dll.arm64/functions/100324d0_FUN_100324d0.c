/*
 * FUN_100324d0 at 100324d0
 * undefined FUN_100324d0(void)
 * Address ranges: 100324d0-10032563
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_100324d0(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = 0;
  uVar2 = (*(uint *)(param_1 + 0x444) & 0xaaaaaaaa) >> 1 |
          (*(uint *)(param_1 + 0x444) & 0x55555555) << 1;
  uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
  uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
  uVar3 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = 0;
  uVar3 = (uint)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  if (uVar3 != 0) {
    do {
      if (((*(byte *)(param_1 + 0x424 + uVar2) | 0x80) & *(byte *)(param_1 + 0x434 + uVar2)) != 0 ||
          ((*(byte *)(param_1 + 0x42c + uVar2) | 0x80) & *(byte *)(param_1 + 0x43c + uVar2)) != 0) {
        bVar1 = (&DAT_1009df30)[uVar2] | bVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return bVar1;
}

