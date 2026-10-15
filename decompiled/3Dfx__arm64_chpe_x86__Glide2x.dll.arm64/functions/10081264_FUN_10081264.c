/*
 * FUN_10081264 at 10081264
 * undefined FUN_10081264(void)
 * Address ranges: 10081264-100812d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10081264(undefined4 param_1)

{
  uint uVar1;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  uVar1 = (uint)unaff_w28 & 0xfffffff0;
  *(ulonglong *)(uVar1 - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(uVar1 - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_10093020)();
  }
  *(undefined4 *)(uVar1 - 0x14) = param_1;
  *(uint *)(uVar1 - 0x18) = unaff_w28[1];
  *(uint *)(uVar1 - 0x1c) = unaff_w28[2];
  *(uint *)(uVar1 - 0x20) = unaff_w28[3];
  FUN_10027bb0(*(undefined4 *)(uVar1 - 0x14),*(undefined4 *)(uVar1 - 0x18),
               *(undefined4 *)(uVar1 - 0x1c),*(undefined4 *)(uVar1 - 0x20));
                    /* WARNING: Could not recover jumptable at 0x100812c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x10);
  return;
}

