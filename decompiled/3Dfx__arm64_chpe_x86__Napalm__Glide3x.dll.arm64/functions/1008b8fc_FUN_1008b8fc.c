/*
 * FUN_1008b8fc at 1008b8fc
 * undefined FUN_1008b8fc(void)
 * Address ranges: 1008b8fc-1008b943
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008b8fc(undefined4 param_1)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_1009d020)();
  }
  FUN_100261f0(param_1,unaff_w28[1]);
                    /* WARNING: Could not recover jumptable at 0x1008b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

