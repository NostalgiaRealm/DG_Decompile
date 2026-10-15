/*
 * FUN_100ac910 at 100ac910
 * undefined FUN_100ac910(void)
 * Address ranges: 100ac910-100ac93f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ac910(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80) + param_2 * 0x1c + 0xc;
                    /* WARNING: Could not recover jumptable at 0x100ac93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_1016c298)(iVar1,iVar1,param_3);
  return;
}

