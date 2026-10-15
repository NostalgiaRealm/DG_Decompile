/*
 * FUN_1014e55c at 1014e55c
 * undefined FUN_1014e55c(void)
 * Address ranges: 1014e55c-1014e5f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014e55c(void)

{
  undefined8 *puVar1;
  int iVar2;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  undefined8 uVar3;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_1015c028)();
  }
  puVar1 = (undefined8 *)unaff_w28[3];
  if ((unaff_w28[2] < (uint)*(ushort *)(unaff_w28[1] - 0x98)) && (puVar1 != (undefined8 *)0x0)) {
    iVar2 = *(int *)(unaff_w28[1] + unaff_w28[2] * 4 + -0x90);
    uVar3 = *(undefined8 *)(iVar2 + 0x68);
    puVar1[1] = *(undefined8 *)(iVar2 + 0x70);
    *puVar1 = uVar3;
    puVar1[2] = *(undefined8 *)(iVar2 + 0x78);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(iVar2 + 0x80);
  }
                    /* WARNING: Could not recover jumptable at 0x1014e5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0x10);
  return;
}

