/*
 * FUN_1001ccb4 at 1001ccb4
 * undefined __thiscall FUN_1001ccb4(void * this, int param_1)
 * Address ranges: 1001ccb4-1001cce7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001ccb4(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x150))();
  (**(code **)(**(int **)((int)this + 0x315c) + 0x28))(0,0);
  *(undefined2 *)((int)this + 0x2bc4) = 0x101;
  *(int *)((int)this + 0x2964) = param_1;
  return;
}

