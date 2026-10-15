/*
 * FUN_1004b1e0 at 1004b1e0
 * undefined __thiscall FUN_1004b1e0(void * this, int param_1)
 * Address ranges: 1004b1e0-1004b235
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004b1e0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_10052293(param_1 + *(int *)((int)this + 8) * 2);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  FUN_10052930(puVar3,*(undefined4 **)this,*(uint *)((int)this + 8));
  thunk_FUN_10052276(*(LPVOID *)this);
  *(int *)((int)this + 4) = (iVar1 - iVar2) + (int)puVar3;
  *(undefined4 **)this = puVar3;
  *(int *)((int)this + 8) = param_1 + *(int *)((int)this + 8) * 2;
  return;
}

