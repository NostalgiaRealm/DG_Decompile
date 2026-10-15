/*
 * FUN_1000eeab at 1000eeab
 * undefined __thiscall FUN_1000eeab(void * this, int param_1)
 * Address ranges: 1000eeab-1000eed2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000eeab(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x170))();
  *(undefined1 *)((int)this + 0x32d0) = 1;
  *(uint *)((int)this + 0x2d10) = (uint)(param_1 != 0);
  return;
}

