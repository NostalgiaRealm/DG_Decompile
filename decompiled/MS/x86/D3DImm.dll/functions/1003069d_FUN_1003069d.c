/*
 * FUN_1003069d at 1003069d
 * undefined __thiscall FUN_1003069d(void * this, byte param_1)
 * Address ranges: 1003069d-100306e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003069d(void *this,byte param_1)

{
  (**(code **)(*(int *)this + 0x98))(0);
  *(undefined4 *)((int)this + 0x4a8) = *(undefined4 *)((int)this + 0x4a8);
  *(uint *)((int)this + 0xfa4) = (uint)param_1;
  *(undefined1 *)((int)this + 0x1d41) = 1;
  *(uint *)((int)this + 0x4ac) = (uint)param_1 << 0x11 | *(uint *)((int)this + 0x4ac) & 0xfffdffff;
  return;
}

