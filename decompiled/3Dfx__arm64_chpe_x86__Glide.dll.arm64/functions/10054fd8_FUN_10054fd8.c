/*
 * FUN_10054fd8 at 10054fd8
 * undefined FUN_10054fd8(void)
 * Address ranges: 10054fd8-10055037
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10054fd8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_1009d040)(param_1,param_2,param_3);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_FUN_1009d0d8)(param_1,iVar1);
    return uVar2;
  }
  return 0;
}

