/*
 * FUN_180081b8c at 180081b8c
 * undefined __fastcall FUN_180081b8c(longlong * param_1, longlong * param_2, longlong param_3)
 * Address ranges: 180081b8c-180081d70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180081b8c(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_res20 [2];
  byte local_48 [32];
  
  local_48[0x10] = 0;
  local_48[0x11] = 0;
  local_48[0x12] = 0;
  local_48[0x13] = 0;
  local_48[0x14] = 0;
  local_48[0x15] = 0;
  local_48[0x16] = 0;
  local_48[0x17] = 0;
  uVar11 = 0;
  puVar6 = *(uint **)(param_3 + 0x1b0);
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  local_48[0xe] = 0;
  local_48[0xf] = 0;
  uVar10 = puVar6[8];
  uVar3 = puVar6[3];
  uVar12 = *puVar6;
  uVar4 = puVar6[4];
  uVar5 = puVar6[5];
  do {
    bVar2 = (char)uVar11 * '\x03';
    uVar8 = (uVar10 & uVar3) >> (bVar2 & 0x1f) & 7;
    if (uVar8 == 1) {
      uVar8 = 9;
    }
    else if (uVar8 == 2) {
      uVar8 = 8;
    }
    else if (uVar8 == 3) {
      uVar8 = 0xb;
    }
    else if (uVar8 == 4) {
      uVar8 = 10;
    }
    else {
      uVar8 = (uVar5 & uVar4 & uVar12) >> (bVar2 & 0x1f) & 7;
    }
    uVar9 = (ulonglong)uVar8;
    uVar8 = uVar11 & 0x1f;
    uVar11 = uVar11 + 1;
    local_48[uVar9] = local_48[uVar9] | (byte)(1 << uVar8);
    local_48[uVar9 + 0xc] = local_48[uVar9 + 0xc] + 1;
  } while (uVar11 < 8);
  lVar1 = param_3 + 0x20;
  uVar10 = 0xc;
  do {
    uVar12 = uVar10 - 1;
    bVar2 = local_48[uVar12];
    uVar3 = 0;
    if (bVar2 != 0) {
      for (; (bVar2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    local_res20[0] = (uint)bVar2;
    if (bVar2 != 0) {
      pbVar7 = (byte *)((longlong)local_res20 + ((longlong)(int)uVar3 >> 3));
      *pbVar7 = *pbVar7 & ~('\x01' << (uVar3 & 7));
      bVar2 = local_48[(ulonglong)uVar12 + 0xc];
      while( true ) {
        FUN_180080e74(param_1,param_2,param_3,uVar3 & 0xff,1 < bVar2);
        uVar3 = 0;
        if (local_res20[0] != 0) {
          for (; (local_res20[0] >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        if (local_res20[0] == 0) break;
        pbVar7 = (byte *)((longlong)local_res20 + ((longlong)(int)uVar3 >> 3));
        *pbVar7 = *pbVar7 & ~('\x01' << (uVar3 & 7));
      }
    }
    uVar3 = *(uint *)(param_3 + 0x194);
    if (((uVar3 & 0x3f00) == 0) && (uVar3 != *(uint *)(param_3 + 0x19c))) {
      FUN_1800ec960(lVar1,uVar3);
    }
    *(undefined4 *)(param_3 + 0x194) = 0;
    (**(code **)(*param_1 + 8))(param_1,param_3,*(undefined4 *)(param_3 + 0x19c));
    *(undefined4 *)(param_3 + 0x19c) = 0;
    if (uVar10 == 10) {
      FUN_1800ec960(lVar1,*(uint *)(param_3 + 0x168));
      *(undefined4 *)(param_3 + 0x168) = 0;
    }
    else if (uVar10 == 0xb) {
      FUN_1800ec960(lVar1,*(uint *)(param_3 + 0x170));
      *(undefined4 *)(param_3 + 0x170) = 0;
    }
    else if (uVar10 == 0xc) {
      FUN_1800ec960(lVar1,*(uint *)(param_3 + 0x16c));
      *(undefined4 *)(param_3 + 0x16c) = 0;
    }
    uVar10 = uVar12;
  } while (uVar12 != 0);
  return;
}

