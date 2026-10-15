/*
 * FUN_10095fd8 at 10095fd8
 * undefined FUN_10095fd8(void)
 * Address ranges: 10095fd8-100961eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10095fd8(undefined8 param_1,int param_2,undefined4 param_3,uint param_4,undefined8 param_5,
                 undefined1 param_6,int param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint *extraout_w12;
  int local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  uint *local_104;
  undefined4 *local_100;
  uint *local_fc;
  uint *local_f8;
  undefined4 uStack_f4;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  uint local_c0;
  undefined1 local_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [4];
  undefined1 local_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_80;
  undefined1 local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  undefined1 local_5c;
  undefined1 auStack_50 [48];
  
  uVar3 = FUN_1009f358(param_1,param_2,*(undefined4 *)(param_2 + (param_7 + 0x6b) * 4),0xf,
                       auStack_50);
  puVar2 = (undefined4 *)FUN_10095628(uVar3,param_7);
  uVar4 = 0xe4;
  local_d0 = *puVar2;
  uStack_c4 = puVar2[3];
  local_c8 = puVar2[2];
  uStack_cc = puVar2[1];
  local_dc = 0xe4;
  local_e0 = *(undefined4 *)(param_2 + 0xac);
  uStack_10c = param_3;
  if (param_4 == 0) {
    local_100 = &local_e0;
    local_fc = (uint *)0x0;
    local_104 = (uint *)auStack_50;
    local_110 = param_2 + 0x18;
    local_108 = 0x36;
    FUN_10122c20(&local_110,0x18);
  }
  else {
    uStack_88 = 0xffffffffffffffff;
    local_90 = 0xffffffffffffffff;
    local_9c = param_6;
    if (((param_4 & 0x3f00) == 0x300) && ((*extraout_w12 & 0x3f00) == 0x300)) {
      iVar1 = param_2 + 0x18;
      local_c0 = FUN_10121590(iVar1,4,0);
      local_bc = 0xf;
      uStack_a8 = 0xffffffffffffffff;
      local_b0 = 0xffffffffffffffff;
      local_80 = 0x40000000;
      if (*(uint *)(param_2 + 0x21c) == 0) {
        local_80 = 0;
      }
      local_80 = local_80 | param_4;
      local_70 = 0xffffffffffffffff;
      uStack_68 = 0xffffffffffffffff;
      local_60 = *(uint *)(param_2 + 0x21c) | 0x10000000;
      local_5c = *(undefined1 *)(param_2 + 0x220);
      local_f8 = &local_80;
      uStack_f4 = 0;
      local_fc = &local_e0;
      local_100 = (undefined4 *)local_a0;
      local_104 = &local_c0;
      local_108 = 0x37;
      local_110 = iVar1;
      local_7c = uVar4;
      FUN_10122c20(&local_110,0x20);
      local_fc = &local_c0;
      local_f8 = (uint *)0x0;
      local_100 = (undefined4 *)0x1e4;
      local_104 = (uint *)auStack_50;
      local_108 = 0x36;
      local_110 = iVar1;
      uStack_10c = param_3;
      FUN_10122c20(&local_110,0x1c);
    }
    else {
      local_f8 = &local_c0;
      uStack_f4 = 0;
      local_fc = &local_e0;
      local_100 = (undefined4 *)local_a0;
      local_104 = (uint *)auStack_50;
      local_110 = param_2 + 0x18;
      local_bc = 0xe4;
      local_108 = 0x37;
      uStack_a8 = 0xffffffffffffffff;
      local_b0 = 0xffffffffffffffff;
      local_c0 = param_4;
      FUN_10122c20(&local_110,0x20);
    }
  }
  return;
}

