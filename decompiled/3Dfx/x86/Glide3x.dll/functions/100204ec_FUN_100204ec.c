/*
 * FUN_100204ec at 100204ec
 * undefined __thiscall FUN_100204ec(void * this, int param_1, int param_2)
 * Address ranges: 100204ec-10020516
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100204ec(void *this,int param_1,int param_2)

{
  (**(code **)(*(int *)this + 0x170))();
  *(int *)(param_1 * 0x1a0 + 0x2d8c + (int)this) = param_2;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  return;
}

