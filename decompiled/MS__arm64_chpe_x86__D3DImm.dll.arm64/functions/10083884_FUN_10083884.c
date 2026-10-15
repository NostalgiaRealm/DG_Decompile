/*
 * FUN_10083884 at 10083884
 * undefined FUN_10083884(void)
 * Address ranges: 10083884-10083903
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10083884(undefined4 param_1)

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
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  uVar1 = (uint)unaff_w28 & 0xfffffff0;
  *(ulonglong *)(uVar1 - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(uVar1 - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_1009b028)();
  }
  uVar2 = unaff_w28[7];
  uVar8 = unaff_w28[8];
  uVar3 = unaff_w28[9];
  uVar9 = unaff_w28[10];
  uVar4 = unaff_w28[0xb];
  uVar13 = unaff_w28[0xd];
  uVar5 = unaff_w28[1];
  uVar10 = unaff_w28[2];
  uVar6 = unaff_w28[3];
  uVar11 = unaff_w28[4];
  uVar7 = unaff_w28[5];
  uVar12 = unaff_w28[6];
  *(uint *)(uVar1 - 0x20) = unaff_w28[0xc];
  *(uint *)(uVar1 - 0x18) = uVar13;
  *(uint *)(uVar1 - 0x28) = uVar4;
  *(uint *)(uVar1 - 0x30) = uVar9;
  *(uint *)(uVar1 - 0x38) = uVar3;
  *(uint *)(uVar1 - 0x40) = uVar8;
  FUN_10003950(param_1,uVar5,uVar10,uVar6,uVar11,uVar7,uVar12,uVar2);
                    /* WARNING: Could not recover jumptable at 0x100838f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x38);
  return;
}

