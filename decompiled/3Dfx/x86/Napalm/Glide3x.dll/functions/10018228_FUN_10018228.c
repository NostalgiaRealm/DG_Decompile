/*
 * FUN_10018228 at 10018228
 * int __fastcall FUN_10018228(int param_1)
 * Address ranges: 10018228-10018263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10018228(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  uint local_8;
  
  iVar3 = 0;
  local_8 = *(uint *)(param_1 + 0x328) & *(uint *)(param_1 + 0x324);
  uVar1 = 0;
  bVar4 = local_8 != 0;
  if (bVar4) {
    for (; (local_8 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar4) {
    pbVar2 = (byte *)((int)&local_8 + ((int)uVar1 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
    iVar3 = iVar3 + *(int *)((uVar1 & 0xff) * 0x10 + 0x24c + param_1);
    uVar1 = 0;
    bVar4 = local_8 != 0;
    if (bVar4) {
      for (; (local_8 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return iVar3 << 2;
}

