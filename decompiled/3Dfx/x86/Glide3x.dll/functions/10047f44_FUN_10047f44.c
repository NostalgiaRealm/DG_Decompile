/*
 * FUN_10047f44 at 10047f44
 * undefined __thiscall FUN_10047f44(void * this, int param_1)
 * Address ranges: 10047f44-10047f7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10047f44(void *this,int param_1)

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

