/*
 * FUN_100f7740 at 100f7740
 * undefined FUN_100f7740(void)
 * Address ranges: 100f7740-100f77ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100f7740(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 uVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x172c0);
  iVar1 = iVar3 + 0x1c;
  (*(code *)PTR_FUN_10134070)(iVar1);
  puVar2 = (undefined1 *)(iVar3 + 0x34);
  uVar4 = *puVar2;
  *puVar2 = param_2;
  (*(code *)PTR_FUN_101340bc)(iVar1);
  return uVar4;
}

