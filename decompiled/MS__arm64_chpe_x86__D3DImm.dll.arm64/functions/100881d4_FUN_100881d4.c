/*
 * FUN_100881d4 at 100881d4
 * undefined FUN_100881d4(void)
 * Address ranges: 100881d4-1008823f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100881d4(void)

{
  undefined8 *puVar1;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1009b028)();
  }
  puVar1 = (undefined8 *)unaff_w28[1];
  uRam100a2f08 = puVar1[1];
  _DAT_100a2f00 = *puVar1;
  DAT_100a2f10 = puVar1[2];
  if (DAT_100a4c50 == '\0') {
    DAT_100a4c50 = '\x01';
  }
                    /* WARNING: Could not recover jumptable at 0x1008822c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

