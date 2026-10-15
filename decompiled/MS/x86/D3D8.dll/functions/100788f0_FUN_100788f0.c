/*
 * FUN_100788f0 at 100788f0
 * bool __thiscall FUN_100788f0(void * this, int param_1)
 * Address ranges: 100788f0-1007890a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_100788f0(void *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10096746(*(void **)((int)this + 0x10),param_1);
  return pvVar1 == this;
}

