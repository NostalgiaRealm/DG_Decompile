/*
 * FUN_1001d1e8 at 1001d1e8
 * undefined __thiscall FUN_1001d1e8(void * this, byte param_1)
 * Address ranges: 1001d1e8-1001d231
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001d1e8(void *this,byte param_1)

{
  FUN_1001c16f(*(int **)((int)this + 0x315c));
  (**(code **)(*(int *)this + 0x150))();
  *(undefined1 *)((int)this + 0x3150) = 1;
  *(undefined2 *)((int)this + 0x2bc0) = 0x101;
  *(uint *)((int)this + 0x2bf8) = (param_1 == 0) - 1;
  *(uint *)((int)this + 0x2a44) = (uint)param_1;
  return;
}

