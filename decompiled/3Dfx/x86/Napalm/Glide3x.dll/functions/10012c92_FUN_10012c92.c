/*
 * FUN_10012c92 at 10012c92
 * undefined __thiscall FUN_10012c92(void * this, int param_1)
 * Address ranges: 10012c92-10012cce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10012c92(void *this,int param_1)

{
  FUN_1001164d(*(int **)((int)this + 0x365c));
  (**(code **)(*(int *)this + 0x198))();
  *(int *)((int)this + 0x2d3c) = param_1;
  *(undefined1 *)((int)this + 0x2da8) = 1;
  *(undefined4 *)((int)this + 0x2c28) = *(undefined4 *)(&DAT_10057a58 + param_1 * 4);
  return;
}

