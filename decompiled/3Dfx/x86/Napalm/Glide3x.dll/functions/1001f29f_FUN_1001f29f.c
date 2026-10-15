/*
 * FUN_1001f29f at 1001f29f
 * undefined __fastcall FUN_1001f29f(int * param_1, int param_2)
 * Address ranges: 1001f29f-1001f695
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1001f51a) */
/* WARNING: Removing unreachable block (ram,0x1001f429) */
/* WARNING: Removing unreachable block (ram,0x1001f3df) */
/* WARNING: Removing unreachable block (ram,0x1001f401) */
/* WARNING: Removing unreachable block (ram,0x1001f4df) */

void __fastcall FUN_1001f29f(int *param_1,int param_2)

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
    local_10 = (uint *)&DAT_1005e9a8;
    local_c = (undefined4 *)&DAT_1005eaa8;
    local_8 = (undefined4 *)&DAT_1005eba8;
    local_14 = &DAT_1005e5e8;
  }
  else if ((param_2 == 0xb) || (param_2 == 0xc)) {
    local_10 = (uint *)&DAT_1005e9b8;
    local_c = (undefined4 *)&DAT_1005eab8;
    local_8 = (undefined4 *)&DAT_1005ebb8;
    local_14 = &DAT_1005e5f8;
  }
  else if ((param_2 == 0xd) || (param_2 == 0xe)) {
    local_10 = &DAT_1005e9c8;
    local_c = &DAT_1005eac8;
    local_8 = &DAT_1005ebc8;
    local_14 = &DAT_1005e608;
  }
  uVar3 = 0;
  local_24 = 0;
  uVar5 = 0;
  switch(param_2) {
  default:
    FUN_100561f1(param_1,0,0x1000);
    break;
  case 1:
    do {
      param_1[uVar3 * 4 + 2] = 0;
      param_1[uVar3 * 4 + 1] = 0;
      param_1[uVar3 * 4] = 0;
      fVar2 = (float)(int)uVar3;
      if ((int)uVar3 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      uVar5 = uVar3 + 1;
      param_1[uVar3 * 4 + 3] = (int)fVar2;
      uVar3 = uVar5;
    } while (uVar5 < 0x100);
    break;
  case 2:
  case 3:
  case 4:
    do {
      uVar5 = uVar3 + 1;
      param_1[uVar3 * 4 + 2] = 0;
      param_1[uVar3 * 4 + 1] = 0;
      param_1[uVar3 * 4] = 0;
      param_1[uVar3 * 4 + 3] = 0x437f0000;
      uVar3 = uVar5;
    } while (uVar5 < 0x100);
    break;
  case 5:
    uVar3 = 0;
    do {
      param_1[uVar3 * 4] = (int)(float)((uVar3 >> 3 & 0x18 | uVar3 & 0xe0) >> 3 | uVar3 & 0xe0);
      uVar5 = uVar3 & 3;
      param_1[uVar3 * 4 + 1] = (int)(float)((uVar3 & 0x1c) << 3 | uVar3 >> 3 & 3 | uVar3 & 0x1c);
      param_1[uVar3 * 4 + 2] = (int)(float)(((uVar5 << 2 | uVar5) << 2 | uVar5) << 2 | uVar5);
      uVar5 = uVar3 + 1;
      param_1[uVar3 * 4 + 3] = 0x437f0000;
      uVar3 = uVar5;
    } while (uVar5 < 0x100);
    break;
  case 6:
    do {
      fVar2 = (float)(int)uVar3;
      if ((int)uVar3 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      uVar5 = uVar3 + 1;
      param_1[uVar3 * 4 + 3] = (int)fVar2;
      param_1[uVar3 * 4 + 2] = (int)fVar2;
      param_1[uVar3 * 4 + 1] = (int)fVar2;
      param_1[uVar3 * 4] = (int)fVar2;
      uVar3 = uVar5;
    } while (uVar5 < 0x100);
    break;
  case 7:
    do {
      fVar2 = (float)(int)uVar3;
      if ((int)uVar3 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      uVar5 = uVar3 + 1;
      param_1[uVar3 * 4 + 2] = (int)fVar2;
      param_1[uVar3 * 4 + 1] = (int)fVar2;
      param_1[uVar3 * 4] = (int)fVar2;
      param_1[uVar3 * 4 + 3] = 0x437f0000;
      uVar3 = uVar5;
    } while (uVar5 < 0x100);
    break;
  case 8:
    do {
      fVar2 = (float)((uVar5 & 0xf) << 4 | uVar5 & 0xf);
      param_1[uVar5 * 4 + 2] = (int)fVar2;
      param_1[uVar5 * 4 + 1] = (int)fVar2;
      param_1[uVar5 * 4] = (int)fVar2;
      uVar3 = uVar5 + 1;
      param_1[uVar5 * 4 + 3] = (int)(float)(uVar5 >> 4 & 0xf | uVar5 & 0xf0);
      uVar5 = uVar3;
    } while (uVar3 < 0x100);
    break;
  case 10:
    local_18 = 0;
  case 0xc:
  case 0xe:
    uVar3 = 8;
    local_24 = 8;
  case 9:
  case 0xb:
  case 0xd:
    local_20 = 0;
    do {
      uVar5 = local_10[1];
      uVar1 = local_10[2];
      uVar3 = local_20 << (sbyte)uVar3;
      uVar4 = (local_10[3] & (int)(short)uVar3 | *(uint *)(local_14 + 4)) & local_18;
      uVar6 = (*local_10 & uVar3) >> ((byte)*local_8 & 0x1f) |
              (*local_10 & uVar3) >> ((byte)*local_c & 0x1f);
      fVar2 = (float)(int)uVar6;
      if ((int)uVar6 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      param_1[local_20 * 4] = (int)fVar2;
      uVar5 = (uVar5 & uVar3) >> ((byte)local_8[1] & 0x1f) |
              (uVar5 & uVar3) >> ((byte)local_c[1] & 0x1f);
      fVar2 = (float)(int)uVar5;
      if ((int)uVar5 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      param_1[local_20 * 4 + 1] = (int)fVar2;
      uVar3 = (uVar1 & uVar3) >> ((byte)local_8[2] & 0x1f) |
              (uVar1 & uVar3) << ((byte)local_c[2] & 0x1f);
      fVar2 = (float)(int)uVar3;
      if ((int)uVar3 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      param_1[local_20 * 4 + 2] = (int)fVar2;
      uVar3 = uVar4 >> ((byte)local_8[3] & 0x1f) | uVar4 >> ((byte)local_c[3] & 0x1f);
      fVar2 = (float)(int)uVar3;
      if ((int)uVar3 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      param_1[local_20 * 4 + 3] = (int)fVar2;
      local_20 = local_20 + 1;
      uVar3 = local_24;
    } while (local_20 < 0x100);
    break;
  case 0xf:
    do {
      param_1[uVar3 * 4 + 3] = 0;
      param_1[uVar3 * 4 + 1] = 0;
      param_1[uVar3 * 4] = 0;
      fVar2 = (float)(int)uVar3;
      if ((int)uVar3 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      uVar5 = uVar3 + 1;
      param_1[uVar3 * 4 + 2] = (int)fVar2;
      uVar3 = uVar5;
    } while (uVar5 < 0x100);
    break;
  case 0x10:
    do {
      uVar5 = uVar3 + 1;
      param_1[uVar3 * 4 + 2] = 0;
      param_1[uVar3 * 4 + 1] = 0;
      param_1[uVar3 * 4] = 0;
      param_1[uVar3 * 4 + 3] = 0x437f0000;
      uVar3 = uVar5;
    } while (uVar5 < 0x100);
  }
  return;
}

