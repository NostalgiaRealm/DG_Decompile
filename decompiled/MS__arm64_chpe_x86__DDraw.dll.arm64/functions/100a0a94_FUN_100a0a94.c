/*
 * FUN_100a0a94 at 100a0a94
 * undefined FUN_100a0a94(void)
 * Address ranges: 100a0a94-100a0afb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a0a94(void)

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
    (*DAT_100b0028)();
  }
  puVar1 = (undefined8 *)unaff_w28[2];
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(*(int *)(unaff_w28[1] + 4) + 0x1b8);
    puVar1[1] = *(undefined8 *)(*(int *)(unaff_w28[1] + 4) + 0x1c0);
    *puVar1 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x100a0ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

