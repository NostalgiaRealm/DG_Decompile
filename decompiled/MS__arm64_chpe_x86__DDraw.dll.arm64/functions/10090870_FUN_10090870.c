/*
 * FUN_10090870 at 10090870
 * undefined FUN_10090870(void)
 * Address ranges: 10090870-100908b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10090870(int param_1)

{
  int iVar1;
  undefined4 local_10;
  int local_c;
  
  iVar1 = (*(code *)PTR_FUN_100ba0bc)(*(undefined4 *)(param_1 + 4),&local_10);
  if ((iVar1 != 0) && (local_c == 0)) {
    return local_10;
  }
  return 0;
}

