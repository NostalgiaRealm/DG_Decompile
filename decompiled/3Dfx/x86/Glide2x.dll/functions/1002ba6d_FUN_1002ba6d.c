/*
 * FUN_1002ba6d at 1002ba6d
 * undefined __fastcall FUN_1002ba6d(int * param_1, int param_2)
 * Address ranges: 1002ba6d-1002be01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1002bce8) */
/* WARNING: Removing unreachable block (ram,0x1002bbf7) */
/* WARNING: Removing unreachable block (ram,0x1002bbad) */
/* WARNING: Removing unreachable block (ram,0x1002bbcf) */
/* WARNING: Removing unreachable block (ram,0x1002bcad) */

void __fastcall FUN_1002ba6d(int *param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_24;
  uint local_20;
  uint local_18;
  undefined *local_14;
  uint *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_18 = 0xffffffff;
  local_10 = (uint *)0x0;
  local_c = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  local_14 = (undefined *)0x0;
  if ((param_2 == 9) || (param_2 == 10)) {
    local_10 = (uint *)&DAT_10058978;
    local_c = (undefined4 *)&DAT_10058a78;
    local_8 = (undefined4 *)&DAT_10058b78;
    local_14 = &DAT_10058678;
  }
  else if ((param_2 == 0xb) || (param_2 == 0xc)) {
    local_10 = (uint *)&DAT_10058988;
    local_c = (undefined4 *)&DAT_10058a88;
    local_8 = (undefined4 *)&DAT_10058b88;
    local_14 = &DAT_10058688;
  }
  else if ((param_2 == 0xd) || (param_2 == 0xe)) {
    local_10 = &DAT_10058998;
    local_c = &DAT_10058a98;
    local_8 = &DAT_10058b98;
    local_14 = &DAT_10058698;
  }
  uVar4 = 0;
  local_24 = 0;
  uVar3 = 0;
  switch(param_2) {
  default:
    FUN_100501d1(param_1,0,0x1000);
    break;
  case 1:
    do {
      param_1[uVar4 * 4 + 2] = 0;
      param_1[uVar4 * 4 + 1] = 0;
      param_1[uVar4 * 4] = 0;
      fVar2 = (float)(int)uVar4;
      if ((int)uVar4 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      uVar3 = uVar4 + 1;
      param_1[uVar4 * 4 + 3] = (int)fVar2;
      uVar4 = uVar3;
    } while (uVar3 < 0x100);
    break;
  case 2:
  case 3:
  case 4:
    do {
      uVar3 = uVar4 + 1;
      param_1[uVar4 * 4 + 2] = 0;
      param_1[uVar4 * 4 + 1] = 0;
      param_1[uVar4 * 4] = 0;
      param_1[uVar4 * 4 + 3] = 0x437f0000;
      uVar4 = uVar3;
    } while (uVar3 < 0x100);
    break;
  case 5:
    uVar4 = 0;
    do {
      param_1[uVar4 * 4] = (int)(float)((uVar4 >> 3 & 0x18 | uVar4 & 0xe0) >> 3 | uVar4 & 0xe0);
      uVar3 = uVar4 & 3;
      param_1[uVar4 * 4 + 1] = (int)(float)((uVar4 & 0x1c) << 3 | uVar4 >> 3 & 3 | uVar4 & 0x1c);
      param_1[uVar4 * 4 + 2] = (int)(float)(((uVar3 << 2 | uVar3) << 2 | uVar3) << 2 | uVar3);
      uVar3 = uVar4 + 1;
      param_1[uVar4 * 4 + 3] = 0x437f0000;
      uVar4 = uVar3;
    } while (uVar3 < 0x100);
    break;
  case 6:
    do {
      fVar2 = (float)(int)uVar4;
      if ((int)uVar4 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      uVar3 = uVar4 + 1;
      param_1[uVar4 * 4 + 3] = (int)fVar2;
      param_1[uVar4 * 4 + 2] = (int)fVar2;
      param_1[uVar4 * 4 + 1] = (int)fVar2;
      param_1[uVar4 * 4] = (int)fVar2;
      uVar4 = uVar3;
    } while (uVar3 < 0x100);
    break;
  case 7:
    do {
      fVar2 = (float)(int)uVar4;
      if ((int)uVar4 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      uVar3 = uVar4 + 1;
      param_1[uVar4 * 4 + 2] = (int)fVar2;
      param_1[uVar4 * 4 + 1] = (int)fVar2;
      param_1[uVar4 * 4] = (int)fVar2;
      param_1[uVar4 * 4 + 3] = 0x437f0000;
      uVar4 = uVar3;
    } while (uVar3 < 0x100);
    break;
  case 8:
    do {
      fVar2 = (float)((uVar3 & 0xf) << 4 | uVar3 & 0xf);
      param_1[uVar3 * 4 + 2] = (int)fVar2;
      param_1[uVar3 * 4 + 1] = (int)fVar2;
      param_1[uVar3 * 4] = (int)fVar2;
      uVar4 = uVar3 + 1;
      param_1[uVar3 * 4 + 3] = (int)(float)(uVar3 >> 4 & 0xf | uVar3 & 0xf0);
      uVar3 = uVar4;
    } while (uVar4 < 0x100);
    break;
  case 10:
    local_18 = 0;
  case 0xc:
  case 0xe:
    uVar4 = 8;
    local_24 = 8;
  case 9:
  case 0xb:
  case 0xd:
    local_20 = 0;
    do {
      uVar3 = local_10[1];
      uVar1 = local_10[2];
      uVar4 = local_20 << (sbyte)uVar4;
      uVar5 = (local_10[3] & (int)(short)uVar4 | *(uint *)(local_14 + 4)) & local_18;
      uVar6 = (*local_10 & uVar4) >> ((byte)*local_8 & 0x1f) |
              (*local_10 & uVar4) >> ((byte)*local_c & 0x1f);
      fVar2 = (float)(int)uVar6;
      if ((int)uVar6 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      param_1[local_20 * 4] = (int)fVar2;
      uVar3 = (uVar3 & uVar4) >> ((byte)local_8[1] & 0x1f) |
              (uVar3 & uVar4) >> ((byte)local_c[1] & 0x1f);
      fVar2 = (float)(int)uVar3;
      if ((int)uVar3 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      param_1[local_20 * 4 + 1] = (int)fVar2;
      uVar4 = (uVar1 & uVar4) >> ((byte)local_8[2] & 0x1f) |
              (uVar1 & uVar4) << ((byte)local_c[2] & 0x1f);
      fVar2 = (float)(int)uVar4;
      if ((int)uVar4 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      param_1[local_20 * 4 + 2] = (int)fVar2;
      uVar4 = uVar5 >> ((byte)local_8[3] & 0x1f) | uVar5 >> ((byte)local_c[3] & 0x1f);
      fVar2 = (float)(int)uVar4;
      if ((int)uVar4 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      param_1[local_20 * 4 + 3] = (int)fVar2;
      local_20 = local_20 + 1;
      uVar4 = local_24;
    } while (local_20 < 0x100);
  }
  return;
}

