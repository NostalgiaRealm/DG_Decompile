/*
 * FUN_100204c4 at 100204c4
 * undefined __thiscall FUN_100204c4(void * this, uint param_1)
 * Address ranges: 100204c4-100204e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100204c4(void *this,uint param_1)

{
  if (*(int *)(*(int *)((int)this + 4) + 0x3f) == 0) {
    *(undefined1 *)((int)this + 0x2da9) = 1;
    *(uint *)((int)this + 0x2c5c) = param_1 | 0xffffff00;
  }
  return;
}

