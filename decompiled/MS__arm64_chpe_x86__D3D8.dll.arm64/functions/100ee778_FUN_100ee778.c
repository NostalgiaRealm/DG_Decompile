/*
 * FUN_100ee778 at 100ee778
 * undefined FUN_100ee778(void)
 * Address ranges: 100ee778-100ee833
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ee778(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,uint param_8)

{
  int iVar1;
  undefined4 extraout_w1;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  uint local_2c;
  undefined4 uStack_28;
  uint local_24;
  undefined4 uStack_20;
  
  iVar1 = FUN_100ef9e8(*param_1);
  local_40 = extraout_w1;
  uStack_30 = param_3;
  if ((iVar1 - 0x40U & 0xffffffee) == 0 && iVar1 != 0x51) {
    param_8 = param_8 & 0xf;
    local_2c = param_8 | (param_8 | (param_8 | param_8 << 4) << 4) << 4;
    local_34 = 0x107000;
    local_38 = 0x4004058;
    uStack_3c = 4;
    FUN_100ef760(&local_40,0x18);
  }
  else if (iVar1 == 0x51) {
    param_8 = param_8 & 0xf;
    local_24 = param_8 | (param_8 | (param_8 | param_8 << 4) << 4) << 4;
    uStack_20 = 0;
    local_34 = 0x307000;
    local_38 = 0x7004058;
    uStack_3c = 7;
    local_2c = param_4;
    uStack_28 = param_5;
    FUN_100ef760(&local_40,0x24);
  }
  return;
}

