/*
 * FUN_1007f14c at 1007f14c
 * undefined FUN_1007f14c(void)
 * Address ranges: 1007f14c-1007f1cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007f14c(void)

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
  uint uVar15;
  
  uVar1 = (uint)unaff_w28 & 0xfffffff0;
  *(ulonglong *)(uVar1 - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(uVar1 - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10093020)();
  }
  uVar2 = unaff_w28[9];
  uVar8 = unaff_w28[10];
  uVar3 = unaff_w28[0xb];
  uVar9 = unaff_w28[0xc];
  uVar14 = unaff_w28[0xd];
  uVar4 = unaff_w28[1];
  uVar10 = unaff_w28[2];
  uVar5 = unaff_w28[3];
  uVar11 = unaff_w28[4];
  uVar6 = unaff_w28[5];
  uVar12 = unaff_w28[6];
  uVar7 = unaff_w28[7];
  uVar13 = unaff_w28[8];
  *(uint *)(uVar1 - 0x18) = unaff_w28[0xf];
  uVar15 = unaff_w28[0xe];
  *(uint *)(uVar1 - 0x20) = uVar14;
  *(uint *)(uVar1 - 0x28) = uVar9;
  *(uint *)(uVar1 - 0x30) = uVar3;
  *(uint *)(uVar1 - 0x38) = uVar8;
  *(uint *)(uVar1 - 0x40) = uVar2;
  _guTexAllocateMemory_60_native(uVar15,uVar4,uVar10,uVar5,uVar11,uVar6,uVar12,uVar7,uVar13);
                    /* WARNING: Could not recover jumptable at 0x1007f1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x40);
  return;
}

