/*
 * FUN_10095e5b at 10095e5b
 * undefined __thiscall FUN_10095e5b(void * this, int param_1)
 * Address ranges: 10095e5b-10095e96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10095e5b(void *this,int param_1)

{
  if (param_1 != *(int *)((int)this + 0xc28c)) {
    if (param_1 != 0) {
      LOCK();
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      UNLOCK();
    }
    if (*(undefined4 **)((int)this + 0xc28c) != (undefined4 *)0x0) {
      FUN_1009e598(*(undefined4 **)((int)this + 0xc28c));
    }
    *(int *)((int)this + 0xc28c) = param_1;
    *(undefined1 *)((int)this + 0xc2ee) = 1;
  }
  return;
}

