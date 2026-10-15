/*
 * FUN_100486f8 at 100486f8
 * undefined __thiscall FUN_100486f8(void * this, int param_1)
 * Address ranges: 100486f8-1004874d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100486f8(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_1004f643(param_1 + *(int *)((int)this + 8) * 2);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  FUN_1004fd20(puVar3,*(undefined4 **)this,*(uint *)((int)this + 8));
  thunk_FUN_1004f626(*(LPVOID *)this);
  *(int *)((int)this + 4) = (iVar1 - iVar2) + (int)puVar3;
  *(undefined4 **)this = puVar3;
  *(int *)((int)this + 8) = param_1 + *(int *)((int)this + 8) * 2;
  return;
}

