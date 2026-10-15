/*
 * FUN_1008281c at 1008281c
 * undefined FUN_1008281c(void)
 * Address ranges: 1008281c-1008286b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008281c(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10097020)();
  }
  _grTexDownloadMipMapLevel_32_native
            (unaff_w28[1],unaff_w28[2],unaff_w28[3],unaff_w28[4],unaff_w28[5],unaff_w28[6],
             unaff_w28[7],unaff_w28[8]);
                    /* WARNING: Could not recover jumptable at 0x10082858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x24);
  return;
}

