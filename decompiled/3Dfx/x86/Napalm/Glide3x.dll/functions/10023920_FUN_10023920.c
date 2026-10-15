/*
 * FUN_10023920 at 10023920
 * int * __stdcall FUN_10023920(int * param_1, int param_2, uint param_3)
 * Address ranges: 10023920-10023e60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10023920(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  FUN_100561f1(param_1,0,0x50);
  local_8 = 0;
  if (param_3 != 0) {
    do {
      iVar4 = local_8 * 0x250;
      if (*(int *)(param_2 + 0x130 + iVar4) == 0) {
        local_c = 0;
      }
      else {
        local_c = *(uint *)(param_2 + 0x120 + iVar4);
      }
      if (*(int *)(param_2 + 0x134 + iVar4) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(param_2 + 0x124 + iVar4);
      }
      if (*(int *)(param_2 + 0x138 + iVar4) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_2 + 0x128 + iVar4);
      }
      if (*(int *)(param_2 + 0x13c + iVar4) == 0) {
        local_10 = 0;
      }
      else {
        local_10 = *(uint *)(param_2 + 300 + iVar4);
      }
      iVar2 = *(int *)(param_2 + 0x1a4 + iVar4);
      if (iVar2 == 0xff) {
        iVar2 = 0x1b;
      }
      uVar5 = ((((((((*(uint *)(param_2 + 0x1bc + iVar4) & 3) * 2 |
                    *(uint *)(param_2 + 0x1b4 + iVar4)) * 2 | *(uint *)(param_2 + 0x1b0 + iVar4)) <<
                   2 | *(uint *)(param_2 + 0x1b8 + iVar4)) << 6 |
                 (byte)(&DAT_100588f8)[iVar2] & 0xfffffffe) << 3 |
                *(uint *)(param_2 + 0x13c + iVar4)) << 3 | *(uint *)(param_2 + 0x138 + iVar4)) << 3
              | *(uint *)(param_2 + 0x134 + iVar4)) << 3 | *(uint *)(param_2 + 0x130 + iVar4);
      iVar2 = *(int *)(param_2 + 0x160 + iVar4);
      param_1[local_8 * 2] = local_10 << 0x1e | (iVar1 << 10 | uVar3) << 10 | local_c;
      param_1[local_8 * 2 + 1] = (uVar5 >> 0x16) << 0x1e | (uVar5 << 10 | local_10) >> 2;
      if (iVar2 == 0) {
        local_18 = 0;
      }
      else {
        local_18 = *(uint *)(param_2 + 0x150 + iVar4);
      }
      if (*(int *)(param_2 + 0x164 + iVar4) == 0) {
        local_14 = 0;
      }
      else {
        local_14 = *(uint *)(param_2 + 0x154 + iVar4);
      }
      if (*(int *)(param_2 + 0x168 + iVar4) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_2 + 0x158 + iVar4);
      }
      if (*(int *)(param_2 + 0x16c + iVar4) == 0) {
        local_10 = 0;
      }
      else {
        local_10 = *(uint *)(param_2 + 0x15c + iVar4);
      }
      if (*(float *)(param_2 + 0x198 + iVar4) == *(float *)(param_2 + 0x194 + iVar4)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 2;
      }
      uVar3 = ((((((((uint)(*(int *)(param_2 + 0x1ec + iVar4) != 0) << 2 |
                    *(uint *)(param_2 + 0x1ac + iVar4)) << 2 | *(uint *)(param_2 + 0x1a8 + iVar4))
                   << 2 | uVar3 | (uint)(*(int *)(param_2 + 0x144 + iVar4) != 0)) * 2 |
                 (uint)(*(int *)(param_2 + 0x174 + iVar4) != 0)) << 7 |
                *(uint *)(param_2 + 0x16c + iVar4)) << 3 | *(uint *)(param_2 + 0x168 + iVar4)) << 3
              | *(uint *)(param_2 + 0x164 + iVar4)) << 3 | *(uint *)(param_2 + 0x160 + iVar4);
      param_1[local_8 * 2 + 6] = local_10 << 0x1e | (iVar1 << 10 | local_14) << 10 | local_18;
      param_1[local_8 * 2 + 7] = (uVar3 >> 0x16) << 0x1e | (uVar3 << 10 | local_10) >> 2;
      lVar6 = FUN_10056570();
      lVar7 = FUN_10056570();
      param_1[local_8 + 0x10] = (int)lVar6 << 4 | (uint)lVar7;
      local_8 = local_8 + 1;
    } while (local_8 < param_3);
  }
  if (*(uint *)(param_2 + 0xd0) == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(uint *)(param_2 + 0xc0);
  }
  if (*(int *)(param_2 + 0xd4) == 0) {
    local_14 = 0;
  }
  else {
    local_14 = *(uint *)(param_2 + 0xc4);
  }
  if (*(int *)(param_2 + 0xd8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 200);
  }
  if (*(int *)(param_2 + 0xdc) == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(uint *)(param_2 + 0xcc);
  }
  uVar3 = ((*(int *)(param_2 + 0xdc) << 3 | *(uint *)(param_2 + 0xd8)) << 3 |
          *(uint *)(param_2 + 0xd4)) << 3 | *(uint *)(param_2 + 0xd0);
  param_1[0xd] = (uVar3 >> 0x16) << 0x1e | (uVar3 << 10 | local_18) >> 2;
  param_1[0xc] = local_18 << 0x1e | (iVar4 << 10 | local_14) << 10 | local_10;
  if (*(int *)(param_2 + 0x100) == 0) {
    local_c = 0;
  }
  else {
    local_c = *(uint *)(param_2 + 0xf0);
  }
  if (*(int *)(param_2 + 0x104) == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(uint *)(param_2 + 0xf4);
  }
  if (*(int *)(param_2 + 0x108) == 0) {
    local_14 = 0;
  }
  else {
    local_14 = *(int *)(param_2 + 0xf8);
  }
  if (*(int *)(param_2 + 0x10c) == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(uint *)(param_2 + 0xfc);
  }
  iVar4 = *(int *)(param_2 + 0x864);
  lVar6 = FUN_10056570();
  uVar3 = *(uint *)(param_2 + 0x8c);
  uVar5 = (((((((uint)(iVar4 != 0) | (int)lVar6 * 2) * 2 | (uint)(*(int *)(param_2 + 0x4c) != 0)) <<
              4 | *(uint *)(param_2 + 0x78)) << 3 | *(uint *)(param_2 + 0x10c)) << 3 |
           *(uint *)(param_2 + 0x108)) << 3 | *(uint *)(param_2 + 0x104)) << 3 |
          *(uint *)(param_2 + 0x100);
  param_1[0xf] = (uVar5 >> 0x16) << 0x1e | (uVar5 << 10 | local_18) >> 2;
  param_1[0xe] = local_18 << 0x1e | (local_14 << 10 | local_10) << 10 | local_c;
  uVar5 = *(uint *)(param_2 + 0x1c);
  iVar4 = *(int *)(param_2 + 0xa0);
  iVar1 = *(int *)(param_2 + 0x28);
  lVar6 = FUN_10056570();
  param_1[0x13] =
       (((((((uint)lVar6 | param_3 << 4) << 0xb | uVar5 & 0xf) << 4 | -(uint)(iVar1 != 0) & 8 |
           uVar5 & 0xf00 | *(uint *)(param_2 + 0x24)) << 2 | *(uint *)(param_2 + 0xac)) << 4 |
        *(uint *)(param_2 + 0x74)) << 4 | uVar3 & 3) * 2 | (uint)(iVar4 != 0) | uVar3 >> 5 & 0x18;
  return param_1;
}

