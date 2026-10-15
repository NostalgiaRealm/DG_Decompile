/*
 * FUN_10073d40 at 10073d40
 * undefined FUN_10073d40(void)
 * Address ranges: 10073d40-10073d9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10073d40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,uint param_7)

{
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  uint uStack_24;
  undefined4 local_20;
  
  param_7 = param_7 & 0xf;
  uStack_24 = param_7 | (param_7 | (param_7 | param_7 << 4) << 4) << 4;
  local_38 = (param_6 & 0x1f) << 0xb | 0x7000058;
  uStack_34 = 0x307000;
  uStack_3c = 7;
  local_40 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  local_20 = param_5;
  FUN_10073700(&local_40,0x24);
  return;
}

