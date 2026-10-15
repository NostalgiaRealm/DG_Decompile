/*
 * FUN_1007ecec at 1007ecec
 * undefined FUN_1007ecec(void)
 * Address ranges: 1007ecec-1007ed3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007ecec(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10093020)();
  }
  _grLfbWriteRegion_32_native
            (unaff_w28[1],unaff_w28[2],unaff_w28[3],unaff_w28[4],unaff_w28[5],unaff_w28[6],
             unaff_w28[7],unaff_w28[8]);
                    /* WARNING: Could not recover jumptable at 0x1007ed2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x24);
  return;
}

