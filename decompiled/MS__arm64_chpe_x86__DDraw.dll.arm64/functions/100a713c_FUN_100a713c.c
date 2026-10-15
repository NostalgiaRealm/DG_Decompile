/*
 * FUN_100a713c at 100a713c
 * undefined FUN_100a713c(void)
 * Address ranges: 100a713c-100a718f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a713c(void)

{
  longlong lVar1;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_100b0028)();
  }
  lVar1 = FUN_10091840(unaff_w28[1],unaff_w28[2],unaff_w28[3]);
                    /* WARNING: Could not recover jumptable at 0x100a717c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4,lVar1 >> 0x20 & 0xffffffff);
  return;
}

