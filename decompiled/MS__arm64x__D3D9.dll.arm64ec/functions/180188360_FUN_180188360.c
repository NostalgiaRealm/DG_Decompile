/*
 * FUN_180188360 at 180188360
 * undefined FUN_180188360(void)
 * Address ranges: 180188360-1801885bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180188360(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  code *extraout_x11;
  uint uVar11;
  uint local_70;
  uint local_6c;
  code *local_68;
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
  uVar1 = *puVar10;
  uVar2 = puVar10[5];
  uVar3 = puVar10[8];
  uVar6 = puVar10[3];
  uVar11 = puVar10[4];
  do {
    uVar8 = (uVar3 & uVar6) >> (ulonglong)(uVar9 * 3 & 0x1f) & 7;
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
      uVar8 = (uVar2 & uVar11 & uVar1) >> (ulonglong)(uVar9 * 3 & 0x1f) & 7;
    }
    uVar5 = uVar9 & 0x1f;
    uVar9 = uVar9 + 1;
    local_60[uVar8] = local_60[uVar8] | (byte)(1 << (ulonglong)uVar5);
    local_60[(ulonglong)uVar8 + 0xc] = local_60[(ulonglong)uVar8 + 0xc] + 1;
  } while (uVar9 < 8);
  local_68 = (code *)__hybrid_os_arm64x_dispatch_icall;
  uVar9 = 0xc;
  do {
    uVar11 = uVar9 - 1;
    local_70 = (uint)local_60[uVar11];
    uVar6 = (local_70 & 0xaaaaaaaa) >> 1 | (local_70 & 0x55555555) << 1;
    uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
    lVar7 = LZCOUNT((uVar6 >> 4 | (uVar6 & 0xf0f0f0f) << 4) << 0x18);
    uVar6 = (uint)lVar7;
    if ((1 - (uVar6 >> 5) & 0xff) != 0) {
      local_6c = uVar11;
      *(byte *)((longlong)&local_70 + (longlong)((int)uVar6 >> 3)) =
           *(byte *)((longlong)&local_70 + (longlong)((int)uVar6 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
      bVar4 = local_60[(ulonglong)uVar11 + 0xc];
      while( true ) {
        FUN_180187800(param_1,param_2,param_3,lVar7,1 < bVar4);
        uVar6 = (local_70 & 0xaaaaaaaa) >> 1 | (local_70 & 0x55555555) << 1;
        uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        lVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
        uVar6 = (uint)lVar7;
        uVar11 = local_6c;
        if ((1 - (uVar6 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)&local_70 + (longlong)((int)uVar6 >> 3)) =
             *(byte *)((longlong)&local_70 + (longlong)((int)uVar6 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
      }
    }
    if (((*(uint *)(param_3 + 0x194) & 0x3f00) == 0) &&
       (*(uint *)(param_3 + 0x194) != *(uint *)(param_3 + 0x19c))) {
      FUN_180213800(param_3 + 0x20);
    }
    *(undefined4 *)(param_3 + 0x194) = 0;
    (*local_68)();
    (*extraout_x11)(param_1,param_3,*(undefined4 *)(param_3 + 0x19c));
    *(undefined4 *)(param_3 + 0x19c) = 0;
    if (uVar9 == 10) {
      FUN_180213800(param_3 + 0x20,*(undefined4 *)(param_3 + 0x168));
      *(undefined4 *)(param_3 + 0x168) = 0;
    }
    else if (uVar9 == 0xb) {
      FUN_180213800(param_3 + 0x20,*(undefined4 *)(param_3 + 0x170));
      *(undefined4 *)(param_3 + 0x170) = 0;
    }
    else if (uVar9 == 0xc) {
      FUN_180213800(param_3 + 0x20,*(undefined4 *)(param_3 + 0x16c));
      *(undefined4 *)(param_3 + 0x16c) = 0;
    }
    uVar9 = uVar11;
  } while (uVar11 != 0);
  return;
}

