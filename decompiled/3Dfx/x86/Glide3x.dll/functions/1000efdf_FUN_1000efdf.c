/*
 * FUN_1000efdf at 1000efdf
 * undefined __thiscall FUN_1000efdf(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1000efdf-1000f01c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000efdf(void *this,int param_1,int param_2,int param_3,int param_4)

{
  (**(code **)(*(int *)this + 0x170))();
  *(int *)((int)this + 0x2cd0) = param_1;
  *(int *)((int)this + 0x2cd4) = param_2;
  *(int *)((int)this + 0x2cd8) = param_3;
  *(int *)((int)this + 0x2cdc) = param_4;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  return;
}

