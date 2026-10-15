/*
 * FUN_10017713 at 10017713
 * undefined4 __thiscall FUN_10017713(void * this, int param_1, int param_2)
 * Address ranges: 10017713-1001775f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10017713(void *this,int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
  cVar2 = FUN_10015f1f((int)this);
  if (cVar2 == '\0') {
    iVar1 = *(int *)((int)this + 0x98);
    iVar3 = (*(int *)((int)this + 0x2c) * param_2 + param_1) * 0x20;
    local_c = *(void **)(iVar1 + iVar3);
    local_8 = (void *)(*(int *)(iVar1 + 4 + iVar3) + *(int *)(iVar1 + iVar3));
    (**(code **)(**(int **)((int)this + 0x90) + 0x24))(*(int **)((int)this + 0x90),0,&local_c);
  }
  return 0;
}

