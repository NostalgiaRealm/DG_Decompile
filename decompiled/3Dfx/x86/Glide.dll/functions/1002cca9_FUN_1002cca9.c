/*
 * FUN_1002cca9 at 1002cca9
 * undefined __thiscall FUN_1002cca9(void * this, byte param_1)
 * Address ranges: 1002cca9-1002cce9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002cca9(void *this,byte param_1)

{
  (**(code **)(*(int *)this + 0x150))();
  *(float *)((int)this + 0x2c84) = (float)param_1;
  *(undefined1 *)((int)this + 0x3150) = 1;
  *(float *)((int)this + 0x2c4c) = (float)param_1 / 255.0;
  return;
}

