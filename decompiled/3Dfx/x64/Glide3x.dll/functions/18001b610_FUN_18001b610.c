/*
 * FUN_18001b610 at 18001b610
 * int __fastcall FUN_18001b610(longlong param_1)
 * Address ranges: 18001b610-18001b65c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18001b610(longlong param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint local_res8 [8];
  
  iVar3 = 0;
  local_res8[0] = *(uint *)(param_1 + 0x474) & *(uint *)(param_1 + 0x470);
  uVar1 = 0;
  if (local_res8[0] != 0) {
    for (; (local_res8[0] >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  if (local_res8[0] != 0) {
    pbVar2 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar1 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
    while( true ) {
      iVar3 = iVar3 + *(int *)(param_1 + 0x328 + (ulonglong)(uVar1 & 0xff) * 0x18);
      uVar1 = 0;
      if (local_res8[0] != 0) {
        for (; (local_res8[0] >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      if (local_res8[0] == 0) break;
      pbVar2 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar1 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
    }
  }
  return iVar3 * 4;
}

