/*
 * FUN_10012e20 at 10012e20
 * undefined __thiscall FUN_10012e20(void * this, byte param_1)
 * Address ranges: 10012e20-10012e69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10012e20(void *this,byte param_1)

{
  FUN_1001164d(*(int **)((int)this + 0x365c));
  (**(code **)(*(int *)this + 0x198))();
  *(undefined1 *)((int)this + 0x3650) = 1;
  *(undefined2 *)((int)this + 0x2da8) = 0x101;
  *(uint *)((int)this + 0x2de8) = (param_1 == 0) - 1;
  *(uint *)((int)this + 0x2c24) = (uint)param_1;
  return;
}

