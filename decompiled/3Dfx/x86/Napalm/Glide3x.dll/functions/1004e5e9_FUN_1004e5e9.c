/*
 * FUN_1004e5e9 at 1004e5e9
 * undefined __thiscall FUN_1004e5e9(void * this, int param_1)
 * Address ranges: 1004e5e9-1004e63e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004e5e9(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_100556a3(param_1 + *(int *)((int)this + 8) * 2);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  FUN_10055d40(puVar3,*(undefined4 **)this,*(uint *)((int)this + 8));
  thunk_FUN_10055686(*(LPVOID *)this);
  *(int *)((int)this + 4) = (iVar1 - iVar2) + (int)puVar3;
  *(undefined4 **)this = puVar3;
  *(int *)((int)this + 8) = param_1 + *(int *)((int)this + 8) * 2;
  return;
}

