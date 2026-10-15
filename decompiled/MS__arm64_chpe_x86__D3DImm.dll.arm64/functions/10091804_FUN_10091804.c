/*
 * FUN_10091804 at 10091804
 * undefined FUN_10091804(void)
 * Address ranges: 10091804-10091877
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10091804(void)

{
  int *piVar1;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  undefined8 uVar2;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1009b028)();
  }
  piVar1 = (int *)unaff_w28[2];
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0x10)) {
    uVar2 = *(undefined8 *)(*(int *)(unaff_w28[1] + 4) + 0x6c);
    *(undefined8 *)(piVar1 + 2) = *(undefined8 *)(*(int *)(unaff_w28[1] + 4) + 0x74);
    *(undefined8 *)piVar1 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x10091864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

