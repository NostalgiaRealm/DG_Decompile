/*
 * FUN_100218a4 at 100218a4
 * bool __thiscall FUN_100218a4(void * this, int param_1)
 * Address ranges: 100218a4-100218be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_100218a4(void *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100494b4(*(void **)((int)this + 0x10),param_1);
  return pvVar1 == this;
}

