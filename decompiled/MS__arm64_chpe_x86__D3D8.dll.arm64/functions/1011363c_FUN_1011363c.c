/*
 * FUN_1011363c at 1011363c
 * undefined FUN_1011363c(void)
 * Address ranges: 1011363c-101136c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011363c(void)

{
  undefined8 *puVar1;
  int iVar2;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_10127028)();
  }
  puVar1 = (undefined8 *)unaff_w28[3];
  if ((unaff_w28[2] < (uint)*(ushort *)(unaff_w28[1] - 0x48)) && (puVar1 != (undefined8 *)0x0)) {
    iVar2 = *(int *)(*(int *)(unaff_w28[1] - 0x40) + unaff_w28[2] * 4);
    uVar5 = *(undefined8 *)(iVar2 + 0x28);
    uVar4 = *(undefined8 *)(iVar2 + 0x40);
    uVar3 = *(undefined8 *)(iVar2 + 0x38);
    puVar1[1] = *(undefined8 *)(iVar2 + 0x30);
    *puVar1 = uVar5;
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x101136b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x10);
  return;
}

