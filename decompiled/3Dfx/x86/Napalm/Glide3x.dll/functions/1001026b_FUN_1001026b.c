/*
 * FUN_1001026b at 1001026b
 * undefined __thiscall FUN_1001026b(void * this, int param_1)
 * Address ranges: 1001026b-10010292
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001026b(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x198))();
  *(undefined1 *)((int)this + 0x3650) = 1;
  *(uint *)((int)this + 0x2e60) = (uint)(param_1 != 0);
  return;
}

