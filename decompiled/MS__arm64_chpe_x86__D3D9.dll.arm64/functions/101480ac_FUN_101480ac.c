/*
 * FUN_101480ac at 101480ac
 * undefined FUN_101480ac(void)
 * Address ranges: 101480ac-101480ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101480ac(void)

{
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1015c028)();
  }
  Direct3DShaderValidatorCreate9_native();
                    /* WARNING: Could not recover jumptable at 0x101480dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

