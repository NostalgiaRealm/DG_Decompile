/*
 * FUN_100a264e at 100a264e
 * undefined __thiscall FUN_100a264e(void * this, int param_1)
 * Address ranges: 100a264e-100a269e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100a264e(void *this,int param_1)

{
  uint uVar1;
  uint local_20 [7];
  
  if (*(int *)((int)this + 0x518) != 0) {
    FUN_100a6e54(param_1,local_20);
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

