/*
 * FUN_10028610 at 10028610
 * undefined FUN_10028610(void)
 * Address ranges: 10028610-1002863f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028610(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x150) != 0) {
    iVar1 = *(int *)(param_1 + 0x150) + param_2 * 0x20 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x10028638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_100ba2e0)(iVar1,iVar1,param_3);
    return;
  }
  return;
}

