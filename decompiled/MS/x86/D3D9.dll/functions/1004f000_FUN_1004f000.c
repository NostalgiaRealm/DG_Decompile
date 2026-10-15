/*
 * FUN_1004f000 at 1004f000
 * byte __fastcall FUN_1004f000(int param_1)
 * Address ranges: 1004f000-1004f058
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_1004f000(int param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = 0;
  uVar2 = 0;
  uVar1 = 0;
  if (*(uint *)(param_1 + 0xf50) != 0) {
    for (; (*(uint *)(param_1 + 0xf50) >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  if (uVar1 != 0) {
    do {
      if (((*(byte *)(param_1 + 0xf38 + uVar2) | 0x80) & *(byte *)(param_1 + 0xf48 + uVar2)) != 0 ||
          ((*(byte *)(param_1 + 0xf30 + uVar2) | 0x80) & *(byte *)(param_1 + 0xf40 + uVar2)) != 0) {
        bVar3 = bVar3 | (&DAT_100d5a54)[uVar2];
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return bVar3;
}

