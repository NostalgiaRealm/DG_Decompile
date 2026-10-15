/*
 * FUN_1007da18 at 1007da18
 * undefined FUN_1007da18(void)
 * Address ranges: 1007da18-1007dacf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1007da18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_100a0040)(param_1,param_2,param_3);
  if (iVar1 != 0) {
    iVar2 = (*(code *)PTR_FUN_100a00d8)(param_1,iVar1);
    if (((iVar2 != 0) && (iVar1 = (*(code *)PTR_FUN_100a0098)(param_1,iVar1), iVar1 != 0)) &&
       (iVar1 = (*(code *)PTR_FUN_100a009c)(iVar1), iVar1 != 0)) {
      FUN_1007e4a0(param_4,iVar1,iVar2);
      return 1;
    }
  }
  return 0;
}

