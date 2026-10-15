/*
 * FUN_180213940 at 180213940
 * undefined FUN_180213940(void)
 * Address ranges: 180213940-1802139fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180213940(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,uint param_8)

{
  int iVar1;
  undefined8 extraout_x9;
  undefined4 local_40 [2];
  uint local_38;
  undefined4 local_30;
  uint local_28;
  undefined4 local_20;
  
  local_40[0] = param_3;
  local_30 = param_5;
  local_38 = param_4;
  iVar1 = FUN_180213038(*param_1);
  if ((iVar1 - 0x40U < 0x11) && ((0x10003U >> (ulonglong)(iVar1 - 0x40U & 0x1f) & 1) != 0)) {
    param_8 = param_8 & 0xf;
    local_38 = param_8 | (param_8 | (param_8 | param_8 << 4) << 4) << 4;
    FUN_180215058(extraout_x9,4,0x4004058,0x107000,local_40,0x10);
  }
  else if (iVar1 == 0x51) {
    param_8 = param_8 & 0xf;
    local_20 = 0;
    local_28 = param_8 | (param_8 | (param_8 | param_8 << 4) << 4) << 4;
    FUN_180215058(extraout_x9,7,0x7004058,0x307000,local_40,0x28);
  }
  return;
}

