/*
 * FUN_10123210 at 10123210
 * undefined FUN_10123210(void)
 * Address ranges: 10123210-10123277
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10123210(byte param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = (uint)param_2;
  uVar3 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar5 = (uint)LZCOUNT((uVar3 >> 4 | (uVar3 & 0xf0f0f0f) << 4) << 0x18);
  uVar3 = 0;
  if ((1 - (uVar5 >> 5) & 0xff) != 0) {
    uVar4 = 0;
    do {
      uVar1 = uVar4 << 1;
      uVar2 = uVar1 & 0x1f;
      if ((1 << (ulonglong)(uVar4 & 0x1f) & uVar6) == 0) {
        uVar2 = (uVar5 & 0xf) << 1;
      }
      uVar4 = uVar4 + 1;
      uVar3 = (param_1 >> (ulonglong)uVar2 & 3) << (ulonglong)(uVar1 & 0x1f) & 0xff | uVar3;
    } while (uVar4 < 4);
  }
  return uVar3;
}

