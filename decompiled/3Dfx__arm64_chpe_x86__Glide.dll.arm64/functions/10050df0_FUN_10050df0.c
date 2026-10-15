/*
 * FUN_10050df0 at 10050df0
 * undefined FUN_10050df0(void)
 * Address ranges: 10050df0-10050e7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10050df0(int *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int *local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_40 = param_1;
  uStack_3c = param_2;
  uStack_34 = param_5;
  if (*param_1 == 0x51) {
    local_28 = 0x100;
    local_24 = 0;
    local_30 = 1;
    local_38 = 0x81;
    local_2c = param_3;
    FUN_1006fda0(&local_40,0x20);
  }
  else {
    uStack_1c = 0x100;
    local_2c = param_1[0x14];
    local_18 = 0;
    local_24 = 0x3f800000;
    local_28 = 0;
    local_30 = 1;
    local_38 = 0xe;
    local_20 = param_3;
    FUN_1006fda0(&local_40,0x2c);
  }
  return;
}

