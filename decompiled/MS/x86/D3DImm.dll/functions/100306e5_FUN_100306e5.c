/*
 * FUN_100306e5 at 100306e5
 * undefined __thiscall FUN_100306e5(void * this, byte param_1)
 * Address ranges: 100306e5-1003072a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100306e5(void *this,byte param_1)

{
  uint uVar1;
  
  (**(code **)(*(int *)this + 0x98))(0);
  *(uint *)((int)this + 0x99c) = (uint)param_1;
  *(undefined1 *)((int)this + 0x1d41) = 1;
  uVar1 = *(uint *)((int)this + 0x48c) | 0x8000000;
  if (param_1 == 0) {
    uVar1 = *(uint *)((int)this + 0x48c) & 0xf7ffffff;
  }
  *(uint *)((int)this + 0x48c) = uVar1;
  return;
}

