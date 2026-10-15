/*
 * FUN_1009cdc0 at 1009cdc0
 * undefined FUN_1009cdc0(void)
 * Address ranges: 1009cdc0-1009ceaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009cdc0(undefined8 param_1,int param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  puVar1 = (undefined4 *)(param_2 + 0xc4);
  local_58 = 0x2b0;
  uStack_54 = 0;
  local_60 = *puVar1;
  param_2 = param_2 + 0x18;
  uStack_5c = 0xa4;
  local_70 = 1;
  local_68 = 0xa4;
  uStack_64 = 0xffffffff;
  local_78 = 0x10;
  local_80 = param_2;
  uStack_7c = param_3;
  uStack_74 = param_5;
  uStack_6c = param_6;
  FUN_10122a88(&local_80,0x30);
  local_68 = 0xa4;
  uStack_64 = 0xffffffff;
  local_58 = 0x2c0;
  uStack_54 = 0;
  local_60 = *puVar1;
  local_78 = 0x10;
  uStack_5c = 0xa4;
  local_70 = 2;
  local_80 = param_2;
  uStack_7c = param_3;
  uStack_74 = param_5;
  uStack_6c = param_6;
  FUN_10122a88(&local_80,0x30);
  local_68 = 0xa4;
  uStack_64 = 0xffffffff;
  local_78 = 0x10;
  local_58 = 0x2d0;
  uStack_54 = 0;
  local_60 = *puVar1;
  uStack_5c = 0xa4;
  local_70 = 4;
  local_80 = param_2;
  uStack_7c = param_3;
  uStack_74 = param_5;
  uStack_6c = param_6;
  FUN_10122a88(&local_80,0x30);
  return;
}

