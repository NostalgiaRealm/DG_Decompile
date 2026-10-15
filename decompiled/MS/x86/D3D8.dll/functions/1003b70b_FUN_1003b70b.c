/*
 * FUN_1003b70b at 1003b70b
 * undefined __cdecl FUN_1003b70b(undefined4 * param_1)
 * Address ranges: 1003b70b-1003b769
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1003b70b(undefined4 *param_1)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar2 = param_1;
  this = (void *)*param_1;
  piVar1 = param_1 + 1;
  piVar3 = param_1 + 2;
  puVar4 = param_1 + 3;
  puVar5 = param_1 + 4;
  param_1 = (undefined4 *)CONCAT31(param_1._1_3_,*(undefined1 *)(param_1 + 5));
  FUN_10038230(this,*piVar1,*piVar3,(undefined4 *)*puVar4,(undefined4 *)*puVar5,param_1);
  if (puVar2[6] != 0) {
    FUN_100a012d((void *)(*(int *)((int)this + 0xd9b8) + 0x14f0),puVar2[8],puVar2[6],puVar2[7]);
  }
  return;
}

