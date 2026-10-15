/*
 * FUN_101046ac at 101046ac
 * undefined FUN_101046ac(void)
 * Address ranges: 101046ac-1010472f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101046ac(undefined4 param_1)

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
  uint uVar14;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  uVar1 = (uint)unaff_w28 & 0xfffffff0;
  *(ulonglong *)(uVar1 - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(uVar1 - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_10127028)();
  }
  uVar2 = unaff_w28[7];
  uVar9 = unaff_w28[8];
  uVar3 = unaff_w28[9];
  uVar10 = unaff_w28[10];
  uVar4 = unaff_w28[0xb];
  uVar5 = unaff_w28[0xd];
  uVar11 = unaff_w28[0xe];
  uVar6 = unaff_w28[1];
  uVar12 = unaff_w28[2];
  uVar7 = unaff_w28[3];
  uVar13 = unaff_w28[4];
  uVar8 = unaff_w28[5];
  uVar14 = unaff_w28[6];
  *(uint *)(uVar1 - 0x30) = unaff_w28[0xc];
  *(uint *)(uVar1 - 0x20) = uVar11;
  *(uint *)(uVar1 - 0x28) = uVar5;
  *(uint *)(uVar1 - 0x38) = uVar4;
  *(uint *)(uVar1 - 0x40) = uVar10;
  *(uint *)(uVar1 - 0x48) = uVar3;
  *(uint *)(uVar1 - 0x50) = uVar9;
  FUN_10007ba0(param_1,uVar6,uVar12,uVar7,uVar13,uVar8,uVar14,uVar2);
                    /* WARNING: Could not recover jumptable at 0x1010471c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x3c);
  return;
}

