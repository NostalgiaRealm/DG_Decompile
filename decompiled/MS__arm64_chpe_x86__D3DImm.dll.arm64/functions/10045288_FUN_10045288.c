/*
 * FUN_10045288 at 10045288
 * undefined FUN_10045288(void)
 * Address ranges: 10045288-1004540b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10045288(undefined8 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,undefined8 param_7,uint param_8,undefined4 param_9)

{
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  int iStack_7c;
  undefined4 local_78;
  int iStack_74;
  undefined4 local_70;
  int iStack_6c;
  undefined4 local_68;
  uint uStack_64;
  undefined4 local_60;
  
  param_3 = param_3 + 0x10;
  local_90 = param_3;
  uStack_8c = param_2;
  uStack_84 = param_4;
  if (param_5 == 0) {
    local_68 = 0;
    local_70 = 0;
    iStack_6c = 0;
    local_78 = 0xff;
    local_88 = 0x36;
    local_80 = 1;
    iStack_7c = param_9;
    iStack_74 = param_6;
    FUN_1007a868(&local_90,0x2c);
    local_80 = 2;
    iStack_7c = param_9;
    local_68 = 0;
    local_70 = 0;
    iStack_6c = 0;
    local_78 = 0xff;
    local_88 = 0x36;
    local_90 = param_3;
    uStack_8c = param_2;
    uStack_84 = param_4;
    iStack_74 = param_6 + 0x10;
    FUN_1007a868(&local_90,0x2c);
    local_80 = 4;
    iStack_7c = param_9;
    local_68 = 0;
    local_70 = 0;
    iStack_6c = 0;
    local_78 = 0xff;
    local_88 = 0x36;
    local_90 = param_3;
    uStack_8c = param_2;
    uStack_84 = param_4;
    iStack_74 = param_6 + 0x20;
    FUN_1007a868(&local_90,0x2c);
  }
  else {
    local_70 = 0xe4;
    local_60 = 0;
    local_68 = 0;
    local_78 = 0xe4;
    iStack_74 = param_9;
    local_80 = 1;
    local_88 = 0x11;
    iStack_7c = param_5;
    iStack_6c = param_6;
    uStack_64 = param_8 & 0xff;
    FUN_1007a868(&local_90,0x34);
    local_70 = 0xe4;
    local_78 = 0xe4;
    iStack_74 = param_9;
    local_80 = 2;
    local_88 = 0x11;
    local_60 = 0;
    local_68 = 0;
    local_90 = param_3;
    uStack_8c = param_2;
    uStack_84 = param_4;
    iStack_7c = param_5;
    iStack_6c = param_6 + 0x10;
    uStack_64 = param_8 & 0xff;
    FUN_1007a868(&local_90,0x34);
    local_70 = 0xe4;
    local_78 = 0xe4;
    iStack_74 = param_9;
    local_80 = 4;
    local_88 = 0x11;
    local_60 = 0;
    uStack_64 = param_8 & 0xff;
    local_68 = 0;
    local_90 = param_3;
    uStack_8c = param_2;
    uStack_84 = param_4;
    iStack_7c = param_5;
    iStack_6c = param_6 + 0x20;
    FUN_1007a868(&local_90,0x34);
  }
  return;
}

