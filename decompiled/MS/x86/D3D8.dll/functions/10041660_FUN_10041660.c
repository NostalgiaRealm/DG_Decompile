/*
 * FUN_10041660 at 10041660
 * byte __fastcall FUN_10041660(int param_1)
 * Address ranges: 10041660-100416b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_10041660(int param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = 0;
  uVar2 = 0;
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x638) != 0) {
    for (; (*(uint *)(param_1 + 0x638) >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  if (uVar1 != 0) {
    do {
      if (((*(byte *)(param_1 + 0x620 + uVar2) | 0x80) & *(byte *)(param_1 + 0x630 + uVar2)) != 0 ||
          ((*(byte *)(param_1 + 0x618 + uVar2) | 0x80) & *(byte *)(param_1 + 0x628 + uVar2)) != 0) {
        bVar3 = bVar3 | (&DAT_100b2474)[uVar2];
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return bVar3;
}

