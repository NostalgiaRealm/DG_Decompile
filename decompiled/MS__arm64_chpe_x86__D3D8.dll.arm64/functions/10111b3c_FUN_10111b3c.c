/*
 * FUN_10111b3c at 10111b3c
 * undefined FUN_10111b3c(void)
 * Address ranges: 10111b3c-10111baf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10111b3c(void)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  undefined8 uVar4;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10127028)();
  }
  puVar1 = (undefined8 *)unaff_w28[1];
  uVar2 = unaff_w28[2];
  *puVar1 = 0;
  puVar1[1] = 0;
  if (uVar2 < 0x1d) {
    iVar3 = uVar2 * 0x2c;
    uVar4 = *(undefined8 *)(&DAT_10136ec0 + iVar3);
    puVar1[1] = *(undefined8 *)(&DAT_10136ec8 + iVar3);
    *puVar1 = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x10111b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

