/*
 * FUN_1006e610 at 1006e610
 * undefined FUN_1006e610(void)
 * Address ranges: 1006e610-1006e697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006e610(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (*(code *)PTR_FUN_100ba23c)(param_2,0);
  iVar2 = (*(code *)PTR_FUN_100ba0b8)();
  if ((iVar2 == iVar1) &&
     (uVar3 = (*(code *)PTR_FUN_100ba22c)(param_2,0xffffffec), (uVar3 >> 3 & 1) != 0)) {
    (*(code *)PTR_FUN_100ba2cc)(param_2,0xfffffffe,0,0,0,0,0x41b);
  }
  return;
}

