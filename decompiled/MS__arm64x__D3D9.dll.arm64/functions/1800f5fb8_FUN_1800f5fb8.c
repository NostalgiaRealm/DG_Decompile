/*
 * FUN_1800f5fb8 at 1800f5fb8
 * undefined FUN_1800f5fb8(void)
 * Address ranges: 1800f5fb8-1800f6073
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f5fb8(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  ulonglong param_5,byte param_6)

{
  if ((0x10 < param_1 - 0x40U) || ((0x10003U >> (ulonglong)(param_1 - 0x40U & 0x1f) & 1) == 0)) {
    if ((param_1 - 0x51U & 0xfffcffff) == 0 && param_1 != 0x30051) {
      FUN_1800f5b00(param_2,7,(uint)param_6 << 0xb | 0x7000059,0x308e46,param_3,param_3,param_3,
                    param_5 >> 4 & 0xfffffff,param_4);
      return;
    }
    if (param_1 == 0x20040 || (param_1 - 0x10040U & 0xfffeffef) != 0) {
      return;
    }
  }
  FUN_1800f5b00(param_2,4,(uint)param_6 << 0xb | 0x4000059,0x208e46,param_3,param_5 >> 4 & 0xfffffff
               );
  return;
}

