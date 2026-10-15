/*
 * FUN_1010af0c at 1010af0c
 * undefined FUN_1010af0c(void)
 * Address ranges: 1010af0c-1010af4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010af0c(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10127028)();
  }
  FUN_10054e40(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1010af3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

