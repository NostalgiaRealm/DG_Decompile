/*
 * FUN_100984bc at 100984bc
 * undefined FUN_100984bc(void)
 * Address ranges: 100984bc-100984e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100984bc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_w28;
  
  uVar1 = *(undefined4 *)(unaff_w28 + 8);
  iVar2 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar2 + 0xc38) = *(undefined4 *)(unaff_w28 + 4);
  *(undefined4 *)(iVar2 + 0xc3c) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x100984e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

