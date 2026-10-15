/*
 * FUN_10144544 at 10144544
 * undefined FUN_10144544(void)
 * Address ranges: 10144544-101445a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10144544(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
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
  uVar6 = unaff_w28[2];
  uVar4 = unaff_w28[3];
  uVar7 = unaff_w28[4];
  uVar5 = unaff_w28[5];
  uVar8 = unaff_w28[6];
  *(uint *)(uVar1 - 0x20) = unaff_w28[8];
  FUN_100b5c80(param_1,uVar3,uVar6,uVar4,uVar7,uVar5,uVar8,uVar2);
                    /* WARNING: Could not recover jumptable at 0x10144590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x24);
  return;
}

