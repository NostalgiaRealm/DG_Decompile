/*
 * FUN_10018a4c at 10018a4c
 * undefined __cdecl FUN_10018a4c(undefined4 * param_1)
 * Address ranges: 10018a4c-10018aa1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10018a4c(undefined4 *param_1)

{
  void *this;
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = param_1;
  this = (void *)*param_1;
  piVar1 = (int *)param_1[3];
  uVar2 = param_1[2];
  iVar3 = param_1[1];
  param_1 = (undefined4 *)CONCAT31(param_1._1_3_,*(undefined1 *)(param_1 + 4));
  *(undefined4 *)((int)this + 0x43d0) = puVar4[5];
  FUN_10008851(this,iVar3,uVar2,piVar1,(uint)param_1);
  if (puVar4[6] != 0) {
    FUN_1004ca81((void *)(*(int *)((int)this + 0x3688) + 0x14f0),puVar4[8],puVar4[6],puVar4[7]);
  }
  return;
}

