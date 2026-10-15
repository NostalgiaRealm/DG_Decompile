/*
 * FUN_100fde88 at 100fde88
 * undefined FUN_100fde88(void)
 * Address ranges: 100fde88-100fdee7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100fde88(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_10134074)(param_1,param_2,param_3);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_FUN_10134110)(param_1,iVar1);
    return uVar2;
  }
  return 0;
}

