/*
 * FUN_10048a88 at 10048a88
 * undefined __thiscall FUN_10048a88(void * this, int param_1)
 * Address ranges: 10048a88-10048add
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10048a88(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_1004f9d3(param_1 + *(int *)((int)this + 8) * 2);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  FUN_100500b0(puVar3,*(undefined4 **)this,*(uint *)((int)this + 8));
  thunk_FUN_1004f9b6(*(LPVOID *)this);
  *(int *)((int)this + 4) = (iVar1 - iVar2) + (int)puVar3;
  *(undefined4 **)this = puVar3;
  *(int *)((int)this + 8) = param_1 + *(int *)((int)this + 8) * 2;
  return;
}

