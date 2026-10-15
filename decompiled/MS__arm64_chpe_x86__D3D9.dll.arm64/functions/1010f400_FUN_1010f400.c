/*
 * FUN_1010f400 at 1010f400
 * undefined FUN_1010f400(void)
 * Address ranges: 1010f400-1010f487
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010f400(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (*(code *)PTR_FUN_1016c200)(param_2,0);
  iVar2 = (*(code *)PTR_FUN_1016c088)();
  if ((iVar2 == iVar1) &&
     (uVar3 = (*(code *)PTR_FUN_1016c1f4)(param_2,0xffffffec), (uVar3 >> 3 & 1) != 0)) {
    (*(code *)PTR_FUN_1016c280)(param_2,0xfffffffe,0,0,0,0,0x41b);
  }
  return;
}

