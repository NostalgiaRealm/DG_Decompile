/*
 * FUN_10042500 at 10042500
 * undefined FUN_10042500(void)
 * Address ranges: 10042500-100425a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10042500(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,undefined4 param_6,uint param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,byte param_11)

{
  undefined4 local_80;
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
  
  uStack_64 = param_7 | 0x80000000;
  local_78 = 0;
  local_68 = 0x1e4;
  local_60 = 0x1e4;
  uStack_5c = 0;
  local_80 = param_2;
  uStack_7c = param_3;
  uStack_74 = param_6;
  local_70 = param_5 & 0xff;
  uStack_6c = param_8;
  FUN_1007a868(&local_80,0x28);
  local_58 = 0x1e4;
  uStack_54 = 0;
  local_60 = (uint)param_11;
  local_68 = 0x1e4;
  uStack_64 = param_9;
  local_78 = 0x32;
  local_80 = param_2;
  uStack_7c = param_3;
  uStack_74 = param_4;
  local_70 = param_5 & 0xff;
  uStack_6c = param_6;
  uStack_5c = param_7;
  FUN_1007a868(&local_80,0x30);
  return;
}

