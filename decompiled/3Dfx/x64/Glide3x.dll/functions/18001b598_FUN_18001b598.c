/*
 * FUN_18001b598 at 18001b598
 * int __fastcall FUN_18001b598(longlong param_1, longlong param_2, undefined4 * param_3)
 * Address ranges: 18001b598-18001b60c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18001b598(longlong param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint local_res8 [2];
  
  iVar8 = 0;
  local_res8[0] = *(uint *)(param_1 + 0x474) & *(uint *)(param_1 + 0x470);
  uVar4 = 0;
  if (local_res8[0] != 0) {
    for (; (local_res8[0] >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  if (local_res8[0] != 0) {
    while( true ) {
      pbVar2 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar4 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar4 & 7));
      uVar3 = (ulonglong)(uVar4 & 0xff);
      puVar6 = (undefined4 *)(*(int *)(param_1 + 800 + uVar3 * 0x18) + param_2);
      puVar7 = param_3;
      for (uVar5 = (ulonglong)*(uint *)(param_1 + 0x328 + uVar3 * 0x18); uVar5 != 0;
          uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      uVar1 = *(uint *)(param_1 + 0x328 + uVar3 * 0x18);
      iVar8 = iVar8 + uVar1;
      uVar4 = 0;
      if (local_res8[0] != 0) {
        for (; (local_res8[0] >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      if (local_res8[0] == 0) break;
      param_3 = param_3 + uVar1;
    }
  }
  return iVar8;
}

