/*
 * FUN_1013c024 at 1013c024
 * undefined FUN_1013c024(void)
 * Address ranges: 1013c024-1013c0b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1013c024(void)

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
  uint uVar15;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  undefined8 uVar16;
  
  uVar1 = (uint)unaff_w28 & 0xfffffff0;
  *(ulonglong *)(uVar1 - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(uVar1 - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1015c028)();
  }
  uVar2 = unaff_w28[9];
  uVar8 = unaff_w28[10];
  uVar3 = unaff_w28[0x10];
  uVar9 = unaff_w28[0x11];
  uVar16 = *(undefined8 *)(unaff_w28 + 0xc);
  uVar14 = unaff_w28[0xb];
  uVar15 = unaff_w28[0x12];
  uVar4 = unaff_w28[1];
  uVar10 = unaff_w28[2];
  uVar5 = unaff_w28[3];
  uVar11 = unaff_w28[4];
  uVar6 = unaff_w28[5];
  uVar12 = unaff_w28[6];
  uVar7 = unaff_w28[7];
  uVar13 = unaff_w28[8];
  *(undefined8 *)(uVar1 - 0x30) = *(undefined8 *)(unaff_w28 + 0xe);
  *(undefined8 *)(uVar1 - 0x38) = uVar16;
  *(uint *)(uVar1 - 0x18) = uVar15;
  *(uint *)(uVar1 - 0x20) = uVar9;
  *(uint *)(uVar1 - 0x28) = uVar3;
  *(uint *)(uVar1 - 0x40) = uVar14;
  *(uint *)(uVar1 - 0x48) = uVar8;
  *(uint *)(uVar1 - 0x50) = uVar2;
  FUN_100405d0(uVar4,uVar10,uVar5,uVar11,uVar6,uVar12,uVar7,uVar13);
                    /* WARNING: Could not recover jumptable at 0x1013c0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(4);
  return;
}

