/*
 * FUN_10055600 at 10055600
 * undefined FUN_10055600(void)
 * Address ranges: 10055600-1005564b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10055600(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 300) != '\0') &&
     (iVar1 = *(int *)(param_1 + 0x11c), iVar2 = (*(code *)PTR_FUN_1009d058)(), iVar1 != iVar2)) {
    return 0;
  }
  return 1;
}

