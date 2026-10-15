/*
 * FUN_10070400 at 10070400
 * undefined FUN_10070400(void)
 * Address ranges: 10070400-10070453
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10070400(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  uint local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  uint uStack_1c;
  
  param_4 = param_4 & 0xf;
  uStack_1c = param_4 | (param_4 | (param_4 | param_4 << 4) << 4) << 4;
  local_28 = (param_3 & 0x1f) << 0xb | 0x4000058;
  uStack_24 = 0x107000;
  uStack_2c = 4;
  local_30 = param_1;
  local_20 = param_2;
  FUN_1006fee0(&local_30,0x18);
  return;
}

