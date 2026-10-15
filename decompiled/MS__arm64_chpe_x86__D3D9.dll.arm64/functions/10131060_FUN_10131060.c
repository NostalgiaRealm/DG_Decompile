/*
 * FUN_10131060 at 10131060
 * undefined FUN_10131060(void)
 * Address ranges: 10131060-101310ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10131060(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 300) != '\0') &&
     (iVar1 = *(int *)(param_1 + 0x11c), iVar2 = (*(code *)PTR_FUN_1016c088)(), iVar1 != iVar2)) {
    return 0;
  }
  return 1;
}

