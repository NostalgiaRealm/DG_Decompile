/*
 * FUN_1800a1488 at 1800a1488
 * undefined FUN_1800a1488(void)
 * Address ranges: 1800a1488-1800a152f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800a1488(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_1800a0038(param_1,param_3,param_5,param_2);
  uVar3 = 0;
  if (param_4 != 0) {
    lVar1 = (longlong)param_4 * 0x2c;
    uVar3 = (uVar2 >> (ulonglong)((byte)(&DAT_18024a972)[lVar1] + 0x18 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_18024a973)[lVar1] & 0x1f) |
            (uVar2 >> (ulonglong)((byte)(&DAT_18024a96c)[lVar1] + 0x18 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_18024a96d)[lVar1] & 0x1f) |
            (uVar2 >> (ulonglong)((byte)(&DAT_18024a96e)[lVar1] + 0x10 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_18024a96f)[lVar1] & 0x1f) |
            (uVar2 >> (ulonglong)((byte)(&DAT_18024a970)[lVar1] + 8 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_18024a971)[lVar1] & 0x1f);
  }
  return uVar3;
}

