/*
 * FUN_1011239c at 1011239c
 * undefined FUN_1011239c(void)
 * Address ranges: 1011239c-1011242b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011239c(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int iVar7;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = (uint)unaff_w28 & 0xfffffff0;
  *(ulonglong *)(uVar1 - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(uVar1 - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_10127028)();
  }
  puVar2 = (uint *)unaff_w28[1];
  puVar4 = (uint *)unaff_w28[2];
  puVar3 = (uint *)unaff_w28[3];
  puVar5 = (uint *)unaff_w28[4];
  iVar7 = *(int *)(param_1 + 0x1c) * 0x2c;
  uVar11 = *(undefined8 *)(&DAT_10136ec8 + iVar7);
  uVar10 = *(undefined8 *)(&DAT_10136ec0 + iVar7);
  uVar9 = *(undefined8 *)(&DAT_10136ed8 + iVar7);
  uVar8 = *(undefined8 *)(&DAT_10136ed0 + iVar7);
  *(undefined4 *)(uVar1 - 0x18) = *(undefined4 *)(&DAT_10136ee8 + iVar7);
  bVar6 = *(byte *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x38) = uVar11;
  *(undefined8 *)(uVar1 - 0x40) = uVar10;
  *(undefined8 *)(uVar1 - 0x28) = uVar9;
  *(undefined8 *)(uVar1 - 0x30) = uVar8;
  *puVar2 = (uint)bVar6;
  *puVar4 = (uint)*(byte *)(uVar1 - 0x17);
  *puVar3 = (uint)*(byte *)(uVar1 - 0x16);
  *puVar5 = (uint)*(byte *)(uVar1 - 0x15);
                    /* WARNING: Could not recover jumptable at 0x10112418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x14);
  return;
}

