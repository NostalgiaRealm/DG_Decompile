/*
 * FUN_1000d5c5 at 1000d5c5
 * undefined __thiscall FUN_1000d5c5(void * this, int * param_1, int * param_2)
 * Address ranges: 1000d5c5-1000d633
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000d5c5(void *this,int *param_1,int *param_2)

{
  int iVar1;
  
  if ((*(byte *)(*(int *)((int)this + 0x18) + 0x826) & 4) == 0) {
    *param_1 = *(int *)(*(int *)((int)this + 8) + 0xa8) * *(int *)(*(int *)((int)this + 8) + 0xa0);
    iVar1 = *(int *)(*(int *)((int)this + 8) + 0xac) * *(int *)(*(int *)((int)this + 8) + 0xa4);
  }
  else {
    iVar1 = *(int *)(*(int *)((int)this + 0x18) + 0x76c);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(**(int **)((int)this + 8) + 0x3c))();
    }
    else {
      iVar1 = iVar1 + -1;
    }
    *param_1 = *(int *)(*(int *)((int)this + 8) + 0x14 + iVar1 * 8);
    iVar1 = *(int *)(*(int *)((int)this + 8) + 0x18 + iVar1 * 8);
  }
  *param_2 = iVar1;
  return;
}

