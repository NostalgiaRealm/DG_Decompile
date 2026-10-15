/*
 * FUN_10090918 at 10090918
 * undefined FUN_10090918(void)
 * Address ranges: 10090918-100909cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10090918(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_100ba0a4)(param_1,param_2,param_3);
  if (iVar1 != 0) {
    iVar2 = (*(code *)PTR_FUN_100ba140)(param_1,iVar1);
    if (((iVar2 != 0) && (iVar1 = (*(code *)PTR_FUN_100ba0fc)(param_1,iVar1), iVar1 != 0)) &&
       (iVar1 = (*(code *)PTR_FUN_100ba100)(iVar1), iVar1 != 0)) {
      FUN_100917a0(param_4,iVar1,iVar2);
      return 1;
    }
  }
  return 0;
}

