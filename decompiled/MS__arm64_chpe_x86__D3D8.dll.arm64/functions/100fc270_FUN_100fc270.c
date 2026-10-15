/*
 * FUN_100fc270 at 100fc270
 * undefined FUN_100fc270(void)
 * Address ranges: 100fc270-100fc2cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100fc270(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (*(code *)PTR_FUN_10134218)(param_2);
  pcVar1 = (code *)PTR_FUN_10134278;
  if (iVar2 != 0) {
    pcVar1 = (code *)PTR_FUN_1013427c;
  }
  uVar3 = (*pcVar1)(param_2,0xfffffffc,param_3);
  return uVar3;
}

