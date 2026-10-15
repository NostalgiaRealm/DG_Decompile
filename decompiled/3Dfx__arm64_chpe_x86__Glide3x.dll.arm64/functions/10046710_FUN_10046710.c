/*
 * FUN_10046710 at 10046710
 * undefined FUN_10046710(void)
 * Address ranges: 10046710-10046753
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10046710(int param_1)

{
  int iVar1;
  undefined4 local_10;
  int local_c;
  
  iVar1 = (*(code *)PTR_FUN_100a005c)(*(undefined4 *)(param_1 + 4),&local_10);
  if ((iVar1 != 0) && (local_c == 0)) {
    return local_10;
  }
  return 0;
}

