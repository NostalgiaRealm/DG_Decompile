/*
 * FUN_1007d9b8 at 1007d9b8
 * undefined FUN_1007d9b8(void)
 * Address ranges: 1007d9b8-1007da17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007d9b8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100a0040)(param_1,param_2,param_3);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_FUN_100a00d8)(param_1,iVar1);
    return uVar2;
  }
  return 0;
}

