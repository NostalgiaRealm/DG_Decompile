/*
 * FUN_1006e2a0 at 1006e2a0
 * undefined FUN_1006e2a0(void)
 * Address ranges: 1006e2a0-1006e327
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006e2a0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (*(code *)PTR_FUN_100a0194)(param_2,0);
  iVar2 = (*(code *)PTR_FUN_100a0058)();
  if ((iVar2 == iVar1) &&
     (uVar3 = (*(code *)PTR_FUN_100a0188)(param_2,0xffffffec), (uVar3 >> 3 & 1) != 0)) {
    (*(code *)PTR_FUN_100a01fc)(param_2,0xfffffffe,0,0,0,0,0x41b);
  }
  return;
}

