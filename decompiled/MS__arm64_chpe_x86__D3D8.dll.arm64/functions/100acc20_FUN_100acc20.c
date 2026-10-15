/*
 * FUN_100acc20 at 100acc20
 * undefined FUN_100acc20(void)
 * Address ranges: 100acc20-100acccb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100acc20(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_100aa9e8(param_1,param_3,param_5,param_2);
  uVar2 = 0;
  if (param_4 != 0) {
    param_4 = param_4 * 0x2c;
    uVar2 = (uVar1 >> (ulonglong)((byte)(&DAT_10136edc)[param_4] + 0x18 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_10136edd)[param_4] & 0x1f) |
            (uVar1 >> (ulonglong)((byte)(&DAT_10136ee2)[param_4] + 0x18 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_10136ee3)[param_4] & 0x1f) |
            (uVar1 >> (ulonglong)((byte)(&DAT_10136ede)[param_4] + 0x10 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_10136edf)[param_4] & 0x1f) |
            (uVar1 >> (ulonglong)((byte)(&DAT_10136ee0)[param_4] + 8 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_10136ee1)[param_4] & 0x1f);
  }
  return uVar2;
}

