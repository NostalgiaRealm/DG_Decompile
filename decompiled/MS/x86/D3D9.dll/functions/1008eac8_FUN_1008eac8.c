/*
 * FUN_1008eac8 at 1008eac8
 * bool __thiscall FUN_1008eac8(void * this, int param_1)
 * Address ranges: 1008eac8-1008eae2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1008eac8(void *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100b8d99(*(void **)((int)this + 0x10),param_1);
  return pvVar1 == this;
}

