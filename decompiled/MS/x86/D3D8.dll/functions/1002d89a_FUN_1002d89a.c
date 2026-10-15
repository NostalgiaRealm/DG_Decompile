/*
 * FUN_1002d89a at 1002d89a
 * undefined4 __fastcall FUN_1002d89a(int param_1)
 * Address ranges: 1002d89a-1002d90e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1002d89a(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint local_8;
  
  uVar3 = 0xff000000;
  local_8 = *(uint *)(*(int *)(param_1 + 4) + 0xcc) & 0xff;
  uVar2 = 0;
  if (local_8 != 0) {
    for (; (local_8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  if (local_8 != 0) {
    uVar3 = 0xff000000;
    do {
      pbVar1 = (byte *)((int)&local_8 + ((int)uVar2 >> 3));
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
      lVar4 = __allshl((char)uVar2 * '\x03',0);
      uVar2 = (uint)lVar4 | uVar3;
      uVar3 = (uVar3 ^ uVar2) & 0xff000000 ^ uVar2;
      uVar2 = 0;
      if (local_8 != 0) {
        for (; (local_8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
    } while (local_8 != 0);
  }
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(uint *)(param_1 + 0x10) = uVar3;
  return CONCAT31((int3)(uVar2 >> 8),1);
}

