/*
 * FUN_10008733 at 10008733
 * undefined __thiscall FUN_10008733(void * this, int param_1, int param_2)
 * Address ranges: 10008733-10008768
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10008733(void *this,int param_1,int param_2)

{
  (**(code **)(*(int *)this + 0x170))();
  *(int *)(param_1 * 0x1a0 + 0x2dec + (int)this) = param_2;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  *(int *)((int)this + param_1 * 4 + 0x2a40) = param_2;
  return;
}

