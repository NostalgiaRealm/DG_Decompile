/*
 * FUN_10010207 at 10010207
 * undefined __thiscall FUN_10010207(void * this, int param_1)
 * Address ranges: 10010207-10010229
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10010207(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x198))();
  *(int *)((int)this + 0x2e38) = param_1;
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}

