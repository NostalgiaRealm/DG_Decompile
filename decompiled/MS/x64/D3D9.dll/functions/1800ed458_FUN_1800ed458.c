/*
 * FUN_1800ed458 at 1800ed458
 * undefined __fastcall FUN_1800ed458(int * param_1, longlong * param_2, uint param_3, longlong param_4, longlong param_5)
 * Address ranges: 1800ed458-1800ed5c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ed458(int *param_1,longlong *param_2,uint param_3,longlong param_4,longlong param_5)

{
  uint uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  bool bVar9;
  uint local_res8 [2];
  uint local_a8 [4];
  undefined4 local_98 [32];
  
  uVar6 = FUN_1800ee040(*param_1);
  iVar4 = (int)uVar6;
  if (((iVar4 == 0x40) || (iVar4 == 0x41)) || (iVar4 == 0x50)) {
    uVar5 = 0;
    bVar9 = param_3 != 0;
    if (bVar9) {
      for (; (param_3 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    local_res8[0] = param_3;
    while (bVar9) {
      pbVar3 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar5 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar5 & 7));
      FUN_1800eddec(param_2,4,
                    (ulonglong)
                    ((*(uint *)(param_4 + 0x14 +
                               (ulonglong)*(uint *)(param_5 + (ulonglong)(uVar5 & 0xff) * 8) * 0x18)
                     & 0x1f) << 0xb | 0x4000058),0x107000);
      uVar5 = 0;
      bVar9 = local_res8[0] != 0;
      if (bVar9) {
        for (; (local_res8[0] >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
    }
  }
  else if (iVar4 == 0x51) {
    local_res8[0] = param_3;
    local_a8[0] = 0;
    puVar8 = local_98;
    for (lVar7 = 0x20; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    uVar5 = 0;
    bVar9 = param_3 != 0;
    if (bVar9) {
      for (; (param_3 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    while (bVar9) {
      pbVar3 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar5 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar5 & 7));
      uVar1 = *(uint *)(param_5 + (ulonglong)(uVar5 & 0xff) * 8);
      uVar2 = *(undefined4 *)(param_5 + 4 + (ulonglong)(uVar5 & 0xff) * 8);
      pbVar3 = (byte *)((longlong)local_a8 + ((longlong)(int)uVar1 >> 3));
      *pbVar3 = *pbVar3 | '\x01' << (uVar1 & 7);
      local_98[uVar1] = uVar2;
      uVar5 = 0;
      bVar9 = local_res8[0] != 0;
      if (bVar9) {
        for (; (local_res8[0] >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
    }
    local_res8[0] = local_a8[0];
    uVar5 = 0;
    bVar9 = local_a8[0] == 0;
    if (!bVar9) {
      for (; (local_a8[0] >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    while (!bVar9) {
      pbVar3 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar5 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar5 & 7));
      FUN_1800ee25c(param_2);
      uVar5 = 0;
      bVar9 = local_res8[0] == 0;
      if (!bVar9) {
        for (; (local_res8[0] >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
    }
  }
  return;
}

