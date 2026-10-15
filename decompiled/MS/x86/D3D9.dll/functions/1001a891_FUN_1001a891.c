/*
 * FUN_1001a891 at 1001a891
 * bool __thiscall FUN_1001a891(void * this, int param_1, int param_2)
 * Address ranges: 1001a891-1001a8ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1001a891(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 * param_2;
  if (*(uint *)((int)this + 0xd70) <= uVar2 && uVar2 - *(uint *)((int)this + 0xd70) != 0) {
    FUN_1001a8cf((int)this);
    *(uint *)((int)this + 0xd70) = uVar2;
    iVar1 = FUN_100cfd89(uVar2);
    *(int *)((int)this + 0xd6c) = iVar1;
  }
  return *(int *)((int)this + 0xd6c) != 0;
}

