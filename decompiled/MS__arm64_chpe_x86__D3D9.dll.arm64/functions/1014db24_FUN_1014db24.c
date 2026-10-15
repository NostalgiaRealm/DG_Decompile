/*
 * FUN_1014db24 at 1014db24
 * undefined FUN_1014db24(void)
 * Address ranges: 1014db24-1014db9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014db24(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1015c028)();
  }
  uVar2 = unaff_w28[1];
  uVar3 = unaff_w28[2];
  if ((uint *)unaff_w28[3] != (uint *)0x0) {
    puVar1 = (uint *)(uVar2 + 0x270);
    *(uint *)unaff_w28[3] = *puVar1;
    if (uVar3 != 0) {
      FUN_101325a0(uVar3,*(undefined4 *)(uVar2 + 0x26c),((ulonglong)*puVar1 & 0x1fffffff) << 3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x1014db8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x10);
  return;
}

