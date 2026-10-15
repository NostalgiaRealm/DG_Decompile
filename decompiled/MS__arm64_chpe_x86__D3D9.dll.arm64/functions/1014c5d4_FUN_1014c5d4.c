/*
 * FUN_1014c5d4 at 1014c5d4
 * undefined FUN_1014c5d4(void)
 * Address ranges: 1014c5d4-1014c65b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c5d4(void)

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
  if ((DAT_10175c74 & 1) == 0) {
    DAT_10175c74 = DAT_10175c74 | 1;
    uRam10175b60 = uRam10163250;
    _DAT_10175b58 = _DAT_10163248;
    uRam10175b70 = uRam10163240;
    _DAT_10175b68 = _DAT_10163238;
  }
                    /* WARNING: Could not recover jumptable at 0x1014c648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

