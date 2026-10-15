/*
 * FUN_1004bdd0 at 1004bdd0
 * undefined FUN_1004bdd0(void)
 * Address ranges: 1004bdd0-1004be13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004bdd0(int param_1)

{
  int iVar1;
  undefined4 local_10;
  int local_c;
  
  iVar1 = (*(code *)PTR_FUN_100a805c)(*(undefined4 *)(param_1 + 4),&local_10);
  if ((iVar1 != 0) && (local_c == 0)) {
    return local_10;
  }
  return 0;
}

