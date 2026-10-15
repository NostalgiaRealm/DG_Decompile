/*
 * FUN_1001a2b5 at 1001a2b5
 * longlong __thiscall FUN_1001a2b5(void * this, int param_1)
 * Address ranges: 1001a2b5-1001a2df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong __thiscall FUN_1001a2b5(void *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(int **)((int)this + 0x3020) + 0x2c))(*(int **)((int)this + 0x3020));
  return lVar1 + (ulonglong)(uint)(*(int *)((int)this + 0x301c) * param_1);
}

