/*
 * FUN_1001039f at 1001039f
 * undefined __thiscall FUN_1001039f(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1001039f-100103dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001039f(void *this,int param_1,int param_2,int param_3,int param_4)

{
  (**(code **)(*(int *)this + 0x198))();
  *(int *)((int)this + 0x2e20) = param_1;
  *(int *)((int)this + 0x2e24) = param_2;
  *(int *)((int)this + 0x2e28) = param_3;
  *(int *)((int)this + 0x2e2c) = param_4;
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}

