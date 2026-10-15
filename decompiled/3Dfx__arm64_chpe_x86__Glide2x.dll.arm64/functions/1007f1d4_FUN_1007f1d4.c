/*
 * FUN_1007f1d4 at 1007f1d4
 * undefined FUN_1007f1d4(void)
 * Address ranges: 1007f1d4-1007f243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007f1d4(void)

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
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  
  uVar1 = (uint)unaff_w28 & 0xfffffff0;
  *(ulonglong *)(uVar1 - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(uVar1 - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10093020)();
  }
  uVar2 = unaff_w28[9];
  uVar8 = unaff_w28[10];
  uVar3 = unaff_w28[0xb];
  uVar4 = unaff_w28[1];
  uVar9 = unaff_w28[2];
  uVar5 = unaff_w28[3];
  uVar10 = unaff_w28[4];
  uVar6 = unaff_w28[5];
  uVar11 = unaff_w28[6];
  uVar7 = unaff_w28[7];
  uVar12 = unaff_w28[8];
  *(uint *)(uVar1 - 0x18) = unaff_w28[0xc];
  *(uint *)(uVar1 - 0x20) = uVar3;
  *(uint *)(uVar1 - 0x28) = uVar8;
  *(uint *)(uVar1 - 0x30) = uVar2;
  _guTexChangeAttributes_48_native(uVar4,uVar9,uVar5,uVar10,uVar6,uVar11,uVar7,uVar12);
                    /* WARNING: Could not recover jumptable at 0x1007f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x34);
  return;
}

