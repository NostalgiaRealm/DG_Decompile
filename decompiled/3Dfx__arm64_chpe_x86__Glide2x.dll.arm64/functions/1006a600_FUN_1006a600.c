/*
 * FUN_1006a600 at 1006a600
 * undefined FUN_1006a600(void)
 * Address ranges: 1006a600-1006a687
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006a600(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (*(code *)PTR_FUN_1009d190)(param_2,0);
  iVar2 = (*(code *)PTR_FUN_1009d058)();
  if ((iVar2 == iVar1) &&
     (uVar3 = (*(code *)PTR_FUN_1009d184)(param_2,0xffffffec), (uVar3 >> 3 & 1) != 0)) {
    (*(code *)PTR_FUN_1009d1f8)(param_2,0xfffffffe,0,0,0,0,0x41b);
  }
  return;
}

