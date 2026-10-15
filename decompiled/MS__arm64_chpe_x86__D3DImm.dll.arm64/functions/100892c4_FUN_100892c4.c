/*
 * FUN_100892c4 at 100892c4
 * undefined FUN_100892c4(void)
 * Address ranges: 100892c4-1008934b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100892c4(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_w5;
  undefined8 uVar4;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = (uint)unaff_w28 & 0xfffffff0;
  *(ulonglong *)(uVar1 - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(uVar1 - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_1009b028)();
  }
  uVar2 = unaff_w28[1];
  uVar7 = *(undefined8 *)(unaff_w28 + 4);
  uVar6 = *(undefined8 *)(unaff_w28 + 2);
  uVar5 = *(undefined8 *)(unaff_w28 + 8);
  uVar4 = *(undefined8 *)(unaff_w28 + 6);
  *(undefined8 *)(uVar1 - 0x50) = *(undefined8 *)(unaff_w28 + 10);
  uVar3 = unaff_w28[0xc];
  *(undefined8 *)(uVar1 - 0x68) = uVar7;
  *(undefined8 *)(uVar1 - 0x70) = uVar6;
  *(undefined8 *)(uVar1 - 0x58) = uVar5;
  *(undefined8 *)(uVar1 - 0x60) = uVar4;
  uVar8 = *(undefined8 *)(uVar1 - 0x68);
  uVar7 = *(undefined8 *)(uVar1 - 0x70);
  uVar6 = *(undefined8 *)(uVar1 - 0x58);
  uVar5 = *(undefined8 *)(uVar1 - 0x60);
  *(uint *)(uVar1 - 0x48) = uVar3;
  uVar4 = *(undefined8 *)(uVar1 - 0x50);
  *(undefined8 *)(uVar1 - 0x38) = uVar8;
  *(undefined8 *)(uVar1 - 0x40) = uVar7;
  *(undefined8 *)(uVar1 - 0x28) = uVar6;
  *(undefined8 *)(uVar1 - 0x30) = uVar5;
  *(undefined8 *)(uVar1 - 0x20) = uVar4;
  *(undefined4 *)(uVar1 - 0x18) = *(undefined4 *)(uVar1 - 0x48);
  FUN_10051c70(param_1,uVar2,uVar1 - 0x40);
                    /* WARNING: Could not recover jumptable at 0x10089338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x34);
  return;
}

