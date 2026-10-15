/*
 * FUN_100904c0 at 100904c0
 * undefined FUN_100904c0(void)
 * Address ranges: 100904c0-1009050b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100904c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 300) != '\0') &&
     (iVar1 = *(int *)(param_1 + 0x11c), iVar2 = (*(code *)PTR_FUN_100ba0b8)(), iVar1 != iVar2)) {
    return 0;
  }
  return 1;
}

