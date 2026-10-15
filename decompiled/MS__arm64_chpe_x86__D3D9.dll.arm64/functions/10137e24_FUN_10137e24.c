/*
 * FUN_10137e24 at 10137e24
 * undefined FUN_10137e24(void)
 * Address ranges: 10137e24-10137e8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10137e24(undefined4 param_1)

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
    param_1 = (*DAT_1015c028)();
  }
  uVar2 = unaff_w28[7];
  uVar3 = unaff_w28[9];
  uVar7 = unaff_w28[10];
  uVar4 = unaff_w28[1];
  uVar8 = unaff_w28[2];
  uVar5 = unaff_w28[3];
  uVar9 = unaff_w28[4];
  uVar6 = unaff_w28[5];
  uVar10 = unaff_w28[6];
  *(uint *)(uVar1 - 0x30) = unaff_w28[8];
  *(uint *)(uVar1 - 0x20) = uVar7;
  *(uint *)(uVar1 - 0x28) = uVar3;
  FUN_100085d0(param_1,uVar4,uVar8,uVar5,uVar9,uVar6,uVar10,uVar2);
                    /* WARNING: Could not recover jumptable at 0x10137e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x2c);
  return;
}

