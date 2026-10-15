/*
 * FUN_1003701f at 1003701f
 * undefined4 __fastcall FUN_1003701f(int param_1)
 * Address ranges: 1003701f-1003707f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1003701f(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  uint local_8;
  
  uVar3 = 0xffff0000;
  uVar4 = 0;
  local_8 = *(uint *)(*(int *)(param_1 + 4) + 0x1214) & 0xffff;
  uVar2 = 0;
  bVar5 = local_8 == 0;
  if (!bVar5) {
    for (; (local_8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  while (!bVar5) {
    pbVar1 = (byte *)((int)&local_8 + ((int)uVar2 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
    lVar6 = __allshl((char)uVar2 * '\x03',0);
    uVar2 = (uint)((ulonglong)lVar6 >> 0x20) | uVar3;
    uVar4 = (uint)lVar6 | uVar4;
    uVar3 = (uVar3 ^ uVar2) & 0xffff0000 ^ uVar2;
    uVar2 = 0;
    bVar5 = local_8 == 0;
    if (!bVar5) {
      for (; (local_8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
  }
  *(uint *)(param_1 + 0x10) = uVar4;
  *(uint *)(param_1 + 0x14) = uVar3;
  return CONCAT31((int3)(uVar2 >> 8),1);
}

