/*
 * FUN_10012190 at 10012190
 * undefined FUN_10012190(void)
 * Address ranges: 10012190-100121bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012190(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80) + param_2 * 0x1c + 0xc;
                    /* WARNING: Could not recover jumptable at 0x100121bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_100ba2e0)(iVar1,iVar1,param_3);
  return;
}

