/*
 * FUN_180074818 at 180074818
 * undefined FUN_180074818(void)
 * Address ranges: 180074818-180074a4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180074818(longlong *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint local_70 [4];
  byte local_60 [32];
  
  puVar10 = *(uint **)(param_3 + 0x1b0);
  local_60[8] = 0;
  local_60[9] = 0;
  local_60[10] = 0;
  local_60[0xb] = 0;
  local_60[0xc] = 0;
  local_60[0xd] = 0;
  local_60[0xe] = 0;
  local_60[0xf] = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 0;
  local_60[7] = 0;
  uVar9 = 0;
  local_60[0x10] = 0;
  local_60[0x11] = 0;
  local_60[0x12] = 0;
  local_60[0x13] = 0;
  local_60[0x14] = 0;
  local_60[0x15] = 0;
  local_60[0x16] = 0;
  local_60[0x17] = 0;
  uVar2 = *puVar10;
  uVar3 = puVar10[5];
  uVar4 = puVar10[8];
  uVar7 = puVar10[3];
  uVar1 = puVar10[4];
  do {
    uVar11 = (uVar4 & uVar7) >> (ulonglong)(uVar9 * 3 & 0x1f) & 7;
    if (uVar11 == 1) {
      uVar11 = 9;
    }
    else if (uVar11 == 2) {
      uVar11 = 8;
    }
    else if (uVar11 == 3) {
      uVar11 = 0xb;
    }
    else if (uVar11 == 4) {
      uVar11 = 10;
    }
    else {
      uVar11 = (uVar3 & uVar1 & uVar2) >> (ulonglong)(uVar9 * 3 & 0x1f) & 7;
    }
    uVar6 = uVar9 & 0x1f;
    uVar9 = uVar9 + 1;
    local_60[uVar11] = local_60[uVar11] | (byte)(1 << (ulonglong)uVar6);
    local_60[(ulonglong)uVar11 + 0xc] = local_60[(ulonglong)uVar11 + 0xc] + 1;
  } while (uVar9 < 8);
  uVar9 = 0xc;
  do {
    uVar1 = uVar9 - 1;
    local_70[0] = (uint)local_60[uVar1];
    uVar7 = (local_70[0] & 0xaaaaaaaa) >> 1 | (local_70[0] & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    lVar8 = LZCOUNT((uVar7 >> 4 | (uVar7 & 0xf0f0f0f) << 4) << 0x18);
    uVar7 = (uint)lVar8;
    if ((1 - (uVar7 >> 5) & 0xff) != 0) {
      *(byte *)((longlong)local_70 + (longlong)((int)uVar7 >> 3)) =
           *(byte *)((longlong)local_70 + (longlong)((int)uVar7 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
      bVar5 = local_60[(ulonglong)uVar1 + 0xc];
      while( true ) {
        FUN_180073e70(param_1,param_2,param_3,lVar8,1 < bVar5);
        uVar7 = (local_70[0] & 0xaaaaaaaa) >> 1 | (local_70[0] & 0x55555555) << 1;
        uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        lVar8 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
        uVar7 = (uint)lVar8;
        if ((1 - (uVar7 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_70 + (longlong)((int)uVar7 >> 3)) =
             *(byte *)((longlong)local_70 + (longlong)((int)uVar7 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
      }
    }
    if (((*(uint *)(param_3 + 0x194) & 0x3f00) == 0) &&
       (*(uint *)(param_3 + 0x194) != *(uint *)(param_3 + 0x19c))) {
      FUN_1800f4370(param_3 + 0x20);
    }
    *(undefined4 *)(param_3 + 0x194) = 0;
    (**(code **)(*param_1 + 8))(param_1,param_3,*(undefined4 *)(param_3 + 0x19c));
    *(undefined4 *)(param_3 + 0x19c) = 0;
    if (uVar9 == 10) {
      FUN_1800f4370(param_3 + 0x20,*(undefined4 *)(param_3 + 0x168));
      *(undefined4 *)(param_3 + 0x168) = 0;
    }
    else if (uVar9 == 0xb) {
      FUN_1800f4370(param_3 + 0x20,*(undefined4 *)(param_3 + 0x170));
      *(undefined4 *)(param_3 + 0x170) = 0;
    }
    else if (uVar9 == 0xc) {
      FUN_1800f4370(param_3 + 0x20,*(undefined4 *)(param_3 + 0x16c));
      *(undefined4 *)(param_3 + 0x16c) = 0;
    }
    uVar9 = uVar1;
  } while (uVar1 != 0);
  return;
}

