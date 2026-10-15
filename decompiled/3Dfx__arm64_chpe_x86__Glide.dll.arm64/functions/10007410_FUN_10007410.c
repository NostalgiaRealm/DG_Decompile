/*
 * FUN_10007410 at 10007410
 * undefined FUN_10007410(void)
 * Address ranges: 10007410-1000746f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10007410(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (*(code *)PTR_FUN_1009d1a0)(param_2);
  pcVar1 = (code *)PTR_FUN_1009d1f0;
  if (iVar2 != 0) {
    pcVar1 = (code *)PTR_FUN_1009d1f4;
  }
  uVar3 = (*pcVar1)(param_2,0xfffffffc,param_3);
  return uVar3;
}

