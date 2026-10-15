/*
 * FUN_100576cf at 100576cf
 * undefined __fastcall FUN_100576cf(uint * param_1, int * param_2, uint param_3, undefined4 param_4, int param_5)
 * Address ranges: 100576cf-100577d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100576cf(uint *param_1,int *param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 local_8c [32];
  uint local_c;
  uint local_8;
  
  iVar4 = FUN_10057dfe(*param_1);
  if (((iVar4 == 0x40) || (iVar4 == 0x41)) || (iVar4 == 0x50)) {
    local_8 = param_3;
    uVar5 = 0;
    bVar7 = param_3 == 0;
    if (!bVar7) {
      for (; (param_3 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    while (!bVar7) {
      pbVar3 = (byte *)((int)&local_8 + ((int)uVar5 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar5 & 7));
      FUN_10058143(param_2);
      uVar5 = 0;
      bVar7 = local_8 == 0;
      if (!bVar7) {
        for (; (local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
    }
  }
  else if (iVar4 == 0x51) {
    puVar6 = local_8c;
    for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    local_8 = param_3;
    uVar5 = 0;
    bVar7 = param_3 != 0;
    if (bVar7) {
      for (; (param_3 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    local_c = 0;
    while (bVar7) {
      pbVar3 = (byte *)((int)&local_8 + ((int)uVar5 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar5 & 7));
      uVar1 = *(uint *)(param_5 + (uVar5 & 0xff) * 8);
      uVar2 = *(undefined4 *)(param_5 + 4 + (uVar5 & 0xff) * 8);
      pbVar3 = (byte *)((int)&local_c + ((int)uVar1 >> 3));
      *pbVar3 = *pbVar3 | '\x01' << (uVar1 & 7);
      local_8c[uVar1] = uVar2;
      uVar5 = 0;
      bVar7 = local_8 != 0;
      if (bVar7) {
        for (; (local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
    }
    local_8 = local_c;
    uVar5 = 0;
    bVar7 = local_c == 0;
    if (!bVar7) {
      for (; (local_c >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    while (!bVar7) {
      pbVar3 = (byte *)((int)&local_8 + ((int)uVar5 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar5 & 7));
      FUN_100581ae(param_2);
      uVar5 = 0;
      bVar7 = local_8 == 0;
      if (!bVar7) {
        for (; (local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
    }
  }
  return;
}

