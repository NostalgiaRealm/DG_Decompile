/*
 * FUN_10008cdd at 10008cdd
 * undefined __thiscall FUN_10008cdd(void * this, int param_1, int param_2)
 * Address ranges: 10008cdd-10008d12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10008cdd(void *this,int param_1,int param_2)

{
  (**(code **)(*(int *)this + 0x198))();
  *(int *)(param_1 * 0x250 + 0x2fac + (int)this) = param_2;
  *(undefined1 *)((int)this + 0x3650) = 1;
  *(int *)((int)this + param_1 * 4 + 0x2b7c) = param_2;
  return;
}

