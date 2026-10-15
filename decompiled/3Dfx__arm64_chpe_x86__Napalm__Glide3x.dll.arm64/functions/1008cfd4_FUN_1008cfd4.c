/*
 * FUN_1008cfd4 at 1008cfd4
 * undefined FUN_1008cfd4(void)
 * Address ranges: 1008cfd4-1008d017
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008cfd4(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1009d020)();
  }
  FUN_1002c160(unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1008d004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

