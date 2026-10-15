/*
 * FUN_100119b9 at 100119b9
 * undefined __thiscall FUN_100119b9(void * this, byte param_1)
 * Address ranges: 100119b9-10011a02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100119b9(void *this,byte param_1)

{
  FUN_100102f1(*(int **)((int)this + 0x32dc));
  (**(code **)(*(int *)this + 0x170))();
  *(undefined1 *)((int)this + 0x32d0) = 1;
  *(undefined2 *)((int)this + 0x2c60) = 0x101;
  *(uint *)((int)this + 0x2c98) = (param_1 == 0) - 1;
  *(uint *)((int)this + 0x2ae4) = (uint)param_1;
  return;
}

