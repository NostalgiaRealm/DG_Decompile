/*
 * FUN_180213a18 at 180213a18
 * undefined FUN_180213a18(void)
 * Address ranges: 180213a18-180213abb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180213a18(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  undefined8 extraout_x10;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  
  local_40[0] = param_3;
  local_30 = param_5;
  local_38 = param_4;
  iVar1 = FUN_180213038(*param_1);
  if ((iVar1 - 0x40U < 0x11) && ((0x10003U >> (ulonglong)(iVar1 - 0x40U & 0x1f) & 1) != 0)) {
    local_38 = 0x10;
    FUN_180215058(extraout_x10,4,0x40000a2,0x107000,local_40,0x10);
  }
  else if (iVar1 == 0x51) {
    local_28 = 0x10;
    local_20 = 0;
    FUN_180215058(extraout_x10,7,0x70060a2,0x307000,local_40,0x28);
  }
  return;
}

