/*
 * FUN_1012f840 at 1012f840
 * undefined FUN_1012f840(void)
 * Address ranges: 1012f840-1012f89f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1012f840(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (*(code *)PTR_FUN_1016c218)(param_2);
  pcVar1 = (code *)PTR_FUN_1016c278;
  if (iVar2 != 0) {
    pcVar1 = (code *)PTR_FUN_1016c27c;
  }
  uVar3 = (*pcVar1)(param_2,0xfffffffc,param_3);
  return uVar3;
}

