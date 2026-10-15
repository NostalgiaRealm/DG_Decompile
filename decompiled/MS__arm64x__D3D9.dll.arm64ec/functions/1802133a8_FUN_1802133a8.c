/*
 * FUN_1802133a8 at 1802133a8
 * undefined FUN_1802133a8(void)
 * Address ranges: 1802133a8-18021347f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802133a8(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  ulonglong param_5,byte param_6)

{
  undefined4 local_40 [2];
  ulonglong local_38;
  undefined4 local_30;
  ulonglong local_28;
  undefined4 local_20;
  
  local_40[0] = param_3;
  if ((0x10 < param_1 - 0x40U) || ((0x10003U >> (ulonglong)(param_1 - 0x40U & 0x1f) & 1) == 0)) {
    if ((param_1 - 0x51U & 0xfffcffff) == 0 && param_1 != 0x30051) {
      local_28 = param_5 >> 4 & 0xfffffff;
      local_38 = CONCAT44(local_38._4_4_,param_3);
      local_30 = param_3;
      local_20 = param_4;
      FUN_180215058(param_2,7,(uint)param_6 << 0xb | 0x7000059,0x308e46,local_40,0x28);
      return;
    }
    if (param_1 == 0x20040 || (param_1 - 0x10040U & 0xfffeffef) != 0) {
      return;
    }
  }
  local_38 = param_5 >> 4 & 0xfffffff;
  FUN_180215058(param_2,4,(uint)param_6 << 0xb | 0x4000059,0x208e46,local_40,0x10);
  return;
}

