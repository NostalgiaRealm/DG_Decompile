/*
 * FUN_101314b8 at 101314b8
 * undefined FUN_101314b8(void)
 * Address ranges: 101314b8-1013156f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_101314b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_1016c078)(param_1,param_2,param_3);
  if (iVar1 != 0) {
    iVar2 = (*(code *)PTR_FUN_1016c110)(param_1,iVar1);
    if (((iVar2 != 0) && (iVar1 = (*(code *)PTR_FUN_1016c0cc)(param_1,iVar1), iVar1 != 0)) &&
       (iVar1 = (*(code *)PTR_FUN_1016c0d0)(iVar1), iVar1 != 0)) {
      FUN_101325a0(param_4,iVar1,iVar2);
      return 1;
    }
  }
  return 0;
}

