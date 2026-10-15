/*
 * FUN_100275c0 at 100275c0
 * undefined FUN_100275c0(void)
 * Address ranges: 100275c0-100275f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100275c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x330);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x100275ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_1009d1c4)(iVar1,0x408,0,0);
    return;
  }
  return;
}

