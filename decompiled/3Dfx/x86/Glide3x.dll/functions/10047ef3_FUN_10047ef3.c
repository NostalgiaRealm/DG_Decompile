/*
 * FUN_10047ef3 at 10047ef3
 * undefined __thiscall FUN_10047ef3(void * this, int param_1)
 * Address ranges: 10047ef3-10047f43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10047ef3(void *this,int param_1)

{
  uint uVar1;
  uint local_20 [7];
  
  if (*(int *)((int)this + 0x518) != 0) {
    FUN_1004ce66(param_1,local_20);
    uVar1 = 0;
    if (*(int *)((int)this + 0x518) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)((int)this + 0x514) + uVar1 * 4) + 0x18))
                  (*(undefined4 *)(param_1 + 8),param_1,local_20);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)this + 0x518));
    }
  }
  return;
}

