/*
 * FUN_100204ab at 100204ab
 * undefined __thiscall FUN_100204ab(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 100204ab-100204eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100204ab(void *this,int param_1,int param_2,int param_3)

{
  (**(code **)(*(int *)this + 0x170))();
  *(int *)(param_1 * 0x1a0 + 0x2da4 + (int)this) = param_2;
  *(int *)(param_1 * 0x1a0 + 0x2da8 + (int)this) = param_3;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  *(undefined1 *)(param_1 + 0x32d3 + (int)this) = 1;
  return;
}

