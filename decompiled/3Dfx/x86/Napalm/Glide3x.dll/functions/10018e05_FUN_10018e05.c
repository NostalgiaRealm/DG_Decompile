/*
 * FUN_10018e05 at 10018e05
 * undefined __thiscall FUN_10018e05(void * this, undefined4 * param_1)
 * Address ranges: 10018e05-10018e46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10018e05(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (**(int **)this != 0) {
    do {
      iVar1 = FUN_100181bd((void *)(*(int *)((int)this + 4) + 0x42e8),**(int **)((int)this + 8),
                           param_1);
      param_1 = param_1 + iVar1;
      **(int **)((int)this + 8) = **(int **)((int)this + 8) + **(int **)((int)this + 0xc);
      uVar2 = uVar2 + 1;
    } while (uVar2 < **(uint **)this);
  }
  return;
}

