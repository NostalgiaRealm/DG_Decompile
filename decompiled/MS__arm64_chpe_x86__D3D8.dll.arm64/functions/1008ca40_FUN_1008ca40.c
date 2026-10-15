/*
 * FUN_1008ca40 at 1008ca40
 * undefined FUN_1008ca40(void)
 * Address ranges: 1008ca40-1008ca6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008ca40(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80) + param_2 * 0x1c + 0xc;
                    /* WARNING: Could not recover jumptable at 0x1008ca6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_10134298)(iVar1,iVar1,param_3);
  return;
}

