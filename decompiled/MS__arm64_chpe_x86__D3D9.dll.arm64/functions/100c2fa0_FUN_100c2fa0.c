/*
 * FUN_100c2fa0 at 100c2fa0
 * undefined FUN_100c2fa0(void)
 * Address ranges: 100c2fa0-100c2fcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c2fa0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x150) != 0) {
    iVar1 = *(int *)(param_1 + 0x150) + param_2 * 0x20 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x100c2fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_1016c298)(iVar1,iVar1,param_3);
    return;
  }
  return;
}

