/*
 * FUN_10011244 at 10011244
 * undefined __thiscall FUN_10011244(void * this, int param_1)
 * Address ranges: 10011244-10011277
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10011244(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x170))();
  (**(code **)(**(int **)((int)this + 0x32dc) + 0x28))(0,0);
  *(undefined2 *)((int)this + 0x2c64) = 0x101;
  *(int *)((int)this + 0x29e0) = param_1;
  return;
}

