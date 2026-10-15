/*
 * FUN_1006c9ca at 1006c9ca
 * undefined __thiscall FUN_1006c9ca(void * this, int param_1, int param_2)
 * Address ranges: 1006c9ca-1006ca18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006c9ca(void *this,int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int extraout_EDX;
  void *local_c;
  void *local_8;
  
  iVar1 = *(int *)((int)this + 0x98);
  if (iVar1 != 0) {
    local_c = this;
    local_8 = this;
    cVar2 = FUN_1006c7d3((int)this);
    if (cVar2 == '\0') {
      iVar3 = (*(int *)(extraout_EDX + 0x2c) * param_2 + param_1) * 0x20;
      local_c = *(void **)(iVar1 + iVar3);
      local_8 = (void *)(*(int *)(iVar1 + 4 + iVar3) + *(int *)(iVar1 + iVar3));
      (**(code **)(**(int **)(extraout_EDX + 0x90) + 0x24))
                (*(int **)(extraout_EDX + 0x90),0,&local_c);
    }
  }
  return;
}

