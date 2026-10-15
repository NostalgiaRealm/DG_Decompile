/*
 * FUN_1008f1dc at 1008f1dc
 * undefined FUN_1008f1dc(void)
 * Address ranges: 1008f1dc-1008f243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008f1dc(undefined4 param_1)

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
    param_1 = (*DAT_1009d020)();
  }
  uVar2 = unaff_w28[7];
  uVar3 = unaff_w28[1];
  uVar7 = unaff_w28[2];
  uVar4 = unaff_w28[3];
  uVar8 = unaff_w28[4];
  uVar5 = unaff_w28[5];
  uVar9 = unaff_w28[6];
  uVar6 = unaff_w28[9];
  uVar10 = unaff_w28[10];
  *(uint *)(uVar1 - 0x30) = unaff_w28[8];
  *(uint *)(uVar1 - 0x20) = uVar10;
  *(uint *)(uVar1 - 0x28) = uVar6;
  FUN_10037900(param_1,uVar3,uVar7,uVar4,uVar8,uVar5,uVar9,uVar2);
                    /* WARNING: Could not recover jumptable at 0x1008f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x2c);
  return;
}

