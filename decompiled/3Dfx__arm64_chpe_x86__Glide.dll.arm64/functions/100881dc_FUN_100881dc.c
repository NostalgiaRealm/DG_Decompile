/*
 * FUN_100881dc at 100881dc
 * undefined FUN_100881dc(void)
 * Address ranges: 100881dc-10088223
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100881dc(void)

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
  FUN_100610f0(unaff_w28[1],unaff_w28[2],unaff_w28[3],unaff_w28[4]);
                    /* WARNING: Could not recover jumptable at 0x10088210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x14);
  return;
}

