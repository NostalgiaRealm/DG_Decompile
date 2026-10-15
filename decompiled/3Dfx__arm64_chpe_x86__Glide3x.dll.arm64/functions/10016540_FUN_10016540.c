/*
 * FUN_10016540 at 10016540
 * undefined FUN_10016540(void)
 * Address ranges: 10016540-10016573
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10016540(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x330);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x1001656c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_100a01c8)(iVar1,0x408,0,0);
    return;
  }
  return;
}

