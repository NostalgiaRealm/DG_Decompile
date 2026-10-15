/*
 * FUN_100091e0 at 100091e0
 * undefined FUN_100091e0(void)
 * Address ranges: 100091e0-10009223
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100091e0(int param_1)

{
  int iVar1;
  undefined4 local_10;
  int local_c;
  
  iVar1 = (*(code *)PTR_FUN_1009d05c)(*(undefined4 *)(param_1 + 4),&local_10);
  if ((iVar1 != 0) && (local_c == 0)) {
    return local_10;
  }
  return 0;
}

