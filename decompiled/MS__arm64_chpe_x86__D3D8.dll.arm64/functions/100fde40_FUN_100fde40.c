/*
 * FUN_100fde40 at 100fde40
 * undefined FUN_100fde40(void)
 * Address ranges: 100fde40-100fde83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100fde40(int param_1)

{
  int iVar1;
  undefined4 local_10;
  int local_c;
  
  iVar1 = (*(code *)PTR_FUN_10134088)(*(undefined4 *)(param_1 + 4),&local_10);
  if ((iVar1 != 0) && (local_c == 0)) {
    return local_10;
  }
  return 0;
}

