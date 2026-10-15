/*
 * FUN_10046360 at 10046360
 * undefined FUN_10046360(void)
 * Address ranges: 10046360-100463ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10046360(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 300) != '\0') &&
     (iVar1 = *(int *)(param_1 + 0x11c), iVar2 = (*(code *)PTR_FUN_100a0058)(), iVar1 != iVar2)) {
    return 0;
  }
  return 1;
}

