/*
 * FUN_100a2960 at 100a2960
 * undefined FUN_100a2960(void)
 * Address ranges: 100a2960-100a298f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a2960(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x150) != 0) {
    iVar1 = *(int *)(param_1 + 0x150) + param_2 * 0x20 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x100a2988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_10134298)(iVar1,iVar1,param_3);
    return;
  }
  return;
}

