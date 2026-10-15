/*
 * FUN_10008b74 at 10008b74
 * undefined __thiscall FUN_10008b74(void * this, byte param_1)
 * Address ranges: 10008b74-10008ba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10008b74(void *this,byte param_1)

{
  if (*(uint *)(*(int *)((int)this + 0x3660) + 0xf0) != (uint)param_1) {
    *(uint *)(*(int *)((int)this + 0x3660) + 0xf0) = (uint)param_1;
    (**(code **)(*(int *)this + 0x198))();
    *(undefined1 *)((int)this + 0x2dac) = 1;
  }
  return;
}

