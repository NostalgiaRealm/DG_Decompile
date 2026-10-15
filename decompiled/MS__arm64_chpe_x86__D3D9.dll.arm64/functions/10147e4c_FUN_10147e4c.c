/*
 * FUN_10147e4c at 10147e4c
 * undefined FUN_10147e4c(void)
 * Address ranges: 10147e4c-10147ec7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10147e4c(uint *param_1)

{
  uint uVar1;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  undefined8 uVar2;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (uint *)(*DAT_1015c028)();
  }
  uVar1 = *param_1;
  if (uVar1 < 3) {
    uVar2 = *(undefined8 *)unaff_w28[1];
    *(undefined8 *)(param_1 + (uVar1 + 1) * 4 + 2) = ((undefined8 *)unaff_w28[1])[1];
    *(undefined8 *)(param_1 + (uVar1 + 1) * 4) = uVar2;
    *param_1 = *param_1 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x10147eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

