/*
 * FUN_100fdee8 at 100fdee8
 * undefined FUN_100fdee8(void)
 * Address ranges: 100fdee8-100fdf9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100fdee8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_10134074)(param_1,param_2,param_3);
  if (iVar1 != 0) {
    iVar2 = (*(code *)PTR_FUN_10134110)(param_1,iVar1);
    if (((iVar2 != 0) && (iVar1 = (*(code *)PTR_FUN_101340c8)(param_1,iVar1), iVar1 != 0)) &&
       (iVar1 = (*(code *)PTR_FUN_101340d0)(iVar1), iVar1 != 0)) {
      FUN_100ff660(param_4,iVar1,iVar2);
      return 1;
    }
  }
  return 0;
}

