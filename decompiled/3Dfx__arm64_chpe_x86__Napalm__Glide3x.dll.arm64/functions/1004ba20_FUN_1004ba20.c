/*
 * FUN_1004ba20 at 1004ba20
 * undefined FUN_1004ba20(void)
 * Address ranges: 1004ba20-1004ba6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004ba20(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 300) != '\0') &&
     (iVar1 = *(int *)(param_1 + 0x11c), iVar2 = (*(code *)PTR_FUN_100a8058)(), iVar1 != iVar2)) {
    return 0;
  }
  return 1;
}

