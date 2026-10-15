/*
 * FUN_10082b76 at 10082b76
 * undefined __thiscall FUN_10082b76(void * this, int param_1, int param_2)
 * Address ranges: 10082b76-10082bc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10082b76(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int extraout_EDX;
  void *local_c;
  void *local_8;
  
  iVar1 = *(int *)((int)this + 0x98);
  if (iVar1 != 0) {
    local_c = this;
    local_8 = this;
    iVar2 = FUN_10082974((int)this);
    if ((char)iVar2 == '\0') {
      iVar2 = (*(int *)(extraout_EDX + 0x2c) * param_2 + param_1) * 0x20;
      local_c = *(void **)(iVar1 + iVar2);
      local_8 = (void *)(*(int *)(iVar1 + 4 + iVar2) + *(int *)(iVar1 + iVar2));
      (**(code **)(**(int **)(extraout_EDX + 0x90) + 0x24))
                (*(int **)(extraout_EDX + 0x90),0,&local_c);
    }
  }
  return;
}

