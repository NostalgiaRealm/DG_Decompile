/*
 * FUN_100fda90 at 100fda90
 * undefined FUN_100fda90(void)
 * Address ranges: 100fda90-100fdadb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100fda90(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 300) != '\0') &&
     (iVar1 = *(int *)(param_1 + 0x11c), iVar2 = (*(code *)PTR_FUN_10134084)(), iVar1 != iVar2)) {
    return 0;
  }
  return 1;
}

