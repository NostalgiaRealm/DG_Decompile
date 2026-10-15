/*
 * FUN_1000a660 at 1000a660
 * undefined FUN_1000a660(void)
 * Address ranges: 1000a660-1000a697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000a660(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xb20);
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_10134194)(iVar1);
    *(int *)(param_1 + 0xb20) = 0;
  }
  return;
}

