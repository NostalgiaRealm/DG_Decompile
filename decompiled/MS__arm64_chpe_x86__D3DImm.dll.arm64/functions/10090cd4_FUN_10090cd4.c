/*
 * FUN_10090cd4 at 10090cd4
 * undefined FUN_10090cd4(void)
 * Address ranges: 10090cd4-10090d43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10090cd4(void)

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
    (*DAT_1009b028)();
  }
  puVar1 = (undefined8 *)unaff_w28[2];
  if (puVar1 != (undefined8 *)0x0) {
    iVar2 = *(int *)(unaff_w28[1] + 4);
    uVar5 = *(undefined8 *)(iVar2 + 0x5c);
    uVar4 = *(undefined8 *)(iVar2 + 0x74);
    uVar3 = *(undefined8 *)(iVar2 + 0x6c);
    puVar1[1] = *(undefined8 *)(iVar2 + 100);
    *puVar1 = uVar5;
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    uVar3 = *(undefined8 *)(iVar2 + 0x7c);
    puVar1[5] = *(undefined8 *)(iVar2 + 0x84);
    puVar1[4] = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x10090d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

