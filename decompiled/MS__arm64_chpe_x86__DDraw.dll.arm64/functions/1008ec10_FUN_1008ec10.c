/*
 * FUN_1008ec10 at 1008ec10
 * undefined FUN_1008ec10(void)
 * Address ranges: 1008ec10-1008ec6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1008ec10(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (*(code *)PTR_FUN_100ba250)(param_2);
  pcVar1 = (code *)PTR_FUN_100ba2c4;
  if (iVar2 != 0) {
    pcVar1 = (code *)PTR_FUN_100ba2c8;
  }
  uVar3 = (*pcVar1)(param_2,0xfffffffc,param_3);
  return uVar3;
}

