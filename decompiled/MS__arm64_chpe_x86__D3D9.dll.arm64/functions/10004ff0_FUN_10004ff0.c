/*
 * FUN_10004ff0 at 10004ff0
 * undefined FUN_10004ff0(void)
 * Address ranges: 10004ff0-10005023
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * FUN_10004ff0(int param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 2) {
    puVar1 = &DAT_1016d180;
  }
  else {
    puVar1 = &DAT_1016d310 + *(int *)(param_1 + 8) * 400;
  }
  return puVar1;
}

