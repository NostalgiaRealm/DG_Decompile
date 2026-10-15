/*
 * FUN_10121858 at 10121858
 * undefined FUN_10121858(void)
 * Address ranges: 10121858-101218fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10121858(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 extraout_w1;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  
  iVar1 = FUN_10122f60(*param_1);
  local_40 = extraout_w1;
  uStack_30 = param_3;
  if ((iVar1 - 0x40U & 0xffffffee) == 0 && iVar1 != 0x51) {
    local_2c = 0x10;
    local_34 = 0x107000;
    local_38 = 0x40000a2;
    uStack_3c = 4;
    FUN_10122cd8(&local_40,0x18);
  }
  else if (iVar1 == 0x51) {
    local_24 = 0x10;
    uStack_20 = 0;
    local_34 = 0x307000;
    local_38 = 0x70060a2;
    uStack_3c = 7;
    local_2c = param_4;
    uStack_28 = param_5;
    FUN_10122cd8(&local_40,0x24);
  }
  return;
}

