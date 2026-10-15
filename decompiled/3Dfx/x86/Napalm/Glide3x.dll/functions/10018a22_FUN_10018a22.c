/*
 * FUN_10018a22 at 10018a22
 * undefined __cdecl FUN_10018a22(undefined4 * param_1)
 * Address ranges: 10018a22-10018a4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10018a22(undefined4 *param_1)

{
  int *piVar1;
  void *this;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  this = (void *)param_1[1];
  uVar2 = param_1[3];
  iVar3 = param_1[2];
  *(undefined4 *)((int)this + 0x43d0) = param_1[4];
  FUN_10008851(this,iVar3,uVar2,piVar1,1);
  return;
}

