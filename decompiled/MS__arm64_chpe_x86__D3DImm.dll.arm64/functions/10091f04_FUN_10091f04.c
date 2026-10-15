/*
 * FUN_10091f04 at 10091f04
 * undefined FUN_10091f04(void)
 * Address ranges: 10091f04-10091f97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10091f04(void)

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
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0x2c)) {
    iVar2 = *(int *)(unaff_w28[1] + 4);
    if (*(char *)(iVar2 + 0xd0) != '\0') {
      uVar5 = *(undefined8 *)(iVar2 + 0xa4);
      uVar4 = *(undefined8 *)(iVar2 + 0xbc);
      uVar3 = *(undefined8 *)(iVar2 + 0xb4);
      *(undefined8 *)(piVar1 + 2) = *(undefined8 *)(iVar2 + 0xac);
      *(undefined8 *)piVar1 = uVar5;
      *(undefined8 *)(piVar1 + 6) = uVar4;
      *(undefined8 *)(piVar1 + 4) = uVar3;
      *(undefined8 *)(piVar1 + 8) = *(undefined8 *)(iVar2 + 0xc4);
      piVar1[10] = *(int *)(iVar2 + 0xcc);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10091f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

