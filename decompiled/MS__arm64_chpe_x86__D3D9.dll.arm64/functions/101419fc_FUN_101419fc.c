/*
 * FUN_101419fc at 101419fc
 * undefined FUN_101419fc(void)
 * Address ranges: 101419fc-10141a7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101419fc(undefined4 param_1)

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
    param_1 = (*DAT_1015c028)();
  }
  uVar2 = unaff_w28[7];
  uVar3 = unaff_w28[1];
  uVar9 = unaff_w28[2];
  uVar4 = unaff_w28[3];
  uVar10 = unaff_w28[4];
  uVar5 = unaff_w28[5];
  uVar11 = unaff_w28[6];
  uVar6 = unaff_w28[9];
  uVar12 = unaff_w28[10];
  uVar7 = unaff_w28[0xb];
  uVar13 = unaff_w28[0xc];
  uVar8 = unaff_w28[0xd];
  uVar14 = unaff_w28[0xe];
  *(uint *)(uVar1 - 0x50) = unaff_w28[8];
  *(uint *)(uVar1 - 0x40) = uVar12;
  *(uint *)(uVar1 - 0x30) = uVar13;
  *(uint *)(uVar1 - 0x20) = uVar14;
  *(uint *)(uVar1 - 0x28) = uVar8;
  *(uint *)(uVar1 - 0x38) = uVar7;
  *(uint *)(uVar1 - 0x48) = uVar6;
  FUN_1007bd20(param_1,uVar3,uVar9,uVar4,uVar10,uVar5,uVar11,uVar2);
                    /* WARNING: Could not recover jumptable at 0x10141a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x3c);
  return;
}

