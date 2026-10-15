/*
 * FUN_1002ccea at 1002ccea
 * undefined __thiscall FUN_1002ccea(void * this, int param_1)
 * Address ranges: 1002ccea-1002cd11
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002ccea(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x150))();
  *(undefined1 *)((int)this + 0x3150) = 1;
  *(uint *)((int)this + 0x2c70) = (uint)(param_1 != 0);
  return;
}

