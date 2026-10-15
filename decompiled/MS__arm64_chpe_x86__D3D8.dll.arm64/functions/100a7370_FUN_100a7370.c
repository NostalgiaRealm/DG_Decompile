/*
 * FUN_100a7370 at 100a7370
 * undefined FUN_100a7370(void)
 * Address ranges: 100a7370-100a75bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a7370(undefined4 param_1,int param_2,undefined4 param_3,int param_4,uint param_5,
                 uint param_6,int param_7)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  int iStack_94;
  uint local_90;
  int iStack_8c;
  uint local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  int local_50;
  
  puVar1 = (uint *)(param_2 + 0xc);
  uVar3 = param_5 & 0xff;
  local_a0 = puVar1;
  uStack_9c = param_1;
  iStack_8c = param_3;
  local_50 = param_4;
  if (*puVar1 < 0x50) {
    param_7 = FUN_100ee580(puVar1,2,0);
    local_78 = 0;
    puVar2 = (undefined4 *)(param_2 + 0x54);
    local_80 = 0xe4;
    local_7c = 0x18;
    local_84 = *puVar2;
    local_88 = 0;
    local_90 = 1;
    local_98 = 0x29;
    iStack_94 = param_7;
    FUN_100ef510(&local_a0,0x2c);
    local_7c = 0x10;
    local_78 = 0;
    local_84 = *puVar2;
    local_80 = 0xe4;
    local_88 = 0x55;
    local_90 = 2;
    local_98 = 0x29;
    local_a0 = puVar1;
    uStack_9c = param_1;
    iStack_94 = param_7;
    iStack_8c = param_3;
    FUN_100ef510(&local_a0,0x2c);
    local_7c = 8;
    local_78 = 0;
    local_84 = *puVar2;
    local_80 = 0xe4;
    local_88 = 0xaa;
    local_98 = 0x29;
    local_a0 = puVar1;
    uStack_9c = param_1;
    iStack_94 = param_4;
    local_90 = param_5 & 0xff;
    iStack_8c = param_3;
    FUN_100ef510(&local_a0,0x2c);
    local_80 = 0xff;
    local_7c = 0;
    local_98 = 0x3c;
    param_6 = param_6 & 0xff;
    local_a0 = puVar1;
    uStack_9c = param_1;
    iStack_94 = param_4;
    local_90 = param_5 & 0xff;
    iStack_8c = param_4;
    local_88 = param_6;
    local_84 = param_3;
    FUN_100ef510(&local_a0,0x28);
    local_80 = 0;
    local_88 = param_6;
  }
  else {
    if (param_7 == 0) {
      param_7 = FUN_100ee580(puVar1,4,0);
    }
    local_6c = 0;
    local_74 = 8;
    uStack_70 = 0;
    local_78 = 0x10;
    local_80 = 0xe4;
    local_7c = 0x18;
    local_84 = *(undefined4 *)(param_2 + 0x58);
    local_88 = 0xe4;
    local_90 = 0xf;
    local_98 = 0x29;
    iStack_94 = param_7;
    FUN_100ef510(&local_a0,0x38);
    param_6 = 0;
    uVar3 = 3;
    local_80 = 0xfe;
    param_4 = param_7;
    local_88 = 0x54;
  }
  local_7c = 0;
  local_98 = 0x3c;
  local_a0 = puVar1;
  uStack_9c = param_1;
  iStack_94 = param_4;
  local_90 = uVar3;
  iStack_8c = param_4;
  local_84 = param_7;
  FUN_100ef510(&local_a0,0x28);
  local_90 = param_5 & 0xff;
  local_80 = 0x55;
  local_7c = 0;
  local_98 = 0x3c;
  iStack_94 = local_50;
  local_a0 = puVar1;
  uStack_9c = param_1;
  iStack_8c = param_4;
  local_88 = param_6;
  local_84 = param_7;
  FUN_100ef510(&local_a0,0x28);
  return;
}

