/*
 * FUN_1004b2ab at 1004b2ab
 * undefined __thiscall FUN_1004b2ab(void * this, int param_1)
 * Address ranges: 1004b2ab-1004b2fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004b2ab(void *this,int param_1)

{
  uint uVar1;
  uint local_20 [7];
  
  if (*(int *)((int)this + 0x518) != 0) {
    FUN_1005026f(param_1,local_20);
    uVar1 = 0;
    if (*(int *)((int)this + 0x518) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)((int)this + 0x514) + uVar1 * 4) + 0x14))
                  (*(undefined4 *)(param_1 + 8),param_1,local_20);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)this + 0x518));
    }
  }
  return;
}

