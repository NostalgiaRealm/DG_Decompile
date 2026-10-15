/*
 * FUN_10086c30 at 10086c30
 * undefined FUN_10086c30(void)
 * Address ranges: 10086c30-10086c9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10086c30(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 uVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x172c0);
  iVar1 = iVar3 + 0x1c;
  (*(code *)PTR_FUN_100ba0a0)(iVar1);
  puVar2 = (undefined1 *)(iVar3 + 0x34);
  uVar4 = *puVar2;
  *puVar2 = param_2;
  (*(code *)PTR_FUN_100ba0f0)(iVar1);
  return uVar4;
}

