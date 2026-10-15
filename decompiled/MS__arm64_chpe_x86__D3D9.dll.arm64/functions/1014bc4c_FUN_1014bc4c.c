/*
 * FUN_1014bc4c at 1014bc4c
 * undefined FUN_1014bc4c(void)
 * Address ranges: 1014bc4c-1014bc9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014bc4c(void)

{
  undefined8 *puVar1;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  undefined8 uVar2;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1015c028)();
  }
  puVar1 = (undefined8 *)unaff_w28[2];
  uVar2 = *(undefined8 *)(unaff_w28[1] + 0x6cc);
  puVar1[1] = *(undefined8 *)(unaff_w28[1] + 0x6d4);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x1014bc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

