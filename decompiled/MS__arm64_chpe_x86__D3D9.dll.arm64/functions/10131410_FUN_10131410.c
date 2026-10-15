/*
 * FUN_10131410 at 10131410
 * undefined FUN_10131410(void)
 * Address ranges: 10131410-10131453
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10131410(int param_1)

{
  int iVar1;
  undefined4 local_10;
  int local_c;
  
  iVar1 = (*(code *)PTR_FUN_1016c08c)(*(undefined4 *)(param_1 + 4),&local_10);
  if ((iVar1 != 0) && (local_c == 0)) {
    return local_10;
  }
  return 0;
}

