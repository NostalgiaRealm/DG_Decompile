/*
 * FUN_1014a61c at 1014a61c
 * undefined FUN_1014a61c(void)
 * Address ranges: 1014a61c-1014a67f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014a61c(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  uVar1 = (uint)unaff_w28 & 0xfffffff0;
  *(ulonglong *)(uVar1 - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(uVar1 - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1015c028)();
  }
  uVar2 = unaff_w28[9];
  uVar3 = unaff_w28[1];
  uVar7 = unaff_w28[2];
  uVar4 = unaff_w28[3];
  uVar8 = unaff_w28[4];
  uVar5 = unaff_w28[5];
  uVar9 = unaff_w28[6];
  uVar6 = unaff_w28[7];
  uVar10 = unaff_w28[8];
  *(uint *)(uVar1 - 0x18) = unaff_w28[10];
  *(uint *)(uVar1 - 0x20) = uVar2;
  FUN_100dd360(uVar3,uVar7,uVar4,uVar8,uVar5,uVar9,uVar6,uVar10);
                    /* WARNING: Could not recover jumptable at 0x1014a66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x2c);
  return;
}

