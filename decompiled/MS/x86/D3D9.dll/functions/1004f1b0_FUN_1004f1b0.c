/*
 * FUN_1004f1b0 at 1004f1b0
 * undefined __fastcall FUN_1004f1b0(int param_1)
 * Address ranges: 1004f1b0-1004f268
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004f1b0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  iVar2 = 0;
  uVar5 = 0;
  do {
    local_8 = *(uint *)(param_1 + 0xfa8 + uVar5 * 4);
    uVar4 = 0;
    if (local_8 != 0) {
      for (; (local_8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    if (local_8 != 0) {
      pbVar1 = (byte *)((int)&local_8 + ((int)uVar4 >> 3));
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
      while( true ) {
        bVar3 = (char)iVar2 * '\x03';
        *(uint *)(param_1 + 0xf7c) =
             (~(7 << (bVar3 & 0x1f)) & *(uint *)(param_1 + 0xf7c) |
             (uVar5 + 1 & 7) << (bVar3 & 0x1f)) & ~(1 << (iVar2 + 0x18U & 0x1f));
        *(uint *)(param_1 + 0x7510 + iVar2 * 4) = (uVar4 & 0xff) * 7;
        iVar2 = iVar2 + 1;
        uVar4 = 0;
        if (local_8 != 0) {
          for (; (local_8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        if (local_8 == 0) break;
        pbVar1 = (byte *)((int)&local_8 + ((int)uVar4 >> 3));
        *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  *(undefined1 *)(param_1 + 0xf6a5) = 0;
  *(uint *)(param_1 + 0xf80) =
       (1 << ((char)iVar2 * '\x03' & 0x1fU)) - 1U | *(uint *)(param_1 + 0xf80) & 0xc0000000;
  *(byte *)(param_1 + 0xf671) = *(byte *)(param_1 + 0xf671) | iVar2 != 0;
  return;
}

