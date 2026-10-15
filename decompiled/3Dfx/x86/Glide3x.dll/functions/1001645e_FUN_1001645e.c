/*
 * FUN_1001645e at 1001645e
 * undefined __cdecl FUN_1001645e(undefined4 * param_1)
 * Address ranges: 1001645e-10016487
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1001645e(undefined4 *param_1)

{
  int *piVar1;
  void *this;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  this = (void *)param_1[1];
  uVar2 = param_1[3];
  iVar3 = param_1[2];
  *(undefined4 *)((int)this + 0x4038) = param_1[4];
  FUN_100082a7(this,iVar3,uVar2,piVar1,1);
  return;
}

