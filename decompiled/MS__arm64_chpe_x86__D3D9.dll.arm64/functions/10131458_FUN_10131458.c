/*
 * FUN_10131458 at 10131458
 * undefined FUN_10131458(void)
 * Address ranges: 10131458-101314b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10131458(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_1016c078)(param_1,param_2,param_3);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_FUN_1016c110)(param_1,iVar1);
    return uVar2;
  }
  return 0;
}

