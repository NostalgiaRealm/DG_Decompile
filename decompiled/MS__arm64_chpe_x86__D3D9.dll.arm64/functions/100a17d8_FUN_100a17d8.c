/*
 * FUN_100a17d8 at 100a17d8
 * undefined FUN_100a17d8(void)
 * Address ranges: 100a17d8-100a1af3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a17d8(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 *local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 *local_104;
  undefined4 *local_100;
  undefined4 *local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  uint local_d0;
  int local_cc;
  undefined4 *local_c8;
  uint *local_c4;
  undefined4 local_c0;
  undefined1 local_bc;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 local_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_70 [48];
  
  puVar1 = (undefined4 *)(param_2 + 0x18);
  uVar4 = FUN_10122f60(*puVar1);
  uVar3 = param_4;
  if (((int)uVar4 != 0x51) && (*(char *)(param_2 + 0x65) != '\0')) {
    uVar3 = FUN_10121590(puVar1,4,0);
    local_ec = 0;
    uStack_e8 = 0;
    local_f4 = *(undefined4 *)(param_2 + 0x2c0);
    local_100 = (undefined4 *)0x3;
    local_f0 = 0x54;
    local_f8 = 0xff;
    local_108 = 0xe;
    local_110 = puVar1;
    uStack_10c = param_3;
    local_104 = (undefined4 *)uVar3;
    local_fc = (undefined4 *)param_4;
    FUN_10122a88(&local_110,0x2c);
    local_f0 = 0x54;
    local_ec = 0;
    local_f8 = 0x54;
    local_100 = (undefined4 *)0x3;
    local_108 = 0;
    local_110 = puVar1;
    uStack_10c = param_3;
    local_104 = (undefined4 *)uVar3;
    local_fc = (undefined4 *)param_4;
    local_f4 = uVar3;
    FUN_10122a88(&local_110,0x28);
    local_f8 = 0xea;
    local_f4 = 0;
    local_100 = (undefined4 *)0xc;
    local_108 = 0x36;
    local_110 = puVar1;
    uStack_10c = param_3;
    local_104 = (undefined4 *)uVar3;
    local_fc = (undefined4 *)param_4;
    uVar4 = FUN_10122a88(&local_110,0x20);
  }
  uVar5 = 0xf;
  uVar4 = FUN_1009f358(uVar4,param_2,*(undefined4 *)(param_2 + 0x1ac),0xf,&uStack_a0);
  FUN_1009f358(uVar4,param_2,*(undefined4 *)(param_2 + 0x1b0),uVar5 & 0xffffffff,auStack_70);
  local_100 = &local_c0;
  local_fc = (undefined4 *)0x0;
  local_104 = &uStack_a0;
  local_108 = 0x36;
  local_bc = 0xe4;
  uStack_a8 = 0xffffffff;
  uStack_a4 = 0xffffffff;
  local_b0 = -1;
  uStack_ac = 0xffffffff;
  local_110 = puVar1;
  uStack_10c = param_3;
  local_c0 = uVar3;
  FUN_10122c20(&local_110,0x18);
  local_100 = &local_c0;
  local_fc = (undefined4 *)0x0;
  local_104 = (undefined4 *)auStack_70;
  local_108 = 0x36;
  local_110 = puVar1;
  uStack_10c = param_3;
  FUN_10122c20(&local_110,0x18);
  uVar8 = 0;
  uVar6 = (uint)*(undefined8 *)(param_2 + 8);
  local_d0 = uVar6 & 0x3f;
  uVar6 = (uVar6 & 0x2a) >> 1 | (uVar6 & 0x15) << 1;
  lVar7 = LZCOUNT(((uVar6 & 0x33333333) >> 2 |
                  ((uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x3030303) << 2) << 4) << 0x18);
  uVar6 = (uint)lVar7;
  if ((1 - (uVar6 >> 5) & 0xff) == 0) {
    lVar7 = 0xffffffff;
  }
  else {
    pbVar2 = (byte *)((int)&local_d0 + ((int)uVar6 >> 3));
    *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
  }
  uVar5 = (ulonglong)local_d0;
  if ((int)lVar7 != -1) {
    local_cc = param_2 + 0x1e0;
    local_c8 = (undefined4 *)(param_2 + 0x2b8);
    uVar9 = uVar5;
    local_c4 = (uint *)(param_2 + 0x44);
    do {
      FUN_1009f358(uVar5,param_2,*(undefined4 *)(local_cc + (uVar8 & 0xfffffffc)),
                   (char)(1 << (ulonglong)(uVar8 & 3)),auStack_70);
      local_9c = 0xe4;
      uStack_88 = 0xffffffffffffffff;
      local_90 = 0xffffffffffffffff;
      local_c0 = *local_c8;
      local_bc = 0xe4;
      local_b0 = ((uint)lVar7 + 2) * 0x10;
      uStack_ac = 0xffffffff;
      uStack_a8 = 0xffffffff;
      uStack_a4 = 0xffffffff;
      local_fc = &local_c0;
      local_f8 = 0;
      local_100 = &uStack_a0;
      local_104 = (undefined4 *)auStack_70;
      local_108 = 0x11;
      local_110 = puVar1;
      uStack_10c = param_3;
      uStack_a0 = param_4;
      uVar5 = FUN_10122c20(&local_110,0x1c);
      uVar8 = uVar8 + 1;
      *(uint *)(param_2 + 0x44) = 1 << (ulonglong)((uint)lVar7 & 0x1f) | *local_c4;
      uVar6 = ((uint)uVar9 & 0xaaaaaaaa) >> 1 | ((uint)uVar9 & 0x55555555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      lVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
      uVar6 = (uint)lVar7;
      if ((1 - (uVar6 >> 5) & 0xff) == 0) {
        lVar7 = 0xffffffff;
      }
      else {
        pbVar2 = (byte *)((int)&local_d0 + ((int)uVar6 >> 3));
        *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
        uVar9 = (ulonglong)local_d0;
      }
    } while ((int)lVar7 != -1);
  }
  return;
}

