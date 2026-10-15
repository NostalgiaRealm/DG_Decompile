/*
 * FUN_180057018 at 180057018
 * undefined __cdecl FUN_180057018(int param_1, longlong * param_2, ulonglong param_3, undefined8 param_4, ulonglong param_5, byte param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 180057018-1800570d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057018(int param_1,longlong *param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5,byte param_6,undefined8 param_7,undefined8 param_8)

{
  ulonglong uVar1;
  
  uVar1 = param_3 & 0xffffffff;
  if ((0x10 < param_1 - 0x40U) || ((0x10003U >> (ulonglong)(param_1 - 0x40U & 0x1f) & 1) == 0)) {
    if ((param_1 - 0x51U & 0xfffcffff) == 0 && param_1 != 0x30051) {
      FUN_180056d68(param_2,7,(ulonglong)((uint)param_6 << 0xb | 0x7000059),0x308e46,uVar1,uVar1,
                    uVar1,param_5 >> 4 & 0xfffffff);
      return;
    }
    if (param_1 == 0x20040 || (param_1 - 0x10040U & 0xfffeffef) != 0) {
      return;
    }
  }
  FUN_180056d68(param_2,4,(ulonglong)((uint)param_6 << 0xb | 0x4000059),0x208e46,uVar1,
                param_5 >> 4 & 0xfffffff,uVar1,param_8);
  return;
}

