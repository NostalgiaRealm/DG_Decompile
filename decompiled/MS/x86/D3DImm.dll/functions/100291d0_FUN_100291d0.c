/*
 * FUN_100291d0 at 100291d0
 * undefined __fastcall FUN_100291d0(int param_1)
 * Address ranges: 100291d0-100292ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100291d0(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint local_8;
  
  iVar4 = 0;
  uVar5 = 0;
  do {
    local_8 = *(uint *)(param_1 + 0x490 + uVar5 * 4);
    uVar2 = 0;
    if (local_8 != 0) {
      for (; (local_8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    if (local_8 != 0) {
      pbVar1 = (byte *)((int)&local_8 + ((int)uVar2 >> 3));
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
      while( true ) {
        bVar3 = (char)iVar4 * '\x03';
        uVar2 = uVar2 & 0xff;
        *(uint *)(param_1 + 0x46c) =
             (uint)(7 < uVar2) << ((byte)(iVar4 + 0x18U) & 0x1f) |
             (~(7 << (bVar3 & 0x1f)) & *(uint *)(param_1 + 0x46c) |
             (uVar5 + 1 & 7) << (bVar3 & 0x1f)) & ~(1 << (iVar4 + 0x18U & 0x1f));
        *(uint *)(param_1 + 0x17f0 + iVar4 * 4) =
             (uVar2 - ((-(uint)(uVar2 < 8) & 0xfffffff8) + 8)) * 7;
        iVar4 = iVar4 + 1;
        uVar2 = 0;
        if (local_8 != 0) {
          for (; (local_8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        if (local_8 == 0) break;
        pbVar1 = (byte *)((int)&local_8 + ((int)uVar2 >> 3));
        *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  *(undefined1 *)(param_1 + 0x1d4a) = 0;
  *(uint *)(param_1 + 0x470) =
       (1 << ((char)iVar4 * '\x03' & 0x1fU)) - 1U | *(uint *)(param_1 + 0x470) & 0xc0000000;
  *(byte *)(param_1 + 0x1d41) = *(byte *)(param_1 + 0x1d41) | iVar4 != 0;
  return;
}

