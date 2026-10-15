/*
 * FUN_1002ca94 at 1002ca94
 * undefined __thiscall FUN_1002ca94(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1002ca94-1002cad1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002ca94(void *this,int param_1,int param_2,int param_3,int param_4)

{
  (**(code **)(*(int *)this + 0x150))();
  *(int *)((int)this + 0x2c30) = param_1;
  *(int *)((int)this + 0x2c34) = param_2;
  *(int *)((int)this + 0x2c38) = param_3;
  *(int *)((int)this + 0x2c3c) = param_4;
  *(undefined1 *)((int)this + 0x3150) = 1;
  return;
}

