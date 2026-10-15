/*
 * FUN_1001022a at 1001022a
 * undefined __thiscall FUN_1001022a(void * this, byte param_1)
 * Address ranges: 1001022a-1001026a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001022a(void *this,byte param_1)

{
  (**(code **)(*(int *)this + 0x198))();
  *(float *)((int)this + 0x2e74) = (float)param_1;
  *(undefined1 *)((int)this + 0x3650) = 1;
  *(float *)((int)this + 0x2e3c) = (float)param_1 / 255.0;
  return;
}

