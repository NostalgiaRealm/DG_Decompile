/*
 * FUN_10090c4c at 10090c4c
 * undefined FUN_10090c4c(void)
 * Address ranges: 10090c4c-10090cc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10090c4c(void)

{
  int *piVar1;
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
  piVar1 = (int *)unaff_w28[2];
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0x30)) {
    iVar2 = *(int *)(unaff_w28[1] + 4);
    uVar5 = *(undefined8 *)piVar1;
    uVar4 = *(undefined8 *)(piVar1 + 6);
    uVar3 = *(undefined8 *)(piVar1 + 4);
    *(undefined8 *)(iVar2 + 100) = *(undefined8 *)(piVar1 + 2);
    *(undefined8 *)(iVar2 + 0x5c) = uVar5;
    *(undefined8 *)(iVar2 + 0x74) = uVar4;
    *(undefined8 *)(iVar2 + 0x6c) = uVar3;
    uVar3 = *(undefined8 *)(piVar1 + 8);
    *(undefined8 *)(iVar2 + 0x84) = *(undefined8 *)(piVar1 + 10);
    *(undefined8 *)(iVar2 + 0x7c) = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x10090cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

