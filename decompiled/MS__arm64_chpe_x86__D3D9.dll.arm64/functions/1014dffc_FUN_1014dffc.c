/*
 * FUN_1014dffc at 1014dffc
 * undefined FUN_1014dffc(void)
 * Address ranges: 1014dffc-1014e06b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014dffc(void)

{
  uint uVar1;
  undefined8 *puVar2;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  undefined8 uVar3;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1015c028)();
  }
  uVar1 = unaff_w28[1];
  puVar2 = (undefined8 *)unaff_w28[2];
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)(uVar1 - 0x28);
    puVar2[1] = *(undefined8 *)(uVar1 - 0x20);
    *puVar2 = uVar3;
    puVar2[2] = *(undefined8 *)(uVar1 - 0x18);
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(uVar1 - 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x1014e058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

