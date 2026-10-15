/*
 * FUN_100830b8 at 100830b8
 * undefined FUN_100830b8(void)
 * Address ranges: 100830b8-1008316f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100830b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_100a8040)(param_1,param_2,param_3);
  if (iVar1 != 0) {
    iVar2 = (*(code *)PTR_FUN_100a80d8)(param_1,iVar1);
    if (((iVar2 != 0) && (iVar1 = (*(code *)PTR_FUN_100a8098)(param_1,iVar1), iVar1 != 0)) &&
       (iVar1 = (*(code *)PTR_FUN_100a809c)(iVar1), iVar1 != 0)) {
      FUN_10083b40(param_4,iVar1,iVar2);
      return 1;
    }
  }
  return 0;
}

