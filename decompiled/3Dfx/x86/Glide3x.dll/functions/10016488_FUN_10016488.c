/*
 * FUN_10016488 at 10016488
 * undefined __cdecl FUN_10016488(undefined4 * param_1)
 * Address ranges: 10016488-100164dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10016488(undefined4 *param_1)

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
  *(undefined4 *)((int)this + 0x4038) = puVar4[5];
  FUN_100082a7(this,iVar3,uVar2,piVar1,(uint)param_1);
  if (puVar4[6] != 0) {
    FUN_10049678((void *)(*(int *)((int)this + 0x3308) + 0x14f0),puVar4[8],puVar4[6],puVar4[7]);
  }
  return;
}

