/*
 * FUN_100471b1 at 100471b1
 * undefined __cdecl FUN_100471b1(undefined4 * param_1)
 * Address ranges: 100471b1-1004720f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100471b1(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *this;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint *puVar5;
  
  puVar2 = param_1;
  this = (void *)*param_1;
  puVar1 = param_1 + 1;
  piVar3 = param_1 + 2;
  puVar4 = param_1 + 3;
  puVar5 = param_1 + 4;
  param_1 = (undefined4 *)CONCAT31(param_1._1_3_,*(undefined1 *)(param_1 + 5));
  FUN_10043b30(this,(undefined4 *)*puVar1,*piVar3,(undefined4 *)*puVar4,*puVar5,param_1);
  if (puVar2[6] != 0) {
    FUN_100c257a((void *)(*(int *)((int)this + 0xf6b8) + 0x14f0),puVar2[8],puVar2[6],puVar2[7]);
  }
  return;
}

