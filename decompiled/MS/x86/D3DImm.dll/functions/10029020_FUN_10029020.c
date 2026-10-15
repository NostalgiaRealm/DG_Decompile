/*
 * FUN_10029020 at 10029020
 * byte __fastcall FUN_10029020(int param_1)
 * Address ranges: 10029020-10029078
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_10029020(int param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = 0;
  uVar2 = 0;
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x444) != 0) {
    for (; (*(uint *)(param_1 + 0x444) >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  if (uVar1 != 0) {
    do {
      if (((*(byte *)(param_1 + 0x42c + uVar2) | 0x80) & *(byte *)(param_1 + 0x43c + uVar2)) != 0 ||
          ((*(byte *)(param_1 + 0x424 + uVar2) | 0x80) & *(byte *)(param_1 + 0x434 + uVar2)) != 0) {
        bVar3 = bVar3 | (&DAT_1005ede0)[uVar2];
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return bVar3;
}

