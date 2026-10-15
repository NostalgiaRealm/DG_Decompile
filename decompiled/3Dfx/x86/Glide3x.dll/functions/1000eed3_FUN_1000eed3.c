/*
 * FUN_1000eed3 at 1000eed3
 * undefined __thiscall FUN_1000eed3(void * this, byte param_1)
 * Address ranges: 1000eed3-1000ef06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000eed3(void *this,byte param_1)

{
  (**(code **)(*(int *)this + 0x170))();
  *(undefined1 *)((int)this + 0x32d0) = 1;
  *(uint *)((int)this + 0x2cbc) = (param_1 == 0) - 1;
  *(uint *)((int)this + 0x29ec) = (uint)param_1;
  return;
}

