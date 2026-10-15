/*
 * FUN_1012ad10 at 1012ad10
 * undefined FUN_1012ad10(void)
 * Address ranges: 1012ad10-1012ad7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1012ad10(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 uVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x172c0);
  iVar1 = iVar3 + 0x1c;
  (*(code *)PTR_FUN_1016c074)(iVar1);
  puVar2 = (undefined1 *)(iVar3 + 0x34);
  uVar4 = *puVar2;
  *puVar2 = param_2;
  (*(code *)PTR_FUN_1016c0c0)(iVar1);
  return uVar4;
}

