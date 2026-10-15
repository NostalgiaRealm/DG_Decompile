/*
 * FUN_10027a40 at 10027a40
 * undefined FUN_10027a40(void)
 * Address ranges: 10027a40-10027a73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10027a40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x330);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x10027a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_1009d1c4)(iVar1,0x408,0,0);
    return;
  }
  return;
}

