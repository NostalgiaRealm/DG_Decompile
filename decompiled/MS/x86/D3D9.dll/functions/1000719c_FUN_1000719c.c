/*
 * FUN_1000719c at 1000719c
 * undefined __thiscall FUN_1000719c(void * this, int param_1)
 * Address ranges: 1000719c-100071be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000719c(void *this,int param_1)

{
  if ((((param_1 == *(int *)((int)this + 0x18)) || (param_1 == *(int *)((int)this + 0x1c))) ||
      (param_1 == *(int *)((int)this + 0x20))) || (param_1 == *(int *)((int)this + 0x24))) {
    (**(code **)(*(int *)this + 0x24))();
  }
  return;
}

