/*
 * FUN_100c3618 at 100c3618
 * undefined __fastcall FUN_100c3618(uint * param_1, int * param_2, uint param_3, undefined4 param_4, int param_5)
 * Address ranges: 100c3618-100c3718
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100c3618(uint *param_1,int *param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 local_90 [32];
  int *local_10;
  uint local_c;
  uint local_8;
  
  local_10 = param_2;
  iVar5 = FUN_100c3e1b(*param_1);
  if (((iVar5 == 0x40) || (iVar5 == 0x41)) || (iVar5 == 0x50)) {
    local_8 = param_3;
    uVar6 = 0;
    bVar8 = param_3 == 0;
    if (!bVar8) {
      for (; (param_3 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    while (!bVar8) {
      pbVar3 = (byte *)((int)&local_8 + ((int)uVar6 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar6 & 7));
      FUN_100c417a(param_2);
      uVar6 = 0;
      bVar8 = local_8 == 0;
      if (!bVar8) {
        for (; (local_8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
    }
  }
  else if (iVar5 == 0x51) {
    puVar7 = local_90;
    for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
    local_8 = param_3;
    uVar6 = 0;
    bVar8 = param_3 != 0;
    if (bVar8) {
      for (; (param_3 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    local_c = 0;
    piVar4 = local_10;
    while (local_10 = piVar4, bVar8) {
      pbVar3 = (byte *)((int)&local_8 + ((int)uVar6 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar6 & 7));
      uVar1 = *(uint *)(param_5 + (uVar6 & 0xff) * 8);
      uVar2 = *(undefined4 *)(param_5 + 4 + (uVar6 & 0xff) * 8);
      pbVar3 = (byte *)((int)&local_c + ((int)uVar1 >> 3));
      *pbVar3 = *pbVar3 | '\x01' << (uVar1 & 7);
      local_90[uVar1] = uVar2;
      uVar6 = 0;
      bVar8 = local_8 != 0;
      piVar4 = local_10;
      if (bVar8) {
        for (; (local_8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
    }
    uVar6 = 0;
    bVar8 = local_c != 0;
    if (bVar8) {
      for (; (local_c >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    local_8 = local_c;
    while (bVar8) {
      pbVar3 = (byte *)((int)&local_8 + ((int)uVar6 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar6 & 7));
      FUN_100c41e5(piVar4);
      uVar6 = 0;
      bVar8 = local_8 != 0;
      if (bVar8) {
        for (; (local_8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
    }
  }
  return;
}

