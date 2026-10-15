/*
 * FUN_1008b108 at 1008b108
 * undefined FUN_1008b108(void)
 * Address ranges: 1008b108-1008b273
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008b108(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  uint *local_ac;
  uint uStack_a8;
  int local_a4;
  undefined4 uStack_a0;
  uint local_80;
  undefined1 local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  undefined1 local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  
  piVar1 = (int *)(param_1 + 4);
  local_c0 = *piVar1;
  local_80 = param_3 | 0x410100;
  puVar2 = (undefined4 *)(param_1 + 8);
  local_7c = 0xa4;
  uStack_68 = 0xffffffffffffffff;
  local_70 = 0xffffffffffffffff;
  local_a4 = local_c0 + 0x350;
  uStack_a0 = 0;
  local_ac = &local_80;
  uVar3 = (*(byte *)(local_c0 + 0x354) >> 4 & 3) << 6 | *(byte *)(local_c0 + 0x354) & 0x3f | 0x100;
  local_b4 = 0x101;
  local_b8 = 0x10;
  uStack_bc = *puVar2;
  uStack_b0 = param_2;
  uStack_a8 = uVar3;
  FUN_10122c20(&local_c0,0x24);
  if (param_4 != 0xffffffff) {
    local_c0 = *piVar1;
    local_60 = param_4 | 0x410100;
    local_5c = 0xa4;
    local_a4 = local_c0 + 0x350;
    uStack_48 = 0xffffffffffffffff;
    local_50 = 0xffffffffffffffff;
    uStack_a0 = 0;
    local_ac = &local_60;
    local_b4 = 0x102;
    local_b8 = 0x10;
    uStack_bc = *puVar2;
    uStack_b0 = param_2;
    uStack_a8 = uVar3;
    FUN_10122c20(&local_c0,0x24);
  }
  if (param_5 != 0xffffffff) {
    local_c0 = *piVar1;
    local_60 = param_5 | 0x410100;
    local_5c = 0xa4;
    local_a4 = local_c0 + 0x350;
    uStack_48 = 0xffffffffffffffff;
    local_50 = 0xffffffffffffffff;
    uStack_a0 = 0;
    local_ac = &local_60;
    local_b4 = 0x104;
    local_b8 = 0x10;
    uStack_bc = *puVar2;
    uStack_b0 = param_2;
    uStack_a8 = uVar3;
    FUN_10122c20(&local_c0,0x24);
  }
  return;
}

