/*
 * FUN_10016851 at 10016851
 * bool __thiscall FUN_10016851(void * this, int param_1, int param_2)
 * Address ranges: 10016851-1001688e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10016851(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 * param_2;
  if (*(uint *)((int)this + 0xaac) <= uVar2 && uVar2 - *(uint *)((int)this + 0xaac) != 0) {
    FUN_1001688f((int)this);
    *(uint *)((int)this + 0xaac) = uVar2;
    iVar1 = FUN_100ad4a9(uVar2);
    *(int *)((int)this + 0xaa8) = iVar1;
  }
  return *(int *)((int)this + 0xaa8) != 0;
}

