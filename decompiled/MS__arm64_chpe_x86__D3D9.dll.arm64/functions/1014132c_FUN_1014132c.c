/*
 * FUN_1014132c at 1014132c
 * undefined FUN_1014132c(void)
 * Address ranges: 1014132c-10141377
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014132c(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_1015c028)();
  }
  FUN_100730c0(param_1,unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x10141364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

