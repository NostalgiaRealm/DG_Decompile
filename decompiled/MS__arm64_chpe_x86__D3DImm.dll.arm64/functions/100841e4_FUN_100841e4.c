/*
 * FUN_100841e4 at 100841e4
 * undefined FUN_100841e4(void)
 * Address ranges: 100841e4-10084233
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100841e4(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_1009b028)();
  }
  FUN_100064e0(param_1,unaff_w28[1],*(undefined8 *)(unaff_w28 + 2),unaff_w28[4],unaff_w28[5]);
                    /* WARNING: Could not recover jumptable at 0x10084220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x18);
  return;
}

