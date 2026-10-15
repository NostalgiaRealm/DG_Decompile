/*
 * FUN_1007d0d0 at 1007d0d0
 * undefined FUN_1007d0d0(void)
 * Address ranges: 1007d0d0-1007d13b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1007d0d0(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 uVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x172c0);
  iVar1 = iVar3 + 0x1c;
  (*(code *)PTR_FUN_100a1014)(iVar1);
  puVar2 = (undefined1 *)(iVar3 + 0x34);
  uVar4 = *puVar2;
  *puVar2 = param_2;
  (*(code *)PTR_FUN_100a1044)(iVar1);
  return uVar4;
}

