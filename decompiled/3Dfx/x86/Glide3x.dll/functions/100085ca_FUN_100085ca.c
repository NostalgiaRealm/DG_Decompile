/*
 * FUN_100085ca at 100085ca
 * undefined __thiscall FUN_100085ca(void * this, byte param_1)
 * Address ranges: 100085ca-100085fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100085ca(void *this,byte param_1)

{
  if (*(uint *)(*(int *)((int)this + 0x32e0) + 0xf0) != (uint)param_1) {
    *(uint *)(*(int *)((int)this + 0x32e0) + 0xf0) = (uint)param_1;
    (**(code **)(*(int *)this + 0x170))();
    *(undefined1 *)((int)this + 0x2c64) = 1;
  }
  return;
}

