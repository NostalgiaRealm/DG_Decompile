/*
 * FUN_1002ca98 at 1002ca98
 * undefined FUN_1002ca98(void)
 * Address ranges: 1002ca98-1002cbdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002ca98(undefined4 param_1,uint *param_2,int param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint *puVar1;
  uint *local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  uint local_7c;
  undefined4 local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  
  puVar1 = param_2 + 3;
  local_7c = param_5 & 0xff;
  local_90 = puVar1;
  uStack_8c = param_1;
  if (param_3 == 0) {
    local_70 = 0xe4;
    local_6c = 0;
    local_88 = 0x2d;
    local_78 = 0xe4;
    local_84 = param_4;
    local_80 = local_7c;
    local_7c = param_6;
    local_74 = param_7;
    FUN_10084ec8(&local_90,0x28);
  }
  else {
    local_6c = 0xe4;
    uStack_68 = 0;
    local_74 = 0xe4;
    local_84 = *(undefined4 *)(&DAT_100b3514 + param_3 * 4);
    local_88 = 0x8000002d;
    local_80 = param_4;
    local_78 = param_6;
    local_70 = param_7;
    FUN_10084ec8(&local_90,0x2c);
  }
  if ((*param_2 & 0xf) == 4) {
    local_74 = param_2[0x16];
    local_44 = 0;
    local_4c = 0x3a83126f;
    uStack_48 = 0x3a83126f;
    local_54 = 0x3a83126f;
    uStack_50 = 0x3a83126f;
    uStack_58 = 0xe4;
    local_78 = 0xe4;
    local_88 = 0x32;
    local_64 = 0x437f0000;
    uStack_60 = 0x437f0000;
    local_6c = 0x437f0000;
    uStack_68 = 0x437f0000;
    local_70 = 0xe4;
    param_5 = param_5 & 0xff;
    local_90 = puVar1;
    uStack_8c = param_1;
    local_84 = param_4;
    local_80 = param_5;
    local_7c = param_4;
    local_5c = local_74;
    FUN_10084ec8(&local_90,0x50);
    local_88 = 0x40;
    local_78 = 0xe4;
    local_74 = 0;
    local_90 = puVar1;
    uStack_8c = param_1;
    local_84 = param_4;
    local_80 = param_5;
    local_7c = param_4;
    FUN_10084ec8(&local_90,0x20);
    local_88 = 0x1c;
    local_78 = 0xe4;
    local_74 = 0;
    local_90 = puVar1;
    uStack_8c = param_1;
    local_84 = param_4;
    local_80 = param_5;
    local_7c = param_4;
    FUN_10084ec8(&local_90,0x20);
  }
  return;
}

