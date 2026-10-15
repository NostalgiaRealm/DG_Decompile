/*
 * FUN_18005acb0 at 18005acb0
 * undefined __fastcall FUN_18005acb0(longlong param_1)
 * Address ranges: 18005acb0-18005aee9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005acb0(longlong param_1)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  ulonglong uVar4;
  uint uVar5;
  uint local_res8 [2];
  
  local_res8[0] = *(uint *)(param_1 + 0xfc8);
  uVar4 = 0;
  uVar1 = 0;
  if (local_res8[0] != 0) {
    for (; (local_res8[0] >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  if (local_res8[0] != 0) {
    pbVar3 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar1 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar1 & 7));
    uVar5 = 1;
    while( true ) {
      bVar2 = (char)uVar4 * '\x03';
      *(uint *)(param_1 + 0xf9c) =
           ~(uVar5 << 0x18 | uVar5 >> 8) &
           (~(7 << (bVar2 & 0x1f)) & *(uint *)(param_1 + 0xf9c) | 1 << (bVar2 & 0x1f));
      *(uint *)(param_1 + 30000 + uVar4 * 4) = (uVar1 & 0xff) * 7;
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar1 = 0;
      if (local_res8[0] != 0) {
        for (; (local_res8[0] >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      if (local_res8[0] == 0) break;
      pbVar3 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar1 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar1 & 7));
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    }
  }
  local_res8[0] = *(uint *)(param_1 + 0xfcc);
  uVar1 = 0;
  if (local_res8[0] != 0) {
    for (; (local_res8[0] >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  if (local_res8[0] != 0) {
    pbVar3 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar1 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar1 & 7));
    bVar2 = (byte)uVar4 & 0x1f;
    uVar5 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    while( true ) {
      bVar2 = (char)uVar4 * '\x03';
      *(uint *)(param_1 + 0xf9c) =
           ~(uVar5 << 0x18 | uVar5 >> 8) &
           (~(7 << (bVar2 & 0x1f)) & *(uint *)(param_1 + 0xf9c) | 2 << (bVar2 & 0x1f));
      *(uint *)(param_1 + 30000 + uVar4 * 4) = (uVar1 & 0xff) * 7;
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar1 = 0;
      if (local_res8[0] != 0) {
        for (; (local_res8[0] >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      if (local_res8[0] == 0) break;
      pbVar3 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar1 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar1 & 7));
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    }
  }
  local_res8[0] = *(uint *)(param_1 + 0xfd0);
  uVar1 = 0;
  if (local_res8[0] != 0) {
    for (; (local_res8[0] >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  if (local_res8[0] != 0) {
    pbVar3 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar1 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar1 & 7));
    bVar2 = (byte)uVar4 & 0x1f;
    uVar5 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    while( true ) {
      bVar2 = (char)uVar4 * '\x03';
      *(uint *)(param_1 + 0xf9c) =
           ~(uVar5 << 0x18 | uVar5 >> 8) &
           (~(7 << (bVar2 & 0x1f)) & *(uint *)(param_1 + 0xf9c) | 3 << (bVar2 & 0x1f));
      *(uint *)(param_1 + 30000 + uVar4 * 4) = (uVar1 & 0xff) * 7;
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar1 = 0;
      if (local_res8[0] != 0) {
        for (; (local_res8[0] >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      if (local_res8[0] == 0) break;
      pbVar3 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar1 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar1 & 7));
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    }
  }
  local_res8[0] = *(uint *)(param_1 + 0xfd4);
  uVar1 = 0;
  if (local_res8[0] != 0) {
    for (; (local_res8[0] >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  if (local_res8[0] != 0) {
    pbVar3 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar1 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar1 & 7));
    bVar2 = (byte)uVar4 & 0x1f;
    uVar5 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    while( true ) {
      bVar2 = (char)uVar4 * '\x03';
      *(uint *)(param_1 + 0xf9c) =
           ~(uVar5 << 0x18 | uVar5 >> 8) &
           (~(7 << (bVar2 & 0x1f)) & *(uint *)(param_1 + 0xf9c) | 4 << (bVar2 & 0x1f));
      *(uint *)(param_1 + 30000 + uVar4 * 4) = (uVar1 & 0xff) * 7;
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar1 = 0;
      if (local_res8[0] != 0) {
        for (; (local_res8[0] >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      if (local_res8[0] == 0) break;
      pbVar3 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar1 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar1 & 7));
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    }
  }
  *(uint *)(param_1 + 4000) = *(uint *)(param_1 + 4000) & 0xc0000000;
  *(undefined1 *)(param_1 + 0xf6c5) = 0;
  *(uint *)(param_1 + 4000) = *(uint *)(param_1 + 4000) | (1 << ((char)uVar4 * '\x03' & 0x1fU)) - 1U
  ;
  *(byte *)(param_1 + 0xf691) = *(byte *)(param_1 + 0xf691) | (int)uVar4 != 0;
  return;
}

