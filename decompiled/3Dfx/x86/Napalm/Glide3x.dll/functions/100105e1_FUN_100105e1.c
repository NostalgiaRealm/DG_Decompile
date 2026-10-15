/*
 * FUN_100105e1 at 100105e1
 * undefined __thiscall FUN_100105e1(void * this, int param_1)
 * Address ranges: 100105e1-10010609
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100105e1(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x198))();
  *(int *)((int)this + 0x2e4c) = param_1;
  *(undefined1 *)((int)this + 0x3650) = 1;
  *(int *)((int)this + 0x2b24) = param_1;
  return;
}

