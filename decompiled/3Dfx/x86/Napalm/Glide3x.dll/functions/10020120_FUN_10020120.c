/*
 * FUN_10020120 at 10020120
 * undefined __thiscall FUN_10020120(void * this, int param_1, int param_2)
 * Address ranges: 10020120-1002014a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10020120(void *this,int param_1,int param_2)

{
  (**(code **)(*(int *)this + 0x198))();
  *(int *)(param_1 * 0x250 + 0x2f50 + (int)this) = param_2;
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}

