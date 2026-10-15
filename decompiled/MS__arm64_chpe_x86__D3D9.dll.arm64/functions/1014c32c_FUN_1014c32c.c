/*
 * FUN_1014c32c at 1014c32c
 * undefined FUN_1014c32c(void)
 * Address ranges: 1014c32c-1014c3b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014c32c(void)

{
  uint *puVar1;
  uint uVar2;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1015c028)();
  }
  puVar1 = (uint *)unaff_w28[3];
  if (puVar1 != (uint *)0x0) {
    uVar2 = *(int *)(unaff_w28[1] + 0x18) << 2;
    if (unaff_w28[2] == 0) {
      *puVar1 = uVar2;
    }
    else if (uVar2 <= *puVar1) {
      FUN_101325a0(unaff_w28[2],*(undefined4 *)(unaff_w28[1] + 0x1c),uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x1014c3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x10);
  return;
}

