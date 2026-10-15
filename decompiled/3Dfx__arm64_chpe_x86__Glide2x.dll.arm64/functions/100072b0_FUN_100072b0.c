/*
 * FUN_100072b0 at 100072b0
 * undefined FUN_100072b0(void)
 * Address ranges: 100072b0-1000730f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100072b0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

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

