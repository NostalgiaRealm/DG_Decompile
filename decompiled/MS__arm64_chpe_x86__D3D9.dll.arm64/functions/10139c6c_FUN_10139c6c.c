/*
 * FUN_10139c6c at 10139c6c
 * undefined FUN_10139c6c(void)
 * Address ranges: 10139c6c-10139ccb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10139c6c(int param_1)

{
  undefined8 *puVar1;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    param_1 = (*DAT_1015c028)();
  }
  puVar1 = (undefined8 *)unaff_w28[1];
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    puVar1[1] = *(undefined8 *)(param_1 + 0x30);
    *puVar1 = uVar4;
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x10139cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(8);
  return;
}

