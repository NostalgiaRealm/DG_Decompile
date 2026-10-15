/*
 * FUN_10011278 at 10011278
 * undefined __thiscall FUN_10011278(void * this, int param_1)
 * Address ranges: 10011278-100112a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10011278(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x170))();
  (**(code **)(**(int **)((int)this + 0x32dc) + 0x28))(0,0);
  *(undefined1 *)((int)this + 0x2c64) = 1;
  *(int *)((int)this + 0x29e4) = param_1;
  return;
}

