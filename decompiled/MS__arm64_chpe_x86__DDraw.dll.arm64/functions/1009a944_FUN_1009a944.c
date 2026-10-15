/*
 * FUN_1009a944 at 1009a944
 * undefined FUN_1009a944(void)
 * Address ranges: 1009a944-1009a9b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009a944(void)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int in_w5;
  uint *unaff_w28;
  undefined4 unaff_000040e4;
  ulonglong unaff_x29;
  undefined8 uVar4;
  
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 0x10) = unaff_x29 | (ulonglong)*unaff_w28 << 0x20;
  *(ulonglong *)(((uint)unaff_w28 & 0xfffffff0) - 8) = CONCAT44(unaff_000040e4,unaff_w28);
  if (-1 < in_w5) {
    (*DAT_100b0028)();
  }
  puVar1 = (undefined8 *)unaff_w28[1];
  uVar2 = unaff_w28[2];
  *puVar1 = 0;
  puVar1[1] = 0;
  if (uVar2 < 0x1d) {
    iVar3 = uVar2 * 0x2c;
    uVar4 = *(undefined8 *)(&DAT_100bb780 + iVar3);
    puVar1[1] = *(undefined8 *)(&DAT_100bb788 + iVar3);
    *puVar1 = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x1009a9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetFunctionPointer)(0xc);
  return;
}

