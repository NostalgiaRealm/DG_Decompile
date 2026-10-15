/*
 * FUN_180009770 at 180009770
 * undefined4 * __fastcall FUN_180009770(longlong param_1, undefined4 * param_2, longlong param_3)
 * Address ranges: 180009770-1800097ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_180009770(longlong param_1,undefined4 *param_2,longlong param_3)

{
  uint uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_res8 [2];
  
  if (param_3 == 0) {
    param_3 = *(longlong *)(param_1 + 0x260);
  }
  local_res8[0] = *(uint *)(param_1 + 0x15c) & *(uint *)(param_1 + 0x158);
  uVar1 = 0;
  if (local_res8[0] != 0) {
    for (; (local_res8[0] >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  if (local_res8[0] != 0) {
    pbVar2 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar1 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
    while( true ) {
      uVar3 = (ulonglong)(uVar1 & 0xff);
      puVar5 = param_2;
      puVar6 = (undefined4 *)(param_3 + (ulonglong)*(uint *)(param_1 + 0xc + uVar3 * 0x18) * 4);
      for (uVar4 = (ulonglong)*(uint *)(param_1 + 0x10 + uVar3 * 0x18); uVar4 != 0;
          uVar4 = uVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      param_2 = param_2 + *(uint *)(param_1 + 0x10 + uVar3 * 0x18);
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
  return param_2;
}

