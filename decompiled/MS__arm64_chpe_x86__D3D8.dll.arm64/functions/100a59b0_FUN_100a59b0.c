/*
 * FUN_100a59b0 at 100a59b0
 * undefined FUN_100a59b0(void)
 * Address ranges: 100a59b0-100a5a5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a59b0(undefined4 param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 uint param_6,undefined4 param_7,undefined4 param_8,byte param_9)

{
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  uStack_64 = param_6 | 0x80000000;
  local_78 = 0;
  local_68 = 0x1e4;
  local_60 = 0x1e4;
  uStack_5c = 0;
  local_80 = param_2 + 0xc;
  uStack_7c = param_1;
  uStack_74 = param_5;
  local_70 = param_4 & 0xff;
  uStack_6c = param_7;
  FUN_100ef510(&local_80,0x28);
  local_58 = 0x1e4;
  uStack_54 = 0;
  local_68 = 0x1e4;
  local_60 = (uint)param_9;
  local_78 = 0x32;
  local_80 = param_2 + 0xc;
  uStack_7c = param_1;
  uStack_74 = param_3;
  local_70 = param_4 & 0xff;
  uStack_6c = param_5;
  uStack_64 = param_8;
  uStack_5c = param_6;
  FUN_100ef510(&local_80,0x30);
  return;
}

