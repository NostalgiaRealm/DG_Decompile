/*
 * FUN_1014673c at 1014673c
 * undefined FUN_1014673c(void)
 * Address ranges: 1014673c-101467af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014673c(void)

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
    (*DAT_1015c028)();
  }
  puVar1 = (undefined8 *)unaff_w28[1];
  uVar2 = unaff_w28[2];
  *puVar1 = 0;
  puVar1[1] = 0;
  if (uVar2 < 0x2b) {
    iVar3 = uVar2 * 0x2c;
    uVar4 = *(undefined8 *)(&DAT_1016f210 + iVar3);
    puVar1[1] = *(undefined8 *)(&DAT_1016f218 + iVar3);
    *puVar1 = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x1014679c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

