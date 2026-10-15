/*
 * FUN_1002b3c0 at 1002b3c0
 * undefined FUN_1002b3c0(void)
 * Address ranges: 1002b3c0-1002b683
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002b3c0(undefined4 param_1,uint *param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint *local_90;
  undefined4 uStack_8c;
  uint local_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  undefined4 local_78;
  uint uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  
  iVar4 = 6;
  if ((*param_2 & 0x400) != 0) {
    iVar4 = 8;
  }
  uVar5 = 2;
  uVar2 = uVar5;
  if (*(char *)(iVar4 + (int)param_2) == '\0') {
    uVar2 = 0;
  }
  iVar4 = 5;
  if ((*param_2 & 0x400) != 0) {
    iVar4 = 7;
  }
  uVar2 = uVar2 | *(char *)(iVar4 + (int)param_2) != '\0';
  uStack_8c = param_1;
  switch(uVar2) {
  case 1:
  case 2:
    puVar1 = param_2 + 3;
    uVar3 = FUN_10083f38(puVar1,1,0);
    if (param_3 != 0) {
      local_68 = 0;
      local_70 = 0;
      uStack_6c = 0;
      local_60 = 0x100;
      if (uVar2 != 1) {
        local_60 = 0x155;
      }
      uStack_5c = 0;
      local_78 = 0xe4;
      uStack_74 = 0;
      uStack_7c = param_2[0x16];
      local_80 = 1;
      local_88 = 0x1d;
      local_90 = puVar1;
      uStack_84 = uVar3;
      iStack_64 = param_3;
      FUN_10084ec8(&local_90,0x38);
      if (uVar2 != 1) {
        uVar5 = 4;
      }
      local_70 = 0;
      uStack_6c = 0;
      local_78 = 0x1e4;
      local_88 = 0x3c;
      local_90 = puVar1;
      uStack_8c = param_1;
      uStack_84 = param_4;
      local_80 = uVar5;
      uStack_7c = param_4;
      uStack_74 = uVar3;
      FUN_10084ec8(&local_90,0x28);
    }
    local_78 = 0;
    local_80 = 1;
    local_70 = 0x155;
    if (uVar2 != 1) {
      local_70 = 0x1aa;
    }
    local_88 = 1;
    uStack_6c = 0;
    local_90 = puVar1;
    uStack_8c = param_1;
    uStack_84 = param_4;
    uStack_7c = param_4;
    uStack_74 = param_4;
    FUN_10084ec8(&local_90,0x28);
    break;
  case 3:
    puVar1 = param_2 + 3;
    uVar3 = FUN_10083f38(puVar1,2,0);
    if (param_3 != 0) {
      local_68 = 0;
      local_60 = 0x154;
      uStack_5c = 0;
      uStack_7c = param_2[0x16];
      local_70 = 0;
      uStack_6c = 0;
      local_78 = 0xe4;
      uStack_74 = 0;
      local_80 = 3;
      local_88 = 0x1d;
      local_90 = puVar1;
      uStack_84 = uVar3;
      iStack_64 = param_3;
      FUN_10084ec8(&local_90,0x38);
      local_80 = 10;
      local_88 = 0x3c;
      local_70 = 0;
      uStack_6c = 0;
      local_78 = 0xe4;
      local_90 = puVar1;
      uStack_8c = param_1;
      uStack_84 = param_4;
      uStack_7c = param_4;
      uStack_74 = uVar3;
      FUN_10084ec8(&local_90,0x28);
      local_70 = 0x55;
      uStack_6c = 0;
      local_80 = 0xc;
      local_78 = 0xe4;
      local_88 = 0x3c;
      local_90 = puVar1;
      uStack_8c = param_1;
      uStack_84 = param_4;
      uStack_7c = param_4;
      uStack_74 = uVar3;
      FUN_10084ec8(&local_90,0x28);
    }
    local_80 = 3;
    local_70 = 0xfe;
    uStack_6c = 0;
    local_78 = 0x54;
    local_88 = 1;
    local_90 = puVar1;
    uStack_8c = param_1;
    uStack_84 = param_4;
    uStack_7c = param_4;
    uStack_74 = param_4;
    FUN_10084ec8(&local_90,0x28);
    local_78 = 0;
    local_70 = 0x55;
    uStack_6c = 0;
    local_80 = 1;
    local_88 = 1;
    local_90 = puVar1;
    uStack_8c = param_1;
    uStack_84 = param_4;
    uStack_7c = param_4;
    uStack_74 = param_4;
    FUN_10084ec8(&local_90,0x28);
  }
  local_78 = 0;
  local_80 = param_4 | 0x10000000;
  local_90 = param_2 + 3;
  uStack_7c = 0;
  local_88 = ~((*param_2 >> 0xc) << 0x12) & 0x40000 | 0xd;
  uStack_84 = 0xffffffff;
  uStack_8c = param_1;
  FUN_10084ec8(&local_90,0x1c);
  return;
}

