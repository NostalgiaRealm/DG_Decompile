/*
 * FUN_100a110c at 100a110c
 * undefined FUN_100a110c(void)
 * Address ranges: 100a110c-100a1163
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a110c(void)

{
  undefined1 (*pauVar1) [16];
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  undefined1 auVar2 [16];
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_100b0028)();
  }
  pauVar1 = (undefined1 (*) [16])unaff_w28[1];
  auVar2 = FUN_10054830(unaff_w28[2],unaff_w28[3]);
  *pauVar1 = auVar2;
                    /* WARNING: Could not recover jumptable at 0x100a1150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

