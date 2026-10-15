/*
 * FUN_10143cec at 10143cec
 * undefined FUN_10143cec(void)
 * Address ranges: 10143cec-10143d17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10143cec(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_w28;
  
  uVar1 = *(undefined4 *)(unaff_w28 + 8);
  iVar2 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar2 + 0xc38) = *(undefined4 *)(unaff_w28 + 4);
  *(undefined4 *)(iVar2 + 0xc3c) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x10143d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

