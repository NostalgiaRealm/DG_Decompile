/*
 * FUN_1000ee6a at 1000ee6a
 * undefined __thiscall FUN_1000ee6a(void * this, byte param_1)
 * Address ranges: 1000ee6a-1000eeaa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000ee6a(void *this,byte param_1)

{
  (**(code **)(*(int *)this + 0x170))();
  *(float *)((int)this + 0x2d24) = (float)param_1;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  *(float *)((int)this + 0x2cec) = (float)param_1 / 255.0;
  return;
}

