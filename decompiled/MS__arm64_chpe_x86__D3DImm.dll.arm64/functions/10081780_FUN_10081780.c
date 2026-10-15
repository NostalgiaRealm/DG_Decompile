/*
 * FUN_10081780 at 10081780
 * undefined FUN_10081780(void)
 * Address ranges: 10081780-100817e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10081780(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100a1018)(param_1,param_2,&DAT_1009e808);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_FUN_100a1070)(param_1,iVar1);
    return uVar2;
  }
  return 0;
}

