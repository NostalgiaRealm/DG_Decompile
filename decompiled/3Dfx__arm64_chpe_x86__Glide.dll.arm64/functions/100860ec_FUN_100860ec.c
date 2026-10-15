/*
 * FUN_100860ec at 100860ec
 * undefined FUN_100860ec(void)
 * Address ranges: 100860ec-10086177
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100860ec(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int in_w5;
  undefined8 uVar5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = (uint)unaff_w28 & 0xfffffff0;
  *(ulonglong *)(uVar1 - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(uVar1 - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_10093020)();
  }
  uVar2 = unaff_w28[1];
  uVar8 = *(undefined8 *)(unaff_w28 + 4);
  uVar7 = *(undefined8 *)(unaff_w28 + 2);
  uVar6 = *(undefined8 *)(unaff_w28 + 8);
  uVar5 = *(undefined8 *)(unaff_w28 + 6);
  uVar3 = unaff_w28[0xd];
  *(undefined8 *)(uVar1 - 0x50) = *(undefined8 *)(unaff_w28 + 10);
  uVar4 = unaff_w28[0xc];
  *(undefined8 *)(uVar1 - 0x68) = uVar8;
  *(undefined8 *)(uVar1 - 0x70) = uVar7;
  *(undefined8 *)(uVar1 - 0x58) = uVar6;
  *(undefined8 *)(uVar1 - 0x60) = uVar5;
  uVar9 = *(undefined8 *)(uVar1 - 0x68);
  uVar8 = *(undefined8 *)(uVar1 - 0x70);
  uVar7 = *(undefined8 *)(uVar1 - 0x58);
  uVar6 = *(undefined8 *)(uVar1 - 0x60);
  *(uint *)(uVar1 - 0x48) = uVar4;
  uVar5 = *(undefined8 *)(uVar1 - 0x50);
  *(undefined8 *)(uVar1 - 0x38) = uVar9;
  *(undefined8 *)(uVar1 - 0x40) = uVar8;
  *(undefined8 *)(uVar1 - 0x28) = uVar7;
  *(undefined8 *)(uVar1 - 0x30) = uVar6;
  *(undefined8 *)(uVar1 - 0x20) = uVar5;
  *(undefined4 *)(uVar1 - 0x18) = *(undefined4 *)(uVar1 - 0x48);
  FUN_100440c0(param_1,uVar2,uVar1 - 0x40,uVar3);
                    /* WARNING: Could not recover jumptable at 0x10086164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x38);
  return;
}

