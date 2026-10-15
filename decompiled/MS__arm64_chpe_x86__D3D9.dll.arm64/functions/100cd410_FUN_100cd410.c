/*
 * FUN_100cd410 at 100cd410
 * undefined FUN_100cd410(void)
 * Address ranges: 100cd410-100cd4bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100cd410(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_100cb1a8(param_1,param_3,param_5,param_2);
  uVar2 = 0;
  if (param_4 != 0) {
    param_4 = param_4 * 0x2c;
    uVar2 = (uVar1 >> (ulonglong)((byte)(&DAT_1016f22c)[param_4] + 0x18 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_1016f22d)[param_4] & 0x1f) |
            (uVar1 >> (ulonglong)((byte)(&DAT_1016f232)[param_4] + 0x18 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_1016f233)[param_4] & 0x1f) |
            (uVar1 >> (ulonglong)((byte)(&DAT_1016f22e)[param_4] + 0x10 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_1016f22f)[param_4] & 0x1f) |
            (uVar1 >> (ulonglong)((byte)(&DAT_1016f230)[param_4] + 8 & 0x1f)) <<
            (ulonglong)((byte)(&DAT_1016f231)[param_4] & 0x1f);
  }
  return uVar2;
}

