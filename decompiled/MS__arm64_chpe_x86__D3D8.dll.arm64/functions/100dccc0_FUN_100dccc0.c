/*
 * FUN_100dccc0 at 100dccc0
 * undefined FUN_100dccc0(void)
 * Address ranges: 100dccc0-100dcd47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100dccc0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (*(code *)PTR_FUN_10134200)(param_2,0);
  iVar2 = (*(code *)PTR_FUN_10134084)();
  if ((iVar2 == iVar1) &&
     (uVar3 = (*(code *)PTR_FUN_101341f4)(param_2,0xffffffec), (uVar3 >> 3 & 1) != 0)) {
    (*(code *)PTR_FUN_10134280)(param_2,0xfffffffe,0,0,0,0,0x41b);
  }
  return;
}

