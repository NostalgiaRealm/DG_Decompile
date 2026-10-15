/*
 * FUN_1000ed26 at 1000ed26
 * undefined __thiscall FUN_1000ed26(void * this, uint param_1, uint param_2)
 * Address ranges: 1000ed26-1000ed53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000ed26(void *this,uint param_1,uint param_2)

{
  FUN_1000ecef(this,param_1,param_2);
  *(int *)((int)this + 0x1b8) = *(int *)((int)this + 0x1b8) - param_1;
  *(int *)((int)this + 0x1bc) = *(int *)((int)this + 0x1bc) - param_2;
  *(int *)((int)this + 0x1d8) = *(int *)((int)this + 0x1d8) + param_1;
  return;
}

