/*
 * FUN_1004545c at 1004545c
 * undefined __thiscall FUN_1004545c(void * this, int param_1)
 * Address ranges: 1004545c-10045492
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004545c(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x518) != 0) {
    do {
      (**(code **)(**(int **)(*(int *)((int)this + 0x514) + uVar1 * 4) + 0x1c))
                (*(undefined4 *)(param_1 + 8),param_1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)this + 0x518));
  }
  return;
}

