/*
 * FUN_10113e7c at 10113e7c
 * undefined FUN_10113e7c(void)
 * Address ranges: 10113e7c-10113ec3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10113e7c(void)

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
  FUN_100b29a0(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x10113eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

