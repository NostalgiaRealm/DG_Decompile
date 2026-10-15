/*
 * FUN_10084116 at 10084116
 * undefined4 __thiscall FUN_10084116(void * this, int param_1, int param_2)
 * Address ranges: 10084116-10084162
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10084116(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
  iVar1 = FUN_10082974((int)this);
  if ((char)iVar1 == '\0') {
    iVar1 = *(int *)((int)this + 0x98);
    iVar2 = (*(int *)((int)this + 0x2c) * param_2 + param_1) * 0x20;
    local_c = *(void **)(iVar1 + iVar2);
    local_8 = (void *)(*(int *)(iVar1 + 4 + iVar2) + *(int *)(iVar1 + iVar2));
    (**(code **)(**(int **)((int)this + 0x90) + 0x24))(*(int **)((int)this + 0x90),0,&local_c);
  }
  return 0;
}

