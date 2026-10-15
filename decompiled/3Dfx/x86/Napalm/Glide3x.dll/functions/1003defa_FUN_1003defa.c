/*
 * FUN_1003defa at 1003defa
 * undefined __thiscall FUN_1003defa(void * this, int param_1)
 * Address ranges: 1003defa-1003df2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003defa(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)((int)this + 8);
  while (uVar2 != 0) {
    uVar1 = uVar2 - 1;
    iVar3 = uVar2 * 0x20;
    uVar2 = uVar1;
    if (*(int *)(*(int *)this + -0x18 + iVar3) == param_1) {
      FUN_1003e36b(this,uVar1);
    }
  }
  return;
}

