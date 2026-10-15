/*
 * FUN_10008697 at 10008697
 * undefined __thiscall FUN_10008697(void * this, int param_1)
 * Address ranges: 10008697-100086bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10008697(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x170))();
  *(int *)((int)this + 0x32a4) = param_1;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  *(int *)((int)this + 0x2a14) = param_1;
  return;
}

