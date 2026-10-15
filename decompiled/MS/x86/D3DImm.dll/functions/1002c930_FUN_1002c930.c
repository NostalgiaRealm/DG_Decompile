/*
 * FUN_1002c930 at 1002c930
 * undefined __thiscall FUN_1002c930(void * this, byte param_1)
 * Address ranges: 1002c930-1002c966
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c930(void *this,byte param_1)

{
  (**(code **)(*(int *)this + 0x98))(0);
  *(undefined1 *)((int)this + 0x1d48) = 1;
  *(uint *)((int)this + 0x54c) = (uint)(param_1 ^ 1);
  *(uint *)((int)this + 0x9f4) = (uint)(param_1 ^ 1);
  *(undefined1 *)((int)this + 0x1d41) = 1;
  return;
}

