/*
 * FUN_10016841 at 10016841
 * undefined __thiscall FUN_10016841(void * this, undefined4 * param_1)
 * Address ranges: 10016841-10016882
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10016841(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (**(int **)this != 0) {
    do {
      iVar1 = FUN_10015bf9((void *)(*(int *)((int)this + 4) + 0x3f50),**(int **)((int)this + 8),
                           param_1);
      param_1 = param_1 + iVar1;
      **(int **)((int)this + 8) = **(int **)((int)this + 8) + **(int **)((int)this + 0xc);
      uVar2 = uVar2 + 1;
    } while (uVar2 < **(uint **)this);
  }
  return;
}

