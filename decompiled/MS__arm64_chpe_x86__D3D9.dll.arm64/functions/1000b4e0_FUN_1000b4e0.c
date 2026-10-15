/*
 * FUN_1000b4e0 at 1000b4e0
 * undefined FUN_1000b4e0(void)
 * Address ranges: 1000b4e0-1000b517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000b4e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xde4);
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_1016c194)(iVar1);
    *(int *)(param_1 + 0xde4) = 0;
  }
  return;
}

