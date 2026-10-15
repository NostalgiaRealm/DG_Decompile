/*
 * FUN_1002c737 at 1002c737
 * undefined __thiscall FUN_1002c737(void * this, int param_1, int param_2)
 * Address ranges: 1002c737-1002c761
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c737(void *this,int param_1,int param_2)

{
  (**(code **)(*(int *)this + 0x150))();
  *(int *)(param_1 * 0x180 + 0x2cec + (int)this) = param_2;
  *(undefined1 *)((int)this + 0x3150) = 1;
  return;
}

