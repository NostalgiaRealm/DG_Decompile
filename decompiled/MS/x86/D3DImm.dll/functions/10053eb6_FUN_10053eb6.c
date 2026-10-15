/*
 * FUN_10053eb6 at 10053eb6
 * undefined __thiscall FUN_10053eb6(void * this, int param_1)
 * Address ranges: 10053eb6-10053eea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10053eb6(void *this,int param_1)

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
      FUN_10054327(this,uVar1);
    }
  }
  return;
}

