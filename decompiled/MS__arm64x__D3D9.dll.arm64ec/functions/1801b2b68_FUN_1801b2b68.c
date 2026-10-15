/*
 * FUN_1801b2b68 at 1801b2b68
 * undefined FUN_1801b2b68(void)
 * Address ranges: 1801b2b68-1801b2c3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b2b68(undefined8 param_1,longlong param_2,undefined4 param_3,byte param_4,
                  undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,byte param_9
                  )

{
  uint local_90 [2];
  undefined4 local_88;
  undefined4 local_80;
  uint local_78;
  uint local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  
  local_68 = 0;
  local_78 = param_6 | 0x80000000;
  local_70 = 0x1e4;
  local_80 = 0x1e4;
  local_90[0] = (uint)param_4;
  local_88 = param_7;
  FUN_180214c88(param_2 + 0x10,param_1,0,param_5,local_90,0x30);
  local_58 = 0;
  local_68 = CONCAT44(local_68._4_4_,param_6);
  local_70 = (uint)param_9;
  local_60 = 0x1e4;
  local_80 = 0x1e4;
  local_90[0] = (uint)param_4;
  local_88 = param_5;
  local_78 = param_8;
  FUN_180214c88(param_2 + 0x10,param_1,0x32,param_3,local_90,0x40);
  return;
}

