/*
 * FUN_101175b4 at 101175b4
 * undefined FUN_101175b4(void)
 * Address ranges: 101175b4-10117613
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101175b4(void)

{
  uint uVar1;
  undefined8 *puVar2;
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
  uVar1 = unaff_w28[1];
  puVar2 = (undefined8 *)unaff_w28[2];
  if (puVar2 != (undefined8 *)0x0) {
    uVar5 = *(undefined8 *)(uVar1 - 0x2c);
    uVar4 = *(undefined8 *)(uVar1 - 0x14);
    uVar3 = *(undefined8 *)(uVar1 - 0x1c);
    puVar2[1] = *(undefined8 *)(uVar1 - 0x24);
    *puVar2 = uVar5;
    puVar2[3] = uVar4;
    puVar2[2] = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x10117600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

