/*
 * FUN_18011ac30 at 18011ac30
 * undefined FUN_18011ac30(void)
 * Address ranges: 18011ac30-18011ac9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011ac30(longlong param_1)

{
  undefined4 uVar1;
  ulonglong extraout_x10;
  ulonglong extraout_x10_00;
  ulonglong extraout_x10_01;
  undefined1 extraout_w11;
  longlong extraout_x12;
  longlong extraout_x12_00;
  
  FUN_1801071f0(*(undefined4 *)(param_1 + 0x98));
  FUN_180107140(extraout_x10 & 0xffffffff);
  FUN_180107018(extraout_x10_00 & 0xffffffff);
  uVar1 = FUN_180106dc0(extraout_x10_01 & 0xffffffff);
  FUN_18012fa50(extraout_x12,*(undefined4 *)(extraout_x12 + 0xa8),
                *(undefined4 *)(extraout_x12 + 0xac),*(undefined4 *)(extraout_x12 + 0xb0),uVar1);
  *(undefined1 *)(extraout_x12_00 + 0x27) = extraout_w11;
  return;
}

