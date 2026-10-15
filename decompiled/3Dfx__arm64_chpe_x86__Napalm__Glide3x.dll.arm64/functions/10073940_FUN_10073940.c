/*
 * FUN_10073940 at 10073940
 * undefined FUN_10073940(void)
 * Address ranges: 10073940-100739c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10073940(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (*(code *)PTR_FUN_100a8194)(param_2,0);
  iVar2 = (*(code *)PTR_FUN_100a8058)();
  if ((iVar2 == iVar1) &&
     (uVar3 = (*(code *)PTR_FUN_100a8188)(param_2,0xffffffec), (uVar3 >> 3 & 1) != 0)) {
    (*(code *)PTR_FUN_100a81fc)(param_2,0xfffffffe,0,0,0,0,0x41b);
  }
  return;
}

