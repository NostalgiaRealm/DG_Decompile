/*
 * FUN_10055a80 at 10055a80
 * undefined FUN_10055a80(void)
 * Address ranges: 10055a80-10055acb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10055a80(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 300) != '\0') &&
     (iVar1 = *(int *)(param_1 + 0x11c), iVar2 = (*(code *)PTR_FUN_1009d058)(), iVar1 != iVar2)) {
    return 0;
  }
  return 1;
}

