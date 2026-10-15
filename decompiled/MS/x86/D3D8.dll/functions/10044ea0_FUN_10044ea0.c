/*
 * FUN_10044ea0 at 10044ea0
 * undefined __thiscall FUN_10044ea0(void * this, byte param_1)
 * Address ranges: 10044ea0-10044ed6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10044ea0(void *this,byte param_1)

{
  (**(code **)(*(int *)this + 0xc0))(0);
  *(undefined1 *)((int)this + 0xd9a8) = 1;
  *(uint *)((int)this + 0x486c) = (uint)(param_1 ^ 1);
  *(uint *)((int)this + 0x4d14) = (uint)(param_1 ^ 1);
  *(undefined1 *)((int)this + 0xd981) = 1;
  return;
}

