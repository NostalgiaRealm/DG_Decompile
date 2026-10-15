/*
 * FUN_10010293 at 10010293
 * undefined __thiscall FUN_10010293(void * this, byte param_1)
 * Address ranges: 10010293-100102c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10010293(void *this,byte param_1)

{
  (**(code **)(*(int *)this + 0x198))();
  *(undefined1 *)((int)this + 0x3650) = 1;
  *(uint *)((int)this + 0x2e0c) = (param_1 == 0) - 1;
  *(uint *)((int)this + 0x2b28) = (uint)param_1;
  return;
}

