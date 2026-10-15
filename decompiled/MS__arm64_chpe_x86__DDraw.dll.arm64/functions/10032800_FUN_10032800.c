/*
 * FUN_10032800 at 10032800
 * undefined FUN_10032800(void)
 * Address ranges: 10032800-100328ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10032800(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_10030738(param_1,param_3,param_5,param_2);
  uVar2 = 0;
  if (param_4 != 0) {
    param_4 = param_4 * 0x2c;
    uVar2 = (uVar1 >> (ulonglong)((byte)(&DAT_100bb79c)[param_4] + 0x18 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_100bb79d)[param_4] & 0x1f) |
            (uVar1 >> (ulonglong)((byte)(&DAT_100bb7a2)[param_4] + 0x18 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_100bb7a3)[param_4] & 0x1f) |
            (uVar1 >> (ulonglong)((byte)(&DAT_100bb79e)[param_4] + 0x10 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_100bb79f)[param_4] & 0x1f) |
            (uVar1 >> (ulonglong)((byte)(&DAT_100bb7a0)[param_4] + 8 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_100bb7a1)[param_4] & 0x1f);
  }
  return uVar2;
}

