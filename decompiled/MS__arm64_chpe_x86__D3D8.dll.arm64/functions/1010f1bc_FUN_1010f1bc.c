/*
 * FUN_1010f1bc at 1010f1bc
 * undefined FUN_1010f1bc(void)
 * Address ranges: 1010f1bc-1010f1e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010f1bc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_w28;
  
  uVar1 = *(undefined4 *)(unaff_w28 + 8);
  iVar2 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar2 + 0xc38) = *(undefined4 *)(unaff_w28 + 4);
  *(undefined4 *)(iVar2 + 0xc3c) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x1010f1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

