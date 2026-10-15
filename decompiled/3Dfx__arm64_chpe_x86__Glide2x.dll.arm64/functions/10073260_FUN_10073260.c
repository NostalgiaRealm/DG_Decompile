/*
 * FUN_10073260 at 10073260
 * undefined FUN_10073260(void)
 * Address ranges: 10073260-100732cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10073260(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 uVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x172c0);
  iVar1 = iVar3 + 0x1c;
  (*(code *)PTR_FUN_1009d03c)(iVar1);
  puVar2 = (undefined1 *)(iVar3 + 0x34);
  uVar4 = *puVar2;
  *puVar2 = param_2;
  (*(code *)PTR_FUN_1009d090)(iVar1);
  return uVar4;
}

