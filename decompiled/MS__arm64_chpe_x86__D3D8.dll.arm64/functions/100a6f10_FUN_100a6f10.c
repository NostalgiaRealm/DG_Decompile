/*
 * FUN_100a6f10 at 100a6f10
 * undefined FUN_100a6f10(void)
 * Address ranges: 100a6f10-100a7217
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a6f10(undefined4 param_1,uint *param_2,uint param_3,uint param_4,int param_5,
                 uint param_6,uint param_7)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  uint uStack_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 local_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int local_90;
  uint uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  uint local_70;
  uint *local_6c;
  int local_68;
  uint uStack_64;
  uint local_60;
  int local_58 [6];
  
  uVar1 = (param_7 ^ 1) * 8 + 7;
  uVar5 = *param_2;
  uVar4 = param_6;
  if ((param_6 & 0x3f00) == 0x200) {
    uVar4 = param_3;
  }
  uVar3 = param_6;
  if (param_5 != 2) {
    uVar3 = uVar4;
  }
  uVar4 = uVar5 >> 0x1a;
  local_b0 = 7;
  if ((uVar4 & 2) == 0) {
    local_b0 = 8;
  }
  local_a8 = 7;
  local_ac = local_a8;
  if ((uVar4 & 4) == 0) {
    local_ac = 8;
  }
  if ((uVar4 & 8) == 0) {
    local_a8 = 8;
  }
  iStack_9c = (uVar5 >> 0x12 & 3) << 3;
  local_58[1] = (uVar5 >> 0x14 & 3) << 3;
  local_58[2] = (uVar5 >> 0x16 & 3) << 3;
  local_58[3] = (uVar5 >> 0x18 & 3) << 3;
  puVar2 = param_2 + 3;
  uVar4 = ~((uVar5 >> 0x1e) << 3);
  local_58[0] = iStack_9c;
  if (*puVar2 < 0x50) {
    local_70 = param_4 & 0xff;
    param_4 = param_4 & 3;
    local_6c = param_2 + 0x15;
    uVar5 = 0;
    local_68 = param_5;
    uStack_64 = param_6;
    local_60 = uVar4;
    do {
      if (((param_4 != uVar5) &&
          (local_c0 = 1 << (ulonglong)(uVar5 & 0x1f), (local_c0 & uVar1 & 0xff) != 0)) &&
         ((*param_2 & 0x40000000) == 0 || uVar5 != 3)) {
        local_ac = local_58[uVar5];
        local_a8 = 0;
        local_b0 = 0xe4;
        local_b4 = *local_6c;
        local_b8 = local_70;
        local_c8 = 0x55;
        local_d0 = puVar2;
        uStack_cc = param_1;
        uStack_c4 = uVar3;
        local_bc = param_3;
        FUN_100ef510(&local_d0,0x2c);
      }
      uVar4 = local_60;
      param_6 = uStack_64;
      param_5 = local_68;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 4);
    local_c0 = 1 << (ulonglong)param_4;
    if (((local_c0 & uVar1 & 0xff) != 0) && ((*param_2 & 0x40000000) == 0 || param_4 != 3)) {
      local_ac = local_58[param_4];
      local_a8 = 0;
      local_b0 = 0xe4;
      local_b4 = param_2[0x15];
      local_b8 = local_70;
      local_c8 = 0x55;
      local_d0 = puVar2;
      uStack_cc = param_1;
      uStack_c4 = uVar3;
      local_bc = param_3;
      FUN_100ef510(&local_d0,0x2c);
    }
    local_a0 = 0xff;
    iStack_9c = 0;
    local_a8 = 0xff;
    uStack_a4 = 0xff;
    local_b0 = 0xe4;
    local_ac = 0xff;
    local_b4 = param_2[0x16];
    local_c0 = uVar4 & 0xff & uVar1 & 0xff;
    local_b8 = 0xe4;
    local_c8 = 1;
    local_d0 = puVar2;
    uStack_cc = param_1;
    uStack_c4 = uVar3;
    local_bc = uVar3;
    FUN_100ef510(&local_d0,0x38);
  }
  else {
    local_88 = param_4 & 0xff;
    uStack_84 = 0;
    local_b4 = (~(uVar5 >> 0x1a) & 1) + 7;
    local_bc = param_2[0x16];
    local_b8 = 0xe4;
    local_a0 = 0xe4;
    local_c0 = uVar4 & 0xff & uVar1 & 0xff;
    local_c8 = 0x8a;
    local_d0 = puVar2;
    uStack_cc = param_1;
    uStack_c4 = uVar3;
    uStack_a4 = local_bc;
    local_98 = local_58[1];
    iStack_94 = local_58[2];
    local_90 = local_58[3];
    uStack_8c = param_3;
    FUN_100ef510(&local_d0,0x50);
  }
  if (((*param_2 >> 0x1e & 1) != 0) && ((*param_2 >> 0xe & 1) == 0)) {
    local_b4 = 0xff;
    local_b0 = 0;
    local_b8 = 0xe4;
    local_bc = param_2[0x15];
    local_c0 = 8;
    local_c8 = 0x36;
    local_d0 = puVar2;
    uStack_cc = param_1;
    uStack_c4 = uVar3;
    FUN_100ef510(&local_d0,0x24);
  }
  if (param_5 != 2) {
    FUN_100a5778(param_1,param_2,param_6,(char)uVar1,uVar3,2,param_5);
  }
  return;
}

