/*
 * FUN_100017d3 at 100017d3
 * undefined __thiscall FUN_100017d3(void * this, int param_1)
 * Address ranges: 100017d3-10001828
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100017d3(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_100cfd89(param_1 + *(int *)((int)this + 8) * 2);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  FUN_100cff00(puVar3,*(undefined4 **)this,*(uint *)((int)this + 8));
  thunk_FUN_100cfd6c(*(LPVOID *)this);
  *(int *)((int)this + 4) = (iVar1 - iVar2) + (int)puVar3;
  *(undefined4 **)this = puVar3;
  *(int *)((int)this + 8) = param_1 + *(int *)((int)this + 8) * 2;
  return;
}

