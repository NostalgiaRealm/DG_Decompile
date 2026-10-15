/*
 * FUN_10018e47 at 10018e47
 * undefined __cdecl FUN_10018e47(undefined4 * param_1)
 * Address ranges: 10018e47-10018e78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10018e47(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *this;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_1[4];
  uVar2 = *param_1;
  this = (void *)param_1[1];
  uVar3 = param_1[3];
  iVar4 = param_1[2];
  *(undefined4 *)((int)this + 0x43d0) = param_1[5];
  FUN_1000889a(this,iVar4,uVar3,uVar2,iVar1,1);
  return;
}

