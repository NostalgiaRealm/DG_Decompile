/*
 * FUN_10073e00 at 10073e00
 * undefined FUN_10073e00(void)
 * Address ranges: 10073e00-10073ec7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10073e00(int param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,uint param_5,
                 uint param_6)

{
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  uint uStack_2c;
  undefined4 local_28;
  uint uStack_24;
  undefined4 local_20;
  
  local_40 = param_2;
  local_30 = param_3;
  if ((param_1 - 0x51U & 0xfffcffff) == 0 && param_1 != 0x30051) {
    local_20 = 0;
    local_38 = (param_6 & 0xff) << 0xb | 0x7000059;
    uStack_24 = param_5 >> 4;
    uStack_34 = 0x308e46;
    uStack_3c = 7;
    uStack_2c = param_3;
    local_28 = param_3;
    FUN_10073700(&local_40,0x24);
  }
  else if (((param_1 - 0x10040U & 0xfffeffef) == 0 && param_1 != 0x20040) ||
          ((param_1 - 0x40U < 0x11 && ((0x10003U >> (ulonglong)(param_1 - 0x40U & 0x1f) & 1) != 0)))
          ) {
    local_38 = (param_6 & 0xff) << 0xb | 0x4000059;
    uStack_2c = param_5 >> 4;
    uStack_34 = 0x208e46;
    uStack_3c = 4;
    FUN_10073700(&local_40,0x18);
  }
  return;
}

