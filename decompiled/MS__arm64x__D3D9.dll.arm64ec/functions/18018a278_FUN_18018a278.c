/*
 * FUN_18018a278 at 18018a278
 * undefined FUN_18018a278(void)
 * Address ranges: 18018a278-18018a397
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18018a278(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48;
  
  local_48 = 0;
  local_50 = 0x2b0;
  local_60 = *(undefined4 *)(param_2 + 0xd4);
  local_80[0] = 1;
  local_58 = 0xa4;
  local_68 = 0xffffffff;
  local_70 = 0xa4;
  local_78 = param_6;
  FUN_180214c88(param_2 + 0x20,param_3,0x10,param_5,local_80,0x40);
  local_48 = 0;
  local_50 = 0x2c0;
  local_60 = *(undefined4 *)(param_2 + 0xd4);
  local_58 = 0xa4;
  local_68 = 0xffffffff;
  local_70 = 0xa4;
  local_80[0] = 2;
  local_78 = param_6;
  FUN_180214c88(param_2 + 0x20,param_3,0x10,param_5,local_80,0x40);
  local_48 = 0;
  local_58 = 0xa4;
  local_68 = 0xffffffff;
  local_70 = 0xa4;
  local_50 = 0x2d0;
  local_60 = *(undefined4 *)(param_2 + 0xd4);
  local_80[0] = 4;
  local_78 = param_6;
  FUN_180214c88(param_2 + 0x20,param_3,0x10,param_5,local_80,0x40);
  return;
}

