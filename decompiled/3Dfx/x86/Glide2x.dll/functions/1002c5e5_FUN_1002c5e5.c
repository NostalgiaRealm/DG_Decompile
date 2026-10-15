/*
 * FUN_1002c5e5 at 1002c5e5
 * undefined __thiscall FUN_1002c5e5(void * this, int param_1, int param_2)
 * Address ranges: 1002c5e5-1002c61e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c5e5(void *this,int param_1,int param_2)

{
  (**(code **)(*(int *)this + 0x150))();
  if (param_1 == 0) {
    FUN_1002c61f(this,(byte)param_2);
    *(undefined1 *)((int)this + 0x3150) = 1;
  }
  *(int *)((int)this + param_1 * 4 + 0x2994) = param_2;
  return;
}

